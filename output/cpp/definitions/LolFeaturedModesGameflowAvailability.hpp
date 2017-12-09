#pragma once
#include <json.hpp>
#include <optional>
#include "LolFeaturedModesGameflowAvailabilityState.hpp"
namespace leagueapi {
  struct LolFeaturedModesGameflowAvailability_t {
    LolFeaturedModesGameflowAvailabilityState_t state;
    bool isAvailable;
  };

  inline void to_json(nlohmann::json& j, const LolFeaturedModesGameflowAvailability_t& v) {
    j["state"] = v.state;
    j["isAvailable"] = v.isAvailable;
  }

  inline void from_json(const nlohmann::json& j, LolFeaturedModesGameflowAvailability_t& v) {
    v.state = j.at("state").get<LolFeaturedModesGameflowAvailabilityState_t>();
    v.isAvailable = j.at("isAvailable").get<bool>();
  }
  inline std::string to_string(const LolFeaturedModesGameflowAvailability_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
