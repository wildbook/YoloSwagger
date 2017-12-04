#ifndef SWAGGER_TYPES_RosterPeriodAggregatedStatsDTO_HPP
#define SWAGGER_TYPES_RosterPeriodAggregatedStatsDTO_HPP
#include <json.hpp>
#include "RosterMatchAggregatedStatsDTO.hpp"
namespace leagueapi {
  // 
  struct RosterPeriodAggregatedStatsDTO {
    // 
    int32_t bracketSize;
    // 
    std::vector<RosterMatchAggregatedStatsDTO> matchStats;
    // 
    int32_t period;
    // 
    int64_t time;
  };

  inline void to_json(nlohmann::json& j, const RosterPeriodAggregatedStatsDTO& v) {
    j["bracketSize"] = v.bracketSize;
    j["matchStats"] = v.matchStats;
    j["period"] = v.period;
    j["time"] = v.time;
  }

  inline void from_json(const nlohmann::json& j, RosterPeriodAggregatedStatsDTO& v) {
    v.bracketSize = j.at("bracketSize").get<int32_t>;
    v.matchStats = j.at("matchStats").get<std::vector<RosterMatchAggregatedStatsDTO>>;
    v.period = j.at("period").get<int32_t>;
    v.time = j.at("time").get<int64_t>;
  }

}
#endif // SWAGGER_TYPES_RosterPeriodAggregatedStatsDTO_HPP
