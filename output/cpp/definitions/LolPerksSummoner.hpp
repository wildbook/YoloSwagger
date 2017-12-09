#pragma once
#include <json.hpp>
#include <optional>
#include "LolPerksSummonerRerollPoints.hpp"
namespace leagueapi {
  struct LolPerksSummoner_t {
    uint64_t summonerId;
    std::string puuid;
    uint32_t percentCompleteForNextLevel;
    std::string lastSeasonHighestRank;
    int32_t profileIconId;
    uint64_t xpUntilNextLevel;
    uint64_t accountId;
    uint32_t summonerLevel;
    LolPerksSummonerRerollPoints_t rerollPoints;
    uint64_t xpSinceLastLevel;
    std::string displayName;
    std::string internalName;
  };

  inline void to_json(nlohmann::json& j, const LolPerksSummoner_t& v) {
    j["summonerId"] = v.summonerId;
    j["puuid"] = v.puuid;
    j["percentCompleteForNextLevel"] = v.percentCompleteForNextLevel;
    j["lastSeasonHighestRank"] = v.lastSeasonHighestRank;
    j["profileIconId"] = v.profileIconId;
    j["xpUntilNextLevel"] = v.xpUntilNextLevel;
    j["accountId"] = v.accountId;
    j["summonerLevel"] = v.summonerLevel;
    j["rerollPoints"] = v.rerollPoints;
    j["xpSinceLastLevel"] = v.xpSinceLastLevel;
    j["displayName"] = v.displayName;
    j["internalName"] = v.internalName;
  }

  inline void from_json(const nlohmann::json& j, LolPerksSummoner_t& v) {
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.puuid = j.at("puuid").get<std::string>();
    v.percentCompleteForNextLevel = j.at("percentCompleteForNextLevel").get<uint32_t>();
    v.lastSeasonHighestRank = j.at("lastSeasonHighestRank").get<std::string>();
    v.profileIconId = j.at("profileIconId").get<int32_t>();
    v.xpUntilNextLevel = j.at("xpUntilNextLevel").get<uint64_t>();
    v.accountId = j.at("accountId").get<uint64_t>();
    v.summonerLevel = j.at("summonerLevel").get<uint32_t>();
    v.rerollPoints = j.at("rerollPoints").get<LolPerksSummonerRerollPoints_t>();
    v.xpSinceLastLevel = j.at("xpSinceLastLevel").get<uint64_t>();
    v.displayName = j.at("displayName").get<std::string>();
    v.internalName = j.at("internalName").get<std::string>();
  }
  inline std::string to_string(const LolPerksSummoner_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
