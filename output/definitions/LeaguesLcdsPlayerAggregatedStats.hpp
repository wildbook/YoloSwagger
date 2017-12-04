#ifndef SWAGGER_TYPES_LeaguesLcdsPlayerAggregatedStats_HPP
#define SWAGGER_TYPES_LeaguesLcdsPlayerAggregatedStats_HPP
#include <json.hpp>
#include "LeaguesLcdsAggregatedStats.hpp"
namespace leagueapi {
  // 
  struct LeaguesLcdsPlayerAggregatedStats {
    // 
    LeaguesLcdsAggregatedStats aggregatedStats;
    // 
    uint64_t playerId;
  };

  inline void to_json(nlohmann::json& j, const LeaguesLcdsPlayerAggregatedStats& v) {
    j["aggregatedStats"] = v.aggregatedStats;
    j["playerId"] = v.playerId;
  }

  inline void from_json(const nlohmann::json& j, LeaguesLcdsPlayerAggregatedStats& v) {
    v.aggregatedStats = j.at("aggregatedStats").get<LeaguesLcdsAggregatedStats>;
    v.playerId = j.at("playerId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LeaguesLcdsPlayerAggregatedStats_HPP
