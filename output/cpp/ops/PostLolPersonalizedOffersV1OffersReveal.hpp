#pragma once
#incldue "../client.hpp"
#include "LolPersonalizedOffersOfferIds.hpp"
#include "LolPersonalizedOffersUIOffer.hpp"
namespace leagueapi {
  std::vector<LolPersonalizedOffersUIOffer_t> PostLolPersonalizedOffersV1OffersReveal (const ClientInfo& info,
    const LolPersonalizedOffersOfferIds_t& offerIds)
  {
    using std::to_string;
    Headers headers = {{"Authorization", auth}};
    headers["content-type"] = "application/json";
    const std::string body = json(offerIds).dump();
    const std::string path = "/lol-personalized-offers/v1/offers/reveal";
    HttpsClient client(info.host, false);
    auto res = client.request("post", path, body, headers);
    if(res->status_code != 406)
      throw OpError(res->content.string());
    if(auto it = res->header.find("content-type"); it !=res->header.end() && it->second == "application/json")
      return nlohmann::json(res->content.string());
    return res->content.string();
  }
}
