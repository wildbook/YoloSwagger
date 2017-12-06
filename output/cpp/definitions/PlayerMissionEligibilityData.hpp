#pragma once
#include <json.hpp>
#include <optional>
#include "PlayerInventory.hpp"
namespace leagueapi {
  struct PlayerMissionEligibilityData_t {
    int32_t level;
    PlayerInventory_t playerInventory;
  };

  inline void to_json(nlohmann::json& j, const PlayerMissionEligibilityData_t& v) {
    j["level"] = v.level;
    j["playerInventory"] = v.playerInventory;
  }

  inline void from_json(const nlohmann::json& j, PlayerMissionEligibilityData_t& v) {
    v.level = j.at("level").get<int32_t>();
    v.playerInventory = j.at("playerInventory").get<PlayerInventory_t>();
  }
}
