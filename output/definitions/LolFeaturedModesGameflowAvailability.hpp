#ifndef SWAGGER_TYPES_LolFeaturedModesGameflowAvailability_HPP
#define SWAGGER_TYPES_LolFeaturedModesGameflowAvailability_HPP
#include <json.hpp>
#include "LolFeaturedModesGameflowAvailabilityState.hpp"
namespace leagueapi {
  // 
  struct LolFeaturedModesGameflowAvailability {
    // 
    bool isAvailable;
    // 
    LolFeaturedModesGameflowAvailabilityState state;
  };

  void to_json(nlohmann::json& j, const LolFeaturedModesGameflowAvailability& v) {
    j["isAvailable"] = v.isAvailable;
    j["state"] = v.state;
  }

  void from_json(const nlohmann::json& j, LolFeaturedModesGameflowAvailability& v) {
    v.isAvailable = j.at("isAvailable").get<bool>;
    v.state = j.at("state").get<LolFeaturedModesGameflowAvailabilityState>;
  }

}
#endif // SWAGGER_TYPES_LolFeaturedModesGameflowAvailability_HPP
