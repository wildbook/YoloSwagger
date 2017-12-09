#pragma once
#include "../client.hpp"
#include "LolPersonalizedOffersPurchaseResponse.hpp"
#include "LolPersonalizedOffersOfferRequests.hpp"
namespace leagueapi {
  LolPersonalizedOffersPurchaseResponse_t PostLolPersonalizedOffersV1OffersPurchase (const ClientInfo& info,
    const LolPersonalizedOffersOfferRequests_t& offerRequests)
  {
    using std::to_string;
    using leagueapi::to_string;
    Headers headers = {{"Authorization", info.auth}};
    headers["content-type"] = "application/json";
    const std::string body = json(offerRequests).dump();
    std::string path = "/lol-personalized-offers/v1/offers/purchase";
    HttpsClient client(info.host, false);
    auto res = client.request("post", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
    return nlohmann::json(res->content.string());
  }
}
