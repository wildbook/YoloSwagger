#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLobbySummoner_t {
    uint64_t accountId;
    std::string displayName;
    int32_t profileIconId;
    std::string puuid;
    uint64_t summonerId;
    uint32_t summonerLevel;
  };

  inline void to_json(nlohmann::json& j, const LolLobbySummoner_t& v) {
    j["accountId"] = v.accountId;
    j["displayName"] = v.displayName;
    j["profileIconId"] = v.profileIconId;
    j["puuid"] = v.puuid;
    j["summonerId"] = v.summonerId;
    j["summonerLevel"] = v.summonerLevel;
  }

  inline void from_json(const nlohmann::json& j, LolLobbySummoner_t& v) {
    v.accountId = j.at("accountId").get<uint64_t>();
    v.displayName = j.at("displayName").get<std::string>();
    v.profileIconId = j.at("profileIconId").get<int32_t>();
    v.puuid = j.at("puuid").get<std::string>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.summonerLevel = j.at("summonerLevel").get<uint32_t>();
  }
}
