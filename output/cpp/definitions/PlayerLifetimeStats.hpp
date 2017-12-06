#pragma once
#include <json.hpp>
#include <optional>
#include "PlayerStatSummaries.hpp"
namespace leagueapi {
  struct PlayerLifetimeStats_t {
    PlayerStatSummaries_t playerStatSummaries;
  };

  inline void to_json(nlohmann::json& j, const PlayerLifetimeStats_t& v) {
    j["playerStatSummaries"] = v.playerStatSummaries;
  }

  inline void from_json(const nlohmann::json& j, PlayerLifetimeStats_t& v) {
    v.playerStatSummaries = j.at("playerStatSummaries").get<PlayerStatSummaries_t>();
  }
}
