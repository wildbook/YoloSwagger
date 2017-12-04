#ifndef SWAGGER_TYPES_LeaguesLcdsAggregatedStats_HPP
#define SWAGGER_TYPES_LeaguesLcdsAggregatedStats_HPP
#include <json.hpp>
#include "LeaguesLcdsAggregatedStatsKey.hpp"
#include "LeaguesLcdsAggregatedStat.hpp"
namespace leagueapi {
  // 
  struct LeaguesLcdsAggregatedStats {
    // 
    LeaguesLcdsAggregatedStatsKey key;
    // 
    std::vector<LeaguesLcdsAggregatedStat> lifetimeStatistics;
  };

  void to_json(nlohmann::json& j, const LeaguesLcdsAggregatedStats& v) {
    j["key"] = v.key;
    j["lifetimeStatistics"] = v.lifetimeStatistics;
  }

  void from_json(const nlohmann::json& j, LeaguesLcdsAggregatedStats& v) {
    v.key = j.at("key").get<LeaguesLcdsAggregatedStatsKey>;
    v.lifetimeStatistics = j.at("lifetimeStatistics").get<std::vector<LeaguesLcdsAggregatedStat>>;
  }

}
#endif // SWAGGER_TYPES_LeaguesLcdsAggregatedStats_HPP
