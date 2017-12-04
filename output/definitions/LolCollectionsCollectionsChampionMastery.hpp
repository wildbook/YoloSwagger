#ifndef SWAGGER_TYPES_LolCollectionsCollectionsChampionMastery_HPP
#define SWAGGER_TYPES_LolCollectionsCollectionsChampionMastery_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolCollectionsCollectionsChampionMastery {
    // 
    int32_t championId;
    // 
    int32_t championLevel;
    // 
    int32_t championPoints;
    // 
    int32_t championPointsSinceLastLevel;
    // 
    int32_t championPointsUntilNextLevel;
    // 
    bool chestGranted;
    // 
    std::string highestGrade;
    // 
    uint64_t lastPlayTime;
    // 
    uint64_t playerId;
  };

  void to_json(nlohmann::json& j, const LolCollectionsCollectionsChampionMastery& v) {
    j["championId"] = v.championId;
    j["championLevel"] = v.championLevel;
    j["championPoints"] = v.championPoints;
    j["championPointsSinceLastLevel"] = v.championPointsSinceLastLevel;
    j["championPointsUntilNextLevel"] = v.championPointsUntilNextLevel;
    j["chestGranted"] = v.chestGranted;
    j["highestGrade"] = v.highestGrade;
    j["lastPlayTime"] = v.lastPlayTime;
    j["playerId"] = v.playerId;
  }

  void from_json(const nlohmann::json& j, LolCollectionsCollectionsChampionMastery& v) {
    v.championId = j.at("championId").get<int32_t>;
    v.championLevel = j.at("championLevel").get<int32_t>;
    v.championPoints = j.at("championPoints").get<int32_t>;
    v.championPointsSinceLastLevel = j.at("championPointsSinceLastLevel").get<int32_t>;
    v.championPointsUntilNextLevel = j.at("championPointsUntilNextLevel").get<int32_t>;
    v.chestGranted = j.at("chestGranted").get<bool>;
    v.highestGrade = j.at("highestGrade").get<std::string>;
    v.lastPlayTime = j.at("lastPlayTime").get<uint64_t>;
    v.playerId = j.at("playerId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LolCollectionsCollectionsChampionMastery_HPP
