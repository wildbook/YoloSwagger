#pragma once
#include <json.hpp>
#include <optional>
#include "LolPerksSummonerRerollPoints.hpp"
namespace leagueapi {
  struct LolPerksSummoner_t {
    uint32_t summonerLevel;
    int32_t profileIconId;
    std::string puuid;
    uint64_t accountId;
    uint32_t percentCompleteForNextLevel;
    LolPerksSummonerRerollPoints_t rerollPoints;
    uint64_t xpUntilNextLevel;
    std::string displayName;
    uint64_t xpSinceLastLevel;
    std::string internalName;
    std::string lastSeasonHighestRank;
    uint64_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const LolPerksSummoner_t& v) {
    j["summonerLevel"] = v.summonerLevel;
    j["profileIconId"] = v.profileIconId;
    j["puuid"] = v.puuid;
    j["accountId"] = v.accountId;
    j["percentCompleteForNextLevel"] = v.percentCompleteForNextLevel;
    j["rerollPoints"] = v.rerollPoints;
    j["xpUntilNextLevel"] = v.xpUntilNextLevel;
    j["displayName"] = v.displayName;
    j["xpSinceLastLevel"] = v.xpSinceLastLevel;
    j["internalName"] = v.internalName;
    j["lastSeasonHighestRank"] = v.lastSeasonHighestRank;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, LolPerksSummoner_t& v) {
    v.summonerLevel = j.at("summonerLevel").get<uint32_t>();
    v.profileIconId = j.at("profileIconId").get<int32_t>();
    v.puuid = j.at("puuid").get<std::string>();
    v.accountId = j.at("accountId").get<uint64_t>();
    v.percentCompleteForNextLevel = j.at("percentCompleteForNextLevel").get<uint32_t>();
    v.rerollPoints = j.at("rerollPoints").get<LolPerksSummonerRerollPoints_t>();
    v.xpUntilNextLevel = j.at("xpUntilNextLevel").get<uint64_t>();
    v.displayName = j.at("displayName").get<std::string>();
    v.xpSinceLastLevel = j.at("xpSinceLastLevel").get<uint64_t>();
    v.internalName = j.at("internalName").get<std::string>();
    v.lastSeasonHighestRank = j.at("lastSeasonHighestRank").get<std::string>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
  }
}
