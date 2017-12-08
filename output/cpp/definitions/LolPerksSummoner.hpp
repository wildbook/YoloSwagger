#pragma once
#include <json.hpp>
#include <optional>
#include "LolPerksSummonerRerollPoints.hpp"
namespace leagueapi {
  struct LolPerksSummoner_t {
    uint32_t_t percentCompleteForNextLevel;
    int32_t_t profileIconId;
    LolPerksSummonerRerollPoints_t rerollPoints;
    std::string_t displayName;
    uint64_t_t xpSinceLastLevel;
    std::string_t internalName;
    std::string_t lastSeasonHighestRank;
    uint64_t_t xpUntilNextLevel;
    std::string_t puuid;
    uint32_t_t summonerLevel;
    uint64_t_t summonerId;
    uint64_t_t accountId;
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
    v.percentCompleteForNextLevel = j.at("percentCompleteForNextLevel").get<uint32_t_t>();
    v.profileIconId = j.at("profileIconId").get<int32_t_t>();
    v.rerollPoints = j.at("rerollPoints").get<LolPerksSummonerRerollPoints_t>();
    v.displayName = j.at("displayName").get<std::string_t>();
    v.xpSinceLastLevel = j.at("xpSinceLastLevel").get<uint64_t_t>();
    v.internalName = j.at("internalName").get<std::string_t>();
    v.lastSeasonHighestRank = j.at("lastSeasonHighestRank").get<std::string_t>();
    v.xpUntilNextLevel = j.at("xpUntilNextLevel").get<uint64_t_t>();
    v.puuid = j.at("puuid").get<std::string_t>();
    v.summonerLevel = j.at("summonerLevel").get<uint32_t_t>();
    v.summonerId = j.at("summonerId").get<uint64_t_t>();
    v.accountId = j.at("accountId").get<uint64_t_t>();
  }
  inline std::string to_string(const LolPerksSummoner_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
