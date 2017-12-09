#pragma once
#include <json.hpp>
#include <optional>
#include "LolRankedStatsRankedEntry.hpp"
namespace leagueapi {
  struct LolRankedStatsRankedData_t {
    std::vector<LolRankedStatsRankedEntry_t> rankedData;
    uint64_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const LolRankedStatsRankedData_t& v) {
    j["rankedData"] = v.rankedData;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, LolRankedStatsRankedData_t& v) {
    v.rankedData = j.at("rankedData").get<std::vector<LolRankedStatsRankedEntry_t>>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
  }
  inline std::string to_string(const LolRankedStatsRankedData_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
