#pragma once
#include <json.hpp>
#include <optional>
#include "LolGameflowGameflowAvailabilityState.hpp"
namespace leagueapi {
  struct LolGameflowGameflowAvailability_t {
    bool_t isAvailable;
    LolGameflowGameflowAvailabilityState_t state;
  };

  inline void to_json(nlohmann::json& j, const LolGameflowGameflowAvailability_t& v) {
    j["isAvailable"] = v.isAvailable;
    j["state"] = v.state;
  }

  inline void from_json(const nlohmann::json& j, LolGameflowGameflowAvailability_t& v) {
    v.isAvailable = j.at("isAvailable").get<bool_t>();
    v.state = j.at("state").get<LolGameflowGameflowAvailabilityState_t>();
  }
  inline std::string to_string(const LolGameflowGameflowAvailability_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
