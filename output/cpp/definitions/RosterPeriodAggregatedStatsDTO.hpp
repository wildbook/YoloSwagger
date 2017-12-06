#pragma once
#include <json.hpp>
#include <optional>
#include "RosterMatchAggregatedStatsDTO.hpp"
namespace leagueapi {
  struct RosterPeriodAggregatedStatsDTO_t {
    std::vector<RosterMatchAggregatedStatsDTO_t> matchStats;
    int32_t bracketSize;
    int64_t time;
    int32_t period;
  };

  inline void to_json(nlohmann::json& j, const RosterPeriodAggregatedStatsDTO_t& v) {
    j["matchStats"] = v.matchStats;
    j["bracketSize"] = v.bracketSize;
    j["time"] = v.time;
    j["period"] = v.period;
  }

  inline void from_json(const nlohmann::json& j, RosterPeriodAggregatedStatsDTO_t& v) {
    v.matchStats = j.at("matchStats").get<std::vector<RosterMatchAggregatedStatsDTO_t>>();
    v.bracketSize = j.at("bracketSize").get<int32_t>();
    v.time = j.at("time").get<int64_t>();
    v.period = j.at("period").get<int32_t>();
  }
}
