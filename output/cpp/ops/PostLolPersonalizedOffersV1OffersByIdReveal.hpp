#pragma once
#include "../client.hpp"
#include "LolPersonalizedOffersUIOffer.hpp"
namespace leagueapi {
  std::vector<LolPersonalizedOffersUIOffer_t> PostLolPersonalizedOffersV1OffersByIdReveal (const ClientInfo& info,
    const std::string& id)
  {
    using std::to_string;
    using leagueapi::to_string;
    Headers headers = {{"Authorization", info.auth}};
    const std::string body ="";
    std::string path = "/lol-personalized-offers/v1/offers/"+UrlCode::encode(to_string(id))+"/reveal";
    HttpsClient client(info.host, false);
    auto res = client.request("post", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
      return nlohmann::json(res->content.string());
  }
}
