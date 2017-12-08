#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolRankedStatsRankedSummonerResource_t {
    uint64_t accountId;
    uint64_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const LolRankedStatsRankedSummonerResource_t& v) {
    j["accountId"] = v.accountId;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, LolRankedStatsRankedSummonerResource_t& v) {
    v.accountId = j.at("accountId").get<uint64_t>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
  }
  inline std::string to_string(const LolRankedStatsRankedSummonerResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
