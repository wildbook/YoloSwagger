#pragma once
#include <json.hpp>
#include <optional>
#include "RosterMatchAggregatedStatsDTO.hpp"
namespace leagueapi {
  struct RosterPeriodAggregatedStatsDTO_t {
    int32_t period;
    int32_t bracketSize;
    int64_t time;
    std::vector<RosterMatchAggregatedStatsDTO_t> matchStats;
  };

  inline void to_json(nlohmann::json& j, const RosterPeriodAggregatedStatsDTO_t& v) {
    j["period"] = v.period;
    j["bracketSize"] = v.bracketSize;
    j["time"] = v.time;
    j["matchStats"] = v.matchStats;
  }

  inline void from_json(const nlohmann::json& j, RosterPeriodAggregatedStatsDTO_t& v) {
    v.period = j.at("period").get<int32_t>();
    v.bracketSize = j.at("bracketSize").get<int32_t>();
    v.time = j.at("time").get<int64_t>();
    v.matchStats = j.at("matchStats").get<std::vector<RosterMatchAggregatedStatsDTO_t>>();
  }
  inline std::string to_string(const RosterPeriodAggregatedStatsDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
