#pragma once
#include <json.hpp>
#include <optional>
#include "RosterMatchAggregatedStatsDTO.hpp"
namespace leagueapi {
  struct RosterPeriodAggregatedStatsDTO_t {
    int64_t time;
    int32_t bracketSize;
    int32_t period;
    std::vector<RosterMatchAggregatedStatsDTO_t> matchStats;
  };

  inline void to_json(nlohmann::json& j, const RosterPeriodAggregatedStatsDTO_t& v) {
    j["time"] = v.time;
    j["bracketSize"] = v.bracketSize;
    j["period"] = v.period;
    j["matchStats"] = v.matchStats;
  }

  inline void from_json(const nlohmann::json& j, RosterPeriodAggregatedStatsDTO_t& v) {
    v.time = j.at("time").get<int64_t>();
    v.bracketSize = j.at("bracketSize").get<int32_t>();
    v.period = j.at("period").get<int32_t>();
    v.matchStats = j.at("matchStats").get<std::vector<RosterMatchAggregatedStatsDTO_t>>();
  }
  inline std::string to_string(const RosterPeriodAggregatedStatsDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
