#pragma once
#include <json.hpp>
#include <optional>
#include "LolPerksSummonerRerollPoints.hpp"
namespace leagueapi {
  struct LolPerksSummoner_t {
    uint32_t percentCompleteForNextLevel;
    int32_t profileIconId;
    LolPerksSummonerRerollPoints_t rerollPoints;
    std::string displayName;
    uint64_t xpSinceLastLevel;
    std::string internalName;
    std::string lastSeasonHighestRank;
    uint64_t xpUntilNextLevel;
    std::string puuid;
    uint32_t summonerLevel;
    uint64_t summonerId;
    uint64_t accountId;
  };

  inline void to_json(nlohmann::json& j, const LolPerksSummoner_t& v) {
    j["percentCompleteForNextLevel"] = v.percentCompleteForNextLevel;
    j["profileIconId"] = v.profileIconId;
    j["rerollPoints"] = v.rerollPoints;
    j["displayName"] = v.displayName;
    j["xpSinceLastLevel"] = v.xpSinceLastLevel;
    j["internalName"] = v.internalName;
    j["lastSeasonHighestRank"] = v.lastSeasonHighestRank;
    j["xpUntilNextLevel"] = v.xpUntilNextLevel;
    j["puuid"] = v.puuid;
    j["summonerLevel"] = v.summonerLevel;
    j["summonerId"] = v.summonerId;
    j["accountId"] = v.accountId;
  }

  inline void from_json(const nlohmann::json& j, LolPerksSummoner_t& v) {
    v.percentCompleteForNextLevel = j.at("percentCompleteForNextLevel").get<uint32_t>();
    v.profileIconId = j.at("profileIconId").get<int32_t>();
    v.rerollPoints = j.at("rerollPoints").get<LolPerksSummonerRerollPoints_t>();
    v.displayName = j.at("displayName").get<std::string>();
    v.xpSinceLastLevel = j.at("xpSinceLastLevel").get<uint64_t>();
    v.internalName = j.at("internalName").get<std::string>();
    v.lastSeasonHighestRank = j.at("lastSeasonHighestRank").get<std::string>();
    v.xpUntilNextLevel = j.at("xpUntilNextLevel").get<uint64_t>();
    v.puuid = j.at("puuid").get<std::string>();
    v.summonerLevel = j.at("summonerLevel").get<uint32_t>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.accountId = j.at("accountId").get<uint64_t>();
  }
  inline std::string to_string(const LolPerksSummoner_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
