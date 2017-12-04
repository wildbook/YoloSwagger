#ifndef SWAGGER_TYPES_LolRankedStatsRankedData_HPP
#define SWAGGER_TYPES_LolRankedStatsRankedData_HPP
#include <json.hpp>
#include "LolRankedStatsRankedEntry.hpp"
namespace leagueapi {
  // 
  struct LolRankedStatsRankedData {
    // 
    std::vector<LolRankedStatsRankedEntry> rankedData;
    // 
    uint64_t summonerId;
  };

  void to_json(nlohmann::json& j, const LolRankedStatsRankedData& v) {
    j["rankedData"] = v.rankedData;
    j["summonerId"] = v.summonerId;
  }

  void from_json(const nlohmann::json& j, LolRankedStatsRankedData& v) {
    v.rankedData = j.at("rankedData").get<std::vector<LolRankedStatsRankedEntry>>;
    v.summonerId = j.at("summonerId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LolRankedStatsRankedData_HPP
