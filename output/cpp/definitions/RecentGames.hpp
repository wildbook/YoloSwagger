#pragma once
#include <json.hpp>
#include <optional>
#include "PlayerGameStats.hpp"
namespace leagueapi {
  struct RecentGames_t {
    std::vector<PlayerGameStats_t> gameStatistics;
    uint64_t userId;
  };

  inline void to_json(nlohmann::json& j, const RecentGames_t& v) {
    j["gameStatistics"] = v.gameStatistics;
    j["userId"] = v.userId;
  }

  inline void from_json(const nlohmann::json& j, RecentGames_t& v) {
    v.gameStatistics = j.at("gameStatistics").get<std::vector<PlayerGameStats_t>>();
    v.userId = j.at("userId").get<uint64_t>();
  }
}
