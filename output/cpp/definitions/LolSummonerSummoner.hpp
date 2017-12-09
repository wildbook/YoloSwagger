#pragma once
#include <json.hpp>
#include <optional>
#include "LolSummonerSummonerRerollPoints.hpp"
namespace leagueapi {
  struct LolSummonerSummoner_t {
    uint32_t percentCompleteForNextLevel;
    std::string displayName;
    std::string lastSeasonHighestRank;
    uint64_t xpUntilNextLevel;
    std::string internalName;
    uint32_t summonerLevel;
    uint64_t accountId;
    int32_t profileIconId;
    uint64_t xpSinceLastLevel;
    uint64_t summonerId;
    LolSummonerSummonerRerollPoints_t rerollPoints;
    std::string puuid;
  };

  inline void to_json(nlohmann::json& j, const LolSummonerSummoner_t& v) {
    j["percentCompleteForNextLevel"] = v.percentCompleteForNextLevel;
    j["displayName"] = v.displayName;
    j["lastSeasonHighestRank"] = v.lastSeasonHighestRank;
    j["xpUntilNextLevel"] = v.xpUntilNextLevel;
    j["internalName"] = v.internalName;
    j["summonerLevel"] = v.summonerLevel;
    j["accountId"] = v.accountId;
    j["profileIconId"] = v.profileIconId;
    j["xpSinceLastLevel"] = v.xpSinceLastLevel;
    j["summonerId"] = v.summonerId;
    j["rerollPoints"] = v.rerollPoints;
    j["puuid"] = v.puuid;
  }

  inline void from_json(const nlohmann::json& j, LolSummonerSummoner_t& v) {
    v.percentCompleteForNextLevel = j.at("percentCompleteForNextLevel").get<uint32_t>();
    v.displayName = j.at("displayName").get<std::string>();
    v.lastSeasonHighestRank = j.at("lastSeasonHighestRank").get<std::string>();
    v.xpUntilNextLevel = j.at("xpUntilNextLevel").get<uint64_t>();
    v.internalName = j.at("internalName").get<std::string>();
    v.summonerLevel = j.at("summonerLevel").get<uint32_t>();
    v.accountId = j.at("accountId").get<uint64_t>();
    v.profileIconId = j.at("profileIconId").get<int32_t>();
    v.xpSinceLastLevel = j.at("xpSinceLastLevel").get<uint64_t>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.rerollPoints = j.at("rerollPoints").get<LolSummonerSummonerRerollPoints_t>();
    v.puuid = j.at("puuid").get<std::string>();
  }
  inline std::string to_string(const LolSummonerSummoner_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
