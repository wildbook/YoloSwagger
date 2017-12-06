#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LeaguesLcdsAggregatedStatsKey_t {
    std::string gameMode;
    uint64_t userId;
  };

  inline void to_json(nlohmann::json& j, const LeaguesLcdsAggregatedStatsKey_t& v) {
    j["gameMode"] = v.gameMode;
    j["userId"] = v.userId;
  }

  inline void from_json(const nlohmann::json& j, LeaguesLcdsAggregatedStatsKey_t& v) {
    v.gameMode = j.at("gameMode").get<std::string>();
    v.userId = j.at("userId").get<uint64_t>();
  }
}
