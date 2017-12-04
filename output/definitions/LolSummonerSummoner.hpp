#ifndef SWAGGER_TYPES_LolSummonerSummoner_HPP
#define SWAGGER_TYPES_LolSummonerSummoner_HPP
#include <json.hpp>
#include "LolSummonerSummonerRerollPoints.hpp"
namespace test {
  // 
  struct LolSummonerSummoner {
'    // 
    uint64_t accountId;
    // 
    std::string displayName;
    // 
    std::string internalName;
    // 
    std::string lastSeasonHighestRank;
    // 
    uint32_t percentCompleteForNextLevel;
    // 
    int32_t profileIconId;
    // 
    std::string puuid;
    // 
    LolSummonerSummonerRerollPoints rerollPoints;
    // 
    uint64_t summonerId;
    // 
    uint32_t summonerLevel;
    // 
    uint64_t xpSinceLastLevel;
    // 
    uint64_t xpUntilNextLevel;
  };

  void to_json(nlohmann::json& j, const LolSummonerSummoner& v) {
    j["accountId"] = v.accountId;
    j["displayName"] = v.displayName;
    j["internalName"] = v.internalName;
    j["lastSeasonHighestRank"] = v.lastSeasonHighestRank;
    j["percentCompleteForNextLevel"] = v.percentCompleteForNextLevel;
    j["profileIconId"] = v.profileIconId;
    j["puuid"] = v.puuid;
    j["rerollPoints"] = v.rerollPoints;
    j["summonerId"] = v.summonerId;
    j["summonerLevel"] = v.summonerLevel;
    j["xpSinceLastLevel"] = v.xpSinceLastLevel;
    j["xpUntilNextLevel"] = v.xpUntilNextLevel;
  }

  void from_json(const nlohmann::json& j, LolSummonerSummoner& v) {
    v.accountId = j.at("accountId").get<uint64_t>;
    v.displayName = j.at("displayName").get<std::string>;
    v.internalName = j.at("internalName").get<std::string>;
    v.lastSeasonHighestRank = j.at("lastSeasonHighestRank").get<std::string>;
    v.percentCompleteForNextLevel = j.at("percentCompleteForNextLevel").get<uint32_t>;
    v.profileIconId = j.at("profileIconId").get<int32_t>;
    v.puuid = j.at("puuid").get<std::string>;
    v.rerollPoints = j.at("rerollPoints").get<LolSummonerSummonerRerollPoints>;
    v.summonerId = j.at("summonerId").get<uint64_t>;
    v.summonerLevel = j.at("summonerLevel").get<uint32_t>;
    v.xpSinceLastLevel = j.at("xpSinceLastLevel").get<uint64_t>;
    v.xpUntilNextLevel = j.at("xpUntilNextLevel").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LolSummonerSummoner_HPP
