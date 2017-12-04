#ifndef SWAGGER_TYPES_PlayerLifetimeStats_HPP
#define SWAGGER_TYPES_PlayerLifetimeStats_HPP
#include <json.hpp>
#include "PlayerStatSummaries.hpp"
namespace test {
  // 
  struct PlayerLifetimeStats {
'    // 
    PlayerStatSummaries playerStatSummaries;
  };

  void to_json(nlohmann::json& j, const PlayerLifetimeStats& v) {
    j["playerStatSummaries"] = v.playerStatSummaries;
  }

  void from_json(const nlohmann::json& j, PlayerLifetimeStats& v) {
    v.playerStatSummaries = j.at("playerStatSummaries").get<PlayerStatSummaries>;
  }

}
#endif // SWAGGER_TYPES_PlayerLifetimeStats_HPP
