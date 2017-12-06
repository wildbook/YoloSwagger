#pragma once
#include <json.hpp>
#include <optional>
#include "LeaguesLcdsAggregatedStatsKey.hpp"
#include "LeaguesLcdsAggregatedStat.hpp"
namespace leagueapi {
  struct LeaguesLcdsAggregatedStats_t {
    std::vector<LeaguesLcdsAggregatedStat_t> lifetimeStatistics;
    LeaguesLcdsAggregatedStatsKey_t key;
  };

  inline void to_json(nlohmann::json& j, const LeaguesLcdsAggregatedStats_t& v) {
    j["lifetimeStatistics"] = v.lifetimeStatistics;
    j["key"] = v.key;
  }

  inline void from_json(const nlohmann::json& j, LeaguesLcdsAggregatedStats_t& v) {
    v.lifetimeStatistics = j.at("lifetimeStatistics").get<std::vector<LeaguesLcdsAggregatedStat_t>>();
    v.key = j.at("key").get<LeaguesLcdsAggregatedStatsKey_t>();
  }
}
