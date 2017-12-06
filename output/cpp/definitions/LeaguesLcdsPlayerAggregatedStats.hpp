#pragma once
#include <json.hpp>
#include <optional>
#include "LeaguesLcdsAggregatedStats.hpp"
namespace leagueapi {
  struct LeaguesLcdsPlayerAggregatedStats_t {
    LeaguesLcdsAggregatedStats_t aggregatedStats;
    uint64_t playerId;
  };

  inline void to_json(nlohmann::json& j, const LeaguesLcdsPlayerAggregatedStats_t& v) {
    j["aggregatedStats"] = v.aggregatedStats;
    j["playerId"] = v.playerId;
  }

  inline void from_json(const nlohmann::json& j, LeaguesLcdsPlayerAggregatedStats_t& v) {
    v.aggregatedStats = j.at("aggregatedStats").get<LeaguesLcdsAggregatedStats_t>();
    v.playerId = j.at("playerId").get<uint64_t>();
  }
}
