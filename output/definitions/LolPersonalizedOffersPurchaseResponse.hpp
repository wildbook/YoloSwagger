#ifndef SWAGGER_TYPES_LolPersonalizedOffersPurchaseResponse_HPP
#define SWAGGER_TYPES_LolPersonalizedOffersPurchaseResponse_HPP
#include <json.hpp>
#include "LolPersonalizedOffersPurchaseItem.hpp"
#include "LolPersonalizedOffersWallet.hpp"
namespace leagueapi {
  // 
  struct LolPersonalizedOffersPurchaseResponse {
    // 
    std::vector<LolPersonalizedOffersPurchaseItem> items;
    // 
    LolPersonalizedOffersWallet wallet;
  };

  inline void to_json(nlohmann::json& j, const LolPersonalizedOffersPurchaseResponse& v) {
    j["items"] = v.items;
    j["wallet"] = v.wallet;
  }

  inline void from_json(const nlohmann::json& j, LolPersonalizedOffersPurchaseResponse& v) {
    v.items = j.at("items").get<std::vector<LolPersonalizedOffersPurchaseItem>>;
    v.wallet = j.at("wallet").get<LolPersonalizedOffersWallet>;
  }

}
#endif // SWAGGER_TYPES_LolPersonalizedOffersPurchaseResponse_HPP
