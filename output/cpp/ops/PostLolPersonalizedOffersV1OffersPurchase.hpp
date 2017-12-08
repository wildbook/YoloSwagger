#pragma once
#incldue "../client.hpp"
#include "LolPersonalizedOffersOfferRequests.hpp"
#include "LolPersonalizedOffersPurchaseResponse.hpp"
namespace leagueapi {
  LolPersonalizedOffersPurchaseResponse_t PostLolPersonalizedOffersV1OffersPurchase (const ClientInfo& info,
    const LolPersonalizedOffersOfferRequests_t& offerRequests)
  {
    using std::to_string;
    Headers headers = {{"Authorization", auth}};
    headers["content-type"] = "application/json";
    const std::string body = json(offerRequests).dump();
    const std::string path = "/lol-personalized-offers/v1/offers/purchase";
    HttpsClient client(info.host, false);
    auto res = client.request("post", path, body, headers);
    if(res->status_code != 406)
      throw OpError(res->content.string());
    if(auto it = res->header.find("content-type"); it !=res->header.end() && it->second == "application/json")
      return nlohmann::json(res->content.string());
    return res->content.string();
  }
}
