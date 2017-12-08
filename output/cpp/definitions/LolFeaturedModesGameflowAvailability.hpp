#pragma once
#include <json.hpp>
#include <optional>
#include "LolFeaturedModesGameflowAvailabilityState.hpp"
namespace leagueapi {
  struct LolFeaturedModesGameflowAvailability_t {
    bool isAvailable;
    LolFeaturedModesGameflowAvailabilityState_t state;
  };

  inline void to_json(nlohmann::json& j, const LolFeaturedModesGameflowAvailability_t& v) {
    j["isAvailable"] = v.isAvailable;
    j["state"] = v.state;
  }

  inline void from_json(const nlohmann::json& j, LolFeaturedModesGameflowAvailability_t& v) {
    v.isAvailable = j.at("isAvailable").get<bool>();
    v.state = j.at("state").get<LolFeaturedModesGameflowAvailabilityState_t>();
  }
  inline std::string to_string(const LolFeaturedModesGameflowAvailability_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
