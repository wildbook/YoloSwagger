#ifndef SWAGGER_TYPES_PlayerMissionEligibilityData_HPP
#define SWAGGER_TYPES_PlayerMissionEligibilityData_HPP
#include <json.hpp>
#include "PlayerInventory.hpp"
namespace leagueapi {
  // 
  struct PlayerMissionEligibilityData {
    // 
    int32_t level;
    // 
    PlayerInventory playerInventory;
  };

  void to_json(nlohmann::json& j, const PlayerMissionEligibilityData& v) {
    j["level"] = v.level;
    j["playerInventory"] = v.playerInventory;
  }

  void from_json(const nlohmann::json& j, PlayerMissionEligibilityData& v) {
    v.level = j.at("level").get<int32_t>;
    v.playerInventory = j.at("playerInventory").get<PlayerInventory>;
  }

}
#endif // SWAGGER_TYPES_PlayerMissionEligibilityData_HPP
