#pragma once
#include <json.hpp>
#include <optional>
#include "LeaguesLcdsAggregatedStats.hpp"
namespace leagueapi {
  struct LeaguesLcdsPlayerAggregatedStats_t {
    uint64_t_t playerId;
    LeaguesLcdsAggregatedStats_t aggregatedStats;
  };

  inline void to_json(nlohmann::json& j, const LeaguesLcdsPlayerAggregatedStats_t& v) {
    j["playerId"] = v.playerId;
    j["aggregatedStats"] = v.aggregatedStats;
  }

  inline void from_json(const nlohmann::json& j, LeaguesLcdsPlayerAggregatedStats_t& v) {
    v.playerId = j.at("playerId").get<uint64_t_t>();
    v.aggregatedStats = j.at("aggregatedStats").get<LeaguesLcdsAggregatedStats_t>();
  }
  inline std::string to_string(const LeaguesLcdsPlayerAggregatedStats_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
