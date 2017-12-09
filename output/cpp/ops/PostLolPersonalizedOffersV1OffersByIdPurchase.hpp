#pragma once
#include "../client.hpp"
#include "LolPersonalizedOffersPurchaseResponse.hpp"
namespace leagueapi {
  LolPersonalizedOffersPurchaseResponse_t PostLolPersonalizedOffersV1OffersByIdPurchase (const ClientInfo& info,
    const std::string& id)
  {
    using std::to_string;
    using leagueapi::to_string;
    Headers headers = {{"Authorization", info.auth}};
    const std::string body ="";
    std::string path = "/lol-personalized-offers/v1/offers/"+UrlCode::encode(to_string(id))+"/purchase";
    HttpsClient client(info.host, false);
    auto res = client.request("post", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
      return nlohmann::json(res->content.string());
  }
}
