#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolCollectionsSummoner_t {
    uint64_t accountId;
    int32_t profileIconId;
    uint64_t summonerId;
    uint32_t summonerLevel;
  };

  inline void to_json(nlohmann::json& j, const LolCollectionsSummoner_t& v) {
    j["accountId"] = v.accountId;
    j["profileIconId"] = v.profileIconId;
    j["summonerId"] = v.summonerId;
    j["summonerLevel"] = v.summonerLevel;
  }

  inline void from_json(const nlohmann::json& j, LolCollectionsSummoner_t& v) {
    v.accountId = j.at("accountId").get<uint64_t>();
    v.profileIconId = j.at("profileIconId").get<int32_t>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.summonerLevel = j.at("summonerLevel").get<uint32_t>();
  }
}
