#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolRankedStatsRankedSummonerResource_t {
    uint64_t_t summonerId;
    uint64_t_t accountId;
  };

  inline void to_json(nlohmann::json& j, const LolRankedStatsRankedSummonerResource_t& v) {
    j["summonerId"] = v.summonerId;
    j["accountId"] = v.accountId;
  }

  inline void from_json(const nlohmann::json& j, LolRankedStatsRankedSummonerResource_t& v) {
    v.summonerId = j.at("summonerId").get<uint64_t_t>();
    v.accountId = j.at("accountId").get<uint64_t_t>();
  }
  inline std::string to_string(const LolRankedStatsRankedSummonerResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
