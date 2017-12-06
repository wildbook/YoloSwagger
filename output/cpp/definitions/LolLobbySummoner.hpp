#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLobbySummoner_t {
    uint32_t summonerLevel;
    std::string displayName;
    int32_t profileIconId;
    std::string puuid;
    uint64_t accountId;
    uint64_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const LolLobbySummoner_t& v) {
    j["summonerLevel"] = v.summonerLevel;
    j["displayName"] = v.displayName;
    j["profileIconId"] = v.profileIconId;
    j["puuid"] = v.puuid;
    j["accountId"] = v.accountId;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, LolLobbySummoner_t& v) {
    v.summonerLevel = j.at("summonerLevel").get<uint32_t>();
    v.displayName = j.at("displayName").get<std::string>();
    v.profileIconId = j.at("profileIconId").get<int32_t>();
    v.puuid = j.at("puuid").get<std::string>();
    v.accountId = j.at("accountId").get<uint64_t>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
  }
}
