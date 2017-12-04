#ifndef SWAGGER_TYPES_LolClashRosterPeriodAggregatedStats_HPP
#define SWAGGER_TYPES_LolClashRosterPeriodAggregatedStats_HPP
#include <json.hpp>
#include "LolClashRosterMatchAggregatedStats.hpp"
namespace leagueapi {
  // 
  struct LolClashRosterPeriodAggregatedStats {
    // 
    std::vector<LolClashRosterMatchAggregatedStats> matchStats;
    // 
    int32_t bracketSize;
    // 
    int32_t period;
    // 
    int64_t time;
  };

  inline void to_json(nlohmann::json& j, const LolClashRosterPeriodAggregatedStats& v) {
    j["matchStats"] = v.matchStats;
    j["bracketSize"] = v.bracketSize;
    j["period"] = v.period;
    j["time"] = v.time;
  }

  inline void from_json(const nlohmann::json& j, LolClashRosterPeriodAggregatedStats& v) {
    v.matchStats = j.at("matchStats").get<std::vector<LolClashRosterMatchAggregatedStats>>;
    v.bracketSize = j.at("bracketSize").get<int32_t>;
    v.period = j.at("period").get<int32_t>;
    v.time = j.at("time").get<int64_t>;
  }

}
#endif // SWAGGER_TYPES_LolClashRosterPeriodAggregatedStats_HPP
