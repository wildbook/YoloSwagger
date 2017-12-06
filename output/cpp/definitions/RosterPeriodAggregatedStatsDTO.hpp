#pragma once
#include <json.hpp>
#include <optional>
#include "RosterMatchAggregatedStatsDTO.hpp"
namespace leagueapi {
  struct RosterPeriodAggregatedStatsDTO_t {
    int32_t bracketSize;
    std::vector<RosterMatchAggregatedStatsDTO_t> matchStats;
    int32_t period;
    int64_t time;
  };

  inline void to_json(nlohmann::json& j, const RosterPeriodAggregatedStatsDTO_t& v) {
    j["bracketSize"] = v.bracketSize;
    j["matchStats"] = v.matchStats;
    j["period"] = v.period;
    j["time"] = v.time;
  }

  inline void from_json(const nlohmann::json& j, RosterPeriodAggregatedStatsDTO_t& v) {
    v.bracketSize = j.at("bracketSize").get<int32_t>();
    v.matchStats = j.at("matchStats").get<std::vector<RosterMatchAggregatedStatsDTO_t>>();
    v.period = j.at("period").get<int32_t>();
    v.time = j.at("time").get<int64_t>();
  }
}
