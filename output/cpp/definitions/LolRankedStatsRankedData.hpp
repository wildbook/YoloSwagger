#pragma once
#include <json.hpp>
#include <optional>
#include "LolRankedStatsRankedEntry.hpp"
namespace leagueapi {
  struct LolRankedStatsRankedData_t {
    uint64_t summonerId;
    std::vector<LolRankedStatsRankedEntry_t> rankedData;
  };

  inline void to_json(nlohmann::json& j, const LolRankedStatsRankedData_t& v) {
    j["summonerId"] = v.summonerId;
    j["rankedData"] = v.rankedData;
  }

  inline void from_json(const nlohmann::json& j, LolRankedStatsRankedData_t& v) {
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.rankedData = j.at("rankedData").get<std::vector<LolRankedStatsRankedEntry_t>>();
  }
  inline std::string to_string(const LolRankedStatsRankedData_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
