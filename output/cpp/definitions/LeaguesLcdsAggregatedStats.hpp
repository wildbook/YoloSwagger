#ifndef SWAGGER_TYPES_LeaguesLcdsAggregatedStats_HPP
#define SWAGGER_TYPES_LeaguesLcdsAggregatedStats_HPP
#include <json.hpp>
#include "LeaguesLcdsAggregatedStatsKey.hpp"
#include "LeaguesLcdsAggregatedStat.hpp"
namespace leagueapi {
  // 
  struct LeaguesLcdsAggregatedStats {
    // 
    std::vector<LeaguesLcdsAggregatedStat> lifetimeStatistics;
    // 
    LeaguesLcdsAggregatedStatsKey key;
  };

  inline void to_json(nlohmann::json& j, const LeaguesLcdsAggregatedStats& v) {
    j["lifetimeStatistics"] = v.lifetimeStatistics;
    j["key"] = v.key;
  }

  inline void from_json(const nlohmann::json& j, LeaguesLcdsAggregatedStats& v) {
    v.lifetimeStatistics = j.at("lifetimeStatistics").get<std::vector<LeaguesLcdsAggregatedStat>>;
    v.key = j.at("key").get<LeaguesLcdsAggregatedStatsKey>;
  }

}
#endif // SWAGGER_TYPES_LeaguesLcdsAggregatedStats_HPP
