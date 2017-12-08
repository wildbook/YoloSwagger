#pragma once
#include <json.hpp>
#include <optional>
#include "PlayerInventory.hpp"
namespace leagueapi {
  struct PlayerMissionEligibilityData_t {
    PlayerInventory_t playerInventory;
    int32_t level;
  };

  inline void to_json(nlohmann::json& j, const PlayerMissionEligibilityData_t& v) {
    j["playerInventory"] = v.playerInventory;
    j["level"] = v.level;
  }

  inline void from_json(const nlohmann::json& j, PlayerMissionEligibilityData_t& v) {
    v.playerInventory = j.at("playerInventory").get<PlayerInventory_t>();
    v.level = j.at("level").get<int32_t>();
  }
  inline std::string to_string(const PlayerMissionEligibilityData_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
