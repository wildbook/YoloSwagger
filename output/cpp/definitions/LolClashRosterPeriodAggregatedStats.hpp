#pragma once
#include <json.hpp>
#include <optional>
#include "LolClashRosterMatchAggregatedStats.hpp"
namespace leagueapi {
  struct LolClashRosterPeriodAggregatedStats_t {
    std::vector<LolClashRosterMatchAggregatedStats_t> matchStats;
    int32_t_t bracketSize;
    int32_t_t period;
    int64_t_t time;
  };

  inline void to_json(nlohmann::json& j, const LolClashRosterPeriodAggregatedStats_t& v) {
    j["matchStats"] = v.matchStats;
    j["bracketSize"] = v.bracketSize;
    j["period"] = v.period;
    j["time"] = v.time;
  }

  inline void from_json(const nlohmann::json& j, LolClashRosterPeriodAggregatedStats_t& v) {
    v.matchStats = j.at("matchStats").get<std::vector<LolClashRosterMatchAggregatedStats_t>>();
    v.bracketSize = j.at("bracketSize").get<int32_t_t>();
    v.period = j.at("period").get<int32_t_t>();
    v.time = j.at("time").get<int64_t_t>();
  }
  inline std::string to_string(const LolClashRosterPeriodAggregatedStats_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
