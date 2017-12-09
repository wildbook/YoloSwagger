#pragma once
#include <json.hpp>
#include <optional>
#include "LolSummonerSummonerRerollPoints.hpp"
namespace leagueapi {
  struct LolSummonerSummoner_t {
    int32_t profileIconId;
    std::string puuid;
    uint64_t summonerId;
    std::string displayName;
    uint64_t xpSinceLastLevel;
    std::string lastSeasonHighestRank;
    uint64_t xpUntilNextLevel;
    std::string internalName;
    uint32_t percentCompleteForNextLevel;
    uint32_t summonerLevel;
    uint64_t accountId;
    LolSummonerSummonerRerollPoints_t rerollPoints;
  };

  inline void to_json(nlohmann::json& j, const LolSummonerSummoner_t& v) {
    j["profileIconId"] = v.profileIconId;
    j["puuid"] = v.puuid;
    j["summonerId"] = v.summonerId;
    j["displayName"] = v.displayName;
    j["xpSinceLastLevel"] = v.xpSinceLastLevel;
    j["lastSeasonHighestRank"] = v.lastSeasonHighestRank;
    j["xpUntilNextLevel"] = v.xpUntilNextLevel;
    j["internalName"] = v.internalName;
    j["percentCompleteForNextLevel"] = v.percentCompleteForNextLevel;
    j["summonerLevel"] = v.summonerLevel;
    j["accountId"] = v.accountId;
    j["rerollPoints"] = v.rerollPoints;
  }

  inline void from_json(const nlohmann::json& j, LolSummonerSummoner_t& v) {
    v.profileIconId = j.at("profileIconId").get<int32_t>();
    v.puuid = j.at("puuid").get<std::string>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.displayName = j.at("displayName").get<std::string>();
    v.xpSinceLastLevel = j.at("xpSinceLastLevel").get<uint64_t>();
    v.lastSeasonHighestRank = j.at("lastSeasonHighestRank").get<std::string>();
    v.xpUntilNextLevel = j.at("xpUntilNextLevel").get<uint64_t>();
    v.internalName = j.at("internalName").get<std::string>();
    v.percentCompleteForNextLevel = j.at("percentCompleteForNextLevel").get<uint32_t>();
    v.summonerLevel = j.at("summonerLevel").get<uint32_t>();
    v.accountId = j.at("accountId").get<uint64_t>();
    v.rerollPoints = j.at("rerollPoints").get<LolSummonerSummonerRerollPoints_t>();
  }
  inline std::string to_string(const LolSummonerSummoner_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
