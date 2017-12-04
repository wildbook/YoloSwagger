#ifndef SWAGGER_TYPES_LolRankedStatsRankedData_HPP
#define SWAGGER_TYPES_LolRankedStatsRankedData_HPP
#include <json.hpp>
#include "LolRankedStatsRankedEntry.hpp"
namespace leagueapi {
  // 
  struct LolRankedStatsRankedData {
    // 
    uint64_t summonerId;
    // 
    std::vector<LolRankedStatsRankedEntry> rankedData;
  };

  inline void to_json(nlohmann::json& j, const LolRankedStatsRankedData& v) {
    j["summonerId"] = v.summonerId;
    j["rankedData"] = v.rankedData;
  }

  inline void from_json(const nlohmann::json& j, LolRankedStatsRankedData& v) {
    v.summonerId = j.at("summonerId").get<uint64_t>;
    v.rankedData = j.at("rankedData").get<std::vector<LolRankedStatsRankedEntry>>;
  }

}
#endif // SWAGGER_TYPES_LolRankedStatsRankedData_HPP
