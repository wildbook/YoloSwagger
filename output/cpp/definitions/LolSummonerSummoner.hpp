#pragma once
#include <json.hpp>
#include <optional>
#include "LolSummonerSummonerRerollPoints.hpp"
namespace leagueapi {
  struct LolSummonerSummoner_t {
    uint64_t xpSinceLastLevel;
    uint64_t xpUntilNextLevel;
    std::string puuid;
    int32_t profileIconId;
    uint64_t summonerId;
    uint32_t summonerLevel;
    uint64_t accountId;
    LolSummonerSummonerRerollPoints_t rerollPoints;
    std::string displayName;
    std::string internalName;
    uint32_t percentCompleteForNextLevel;
    std::string lastSeasonHighestRank;
  };

  inline void to_json(nlohmann::json& j, const LolSummonerSummoner_t& v) {
    j["xpSinceLastLevel"] = v.xpSinceLastLevel;
    j["xpUntilNextLevel"] = v.xpUntilNextLevel;
    j["puuid"] = v.puuid;
    j["profileIconId"] = v.profileIconId;
    j["summonerId"] = v.summonerId;
    j["summonerLevel"] = v.summonerLevel;
    j["accountId"] = v.accountId;
    j["rerollPoints"] = v.rerollPoints;
    j["displayName"] = v.displayName;
    j["internalName"] = v.internalName;
    j["percentCompleteForNextLevel"] = v.percentCompleteForNextLevel;
    j["lastSeasonHighestRank"] = v.lastSeasonHighestRank;
  }

  inline void from_json(const nlohmann::json& j, LolSummonerSummoner_t& v) {
    v.xpSinceLastLevel = j.at("xpSinceLastLevel").get<uint64_t>();
    v.xpUntilNextLevel = j.at("xpUntilNextLevel").get<uint64_t>();
    v.puuid = j.at("puuid").get<std::string>();
    v.profileIconId = j.at("profileIconId").get<int32_t>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.summonerLevel = j.at("summonerLevel").get<uint32_t>();
    v.accountId = j.at("accountId").get<uint64_t>();
    v.rerollPoints = j.at("rerollPoints").get<LolSummonerSummonerRerollPoints_t>();
    v.displayName = j.at("displayName").get<std::string>();
    v.internalName = j.at("internalName").get<std::string>();
    v.percentCompleteForNextLevel = j.at("percentCompleteForNextLevel").get<uint32_t>();
    v.lastSeasonHighestRank = j.at("lastSeasonHighestRank").get<std::string>();
  }
  inline std::string to_string(const LolSummonerSummoner_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
