#pragma once
#include <json.hpp>
#include <optional>
#include "LolGameflowGameflowAvailabilityState.hpp"
namespace leagueapi {
  struct LolGameflowGameflowAvailability_t {
    LolGameflowGameflowAvailabilityState_t state;
    bool isAvailable;
  };

  inline void to_json(nlohmann::json& j, const LolGameflowGameflowAvailability_t& v) {
    j["state"] = v.state;
    j["isAvailable"] = v.isAvailable;
  }

  inline void from_json(const nlohmann::json& j, LolGameflowGameflowAvailability_t& v) {
    v.state = j.at("state").get<LolGameflowGameflowAvailabilityState_t>();
    v.isAvailable = j.at("isAvailable").get<bool>();
  }
  inline std::string to_string(const LolGameflowGameflowAvailability_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
