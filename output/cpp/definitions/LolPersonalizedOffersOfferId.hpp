#ifndef SWAGGER_TYPES_LolPersonalizedOffersOfferId_HPP
#define SWAGGER_TYPES_LolPersonalizedOffersOfferId_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolPersonalizedOffersOfferId {
    // 
    std::string offerId;
  };

  inline void to_json(nlohmann::json& j, const LolPersonalizedOffersOfferId& v) {
    j["offerId"] = v.offerId;
  }

  inline void from_json(const nlohmann::json& j, LolPersonalizedOffersOfferId& v) {
    v.offerId = j.at("offerId").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolPersonalizedOffersOfferId_HPP
