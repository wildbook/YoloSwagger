#ifndef SWAGGER_TYPES_LeaguesLcdsPlayerAggregatedStats_HPP
#define SWAGGER_TYPES_LeaguesLcdsPlayerAggregatedStats_HPP
#include <json.hpp>
#include "LeaguesLcdsAggregatedStats.hpp"
namespace leagueapi {
  // 
  struct LeaguesLcdsPlayerAggregatedStats {
    // 
    uint64_t playerId;
    // 
    LeaguesLcdsAggregatedStats aggregatedStats;
  };

  inline void to_json(nlohmann::json& j, const LeaguesLcdsPlayerAggregatedStats& v) {
    j["playerId"] = v.playerId;
    j["aggregatedStats"] = v.aggregatedStats;
  }

  inline void from_json(const nlohmann::json& j, LeaguesLcdsPlayerAggregatedStats& v) {
    v.playerId = j.at("playerId").get<uint64_t>;
    v.aggregatedStats = j.at("aggregatedStats").get<LeaguesLcdsAggregatedStats>;
  }

}
#endif // SWAGGER_TYPES_LeaguesLcdsPlayerAggregatedStats_HPP
