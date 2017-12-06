#pragma once
#include <json.hpp>
#include <optional>
#include "LeaguesLcdsAggregatedStat.hpp"
#include "LeaguesLcdsAggregatedStatsKey.hpp"
namespace leagueapi {
  struct LeaguesLcdsAggregatedStats_t {
    LeaguesLcdsAggregatedStatsKey_t key;
    std::vector<LeaguesLcdsAggregatedStat_t> lifetimeStatistics;
  };

  inline void to_json(nlohmann::json& j, const LeaguesLcdsAggregatedStats_t& v) {
    j["key"] = v.key;
    j["lifetimeStatistics"] = v.lifetimeStatistics;
  }

  inline void from_json(const nlohmann::json& j, LeaguesLcdsAggregatedStats_t& v) {
    v.key = j.at("key").get<LeaguesLcdsAggregatedStatsKey_t>();
    v.lifetimeStatistics = j.at("lifetimeStatistics").get<std::vector<LeaguesLcdsAggregatedStat_t>>();
  }
}
