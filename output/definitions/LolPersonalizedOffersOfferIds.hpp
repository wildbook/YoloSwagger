#ifndef SWAGGER_TYPES_LolPersonalizedOffersOfferIds_HPP
#define SWAGGER_TYPES_LolPersonalizedOffersOfferIds_HPP
#include <json.hpp>
#include "LolPersonalizedOffersOfferId.hpp"
namespace test {
  // 
  struct LolPersonalizedOffersOfferIds {
'    // 
    std::vector<LolPersonalizedOffersOfferId> offers;
  };

  void to_json(nlohmann::json& j, const LolPersonalizedOffersOfferIds& v) {
    j["offers"] = v.offers;
  }

  void from_json(const nlohmann::json& j, LolPersonalizedOffersOfferIds& v) {
    v.offers = j.at("offers").get<std::vector<LolPersonalizedOffersOfferId>>;
  }

}
#endif // SWAGGER_TYPES_LolPersonalizedOffersOfferIds_HPP
