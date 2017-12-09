#pragma once
#include <json.hpp>
#include <optional>
#include "PlayerGameStats.hpp"
namespace leagueapi {
  struct RecentGames_t {
    uint64_t userId;
    std::vector<PlayerGameStats_t> gameStatistics;
  };

  inline void to_json(nlohmann::json& j, const RecentGames_t& v) {
    j["userId"] = v.userId;
    j["gameStatistics"] = v.gameStatistics;
  }

  inline void from_json(const nlohmann::json& j, RecentGames_t& v) {
    v.userId = j.at("userId").get<uint64_t>();
    v.gameStatistics = j.at("gameStatistics").get<std::vector<PlayerGameStats_t>>();
  }
  inline std::string to_string(const RecentGames_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
