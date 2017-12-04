#ifndef SWAGGER_TYPES_PlayerMissionEligibilityData_HPP
#define SWAGGER_TYPES_PlayerMissionEligibilityData_HPP
#include <json.hpp>
#include "PlayerInventory.hpp"
namespace leagueapi {
  // 
  struct PlayerMissionEligibilityData {
    // 
    PlayerInventory playerInventory;
    // 
    int32_t level;
  };

  inline void to_json(nlohmann::json& j, const PlayerMissionEligibilityData& v) {
    j["playerInventory"] = v.playerInventory;
    j["level"] = v.level;
  }

  inline void from_json(const nlohmann::json& j, PlayerMissionEligibilityData& v) {
    v.playerInventory = j.at("playerInventory").get<PlayerInventory>;
    v.level = j.at("level").get<int32_t>;
  }

}
#endif // SWAGGER_TYPES_PlayerMissionEligibilityData_HPP
