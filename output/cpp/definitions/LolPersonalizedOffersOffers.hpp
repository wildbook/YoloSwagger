#ifndef SWAGGER_TYPES_LolPersonalizedOffersOffers_HPP
#define SWAGGER_TYPES_LolPersonalizedOffersOffers_HPP
#include <json.hpp>
#include "LolPersonalizedOffersOffer.hpp"
namespace leagueapi {
  // 
  struct LolPersonalizedOffersOffers {
    // 
    std::vector<LolPersonalizedOffersOffer> offers;
  };

  inline void to_json(nlohmann::json& j, const LolPersonalizedOffersOffers& v) {
    j["offers"] = v.offers;
  }

  inline void from_json(const nlohmann::json& j, LolPersonalizedOffersOffers& v) {
    v.offers = j.at("offers").get<std::vector<LolPersonalizedOffersOffer>>;
  }

}
#endif // SWAGGER_TYPES_LolPersonalizedOffersOffers_HPP
