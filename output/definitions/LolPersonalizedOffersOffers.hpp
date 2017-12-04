#ifndef SWAGGER_TYPES_LolPersonalizedOffersOffers_HPP
#define SWAGGER_TYPES_LolPersonalizedOffersOffers_HPP
#include <json.hpp>
#include "LolPersonalizedOffersOffer.hpp"
namespace test {
  // 
  struct LolPersonalizedOffersOffers {
'    // 
    std::vector<LolPersonalizedOffersOffer> offers;
  };

  void to_json(nlohmann::json& j, const LolPersonalizedOffersOffers& v) {
    j["offers"] = v.offers;
  }

  void from_json(const nlohmann::json& j, LolPersonalizedOffersOffers& v) {
    v.offers = j.at("offers").get<std::vector<LolPersonalizedOffersOffer>>;
  }

}
#endif // SWAGGER_TYPES_LolPersonalizedOffersOffers_HPP
