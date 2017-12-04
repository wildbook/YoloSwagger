#ifndef SWAGGER_TYPES_LolGameflowGameflowAvailability_HPP
#define SWAGGER_TYPES_LolGameflowGameflowAvailability_HPP
#include <json.hpp>
#include "LolGameflowGameflowAvailabilityState.hpp"
namespace leagueapi {
  // 
  struct LolGameflowGameflowAvailability {
    // 
    bool isAvailable;
    // 
    LolGameflowGameflowAvailabilityState state;
  };

  void to_json(nlohmann::json& j, const LolGameflowGameflowAvailability& v) {
    j["isAvailable"] = v.isAvailable;
    j["state"] = v.state;
  }

  void from_json(const nlohmann::json& j, LolGameflowGameflowAvailability& v) {
    v.isAvailable = j.at("isAvailable").get<bool>;
    v.state = j.at("state").get<LolGameflowGameflowAvailabilityState>;
  }

}
#endif // SWAGGER_TYPES_LolGameflowGameflowAvailability_HPP
