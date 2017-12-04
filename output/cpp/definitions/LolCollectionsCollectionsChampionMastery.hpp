#ifndef SWAGGER_TYPES_LolCollectionsCollectionsChampionMastery_HPP
#define SWAGGER_TYPES_LolCollectionsCollectionsChampionMastery_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolCollectionsCollectionsChampionMastery {
    // 
    int32_t championLevel;
    // 
    bool chestGranted;
    // 
    int32_t championPoints;
    // 
    int32_t championPointsSinceLastLevel;
    // 
    std::string highestGrade;
    // 
    uint64_t playerId;
    // 
    int32_t championPointsUntilNextLevel;
    // 
    int32_t championId;
    // 
    uint64_t lastPlayTime;
  };

  inline void to_json(nlohmann::json& j, const LolCollectionsCollectionsChampionMastery& v) {
    j["championLevel"] = v.championLevel;
    j["chestGranted"] = v.chestGranted;
    j["championPoints"] = v.championPoints;
    j["championPointsSinceLastLevel"] = v.championPointsSinceLastLevel;
    j["highestGrade"] = v.highestGrade;
    j["playerId"] = v.playerId;
    j["championPointsUntilNextLevel"] = v.championPointsUntilNextLevel;
    j["championId"] = v.championId;
    j["lastPlayTime"] = v.lastPlayTime;
  }

  inline void from_json(const nlohmann::json& j, LolCollectionsCollectionsChampionMastery& v) {
    v.championLevel = j.at("championLevel").get<int32_t>;
    v.chestGranted = j.at("chestGranted").get<bool>;
    v.championPoints = j.at("championPoints").get<int32_t>;
    v.championPointsSinceLastLevel = j.at("championPointsSinceLastLevel").get<int32_t>;
    v.highestGrade = j.at("highestGrade").get<std::string>;
    v.playerId = j.at("playerId").get<uint64_t>;
    v.championPointsUntilNextLevel = j.at("championPointsUntilNextLevel").get<int32_t>;
    v.championId = j.at("championId").get<int32_t>;
    v.lastPlayTime = j.at("lastPlayTime").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LolCollectionsCollectionsChampionMastery_HPP
