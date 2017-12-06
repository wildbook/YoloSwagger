#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolCollectionsCollectionsChampionMastery_t {
    int32_t championPoints;
    int32_t championId;
    uint64_t playerId;
    std::string highestGrade;
    int32_t championPointsUntilNextLevel;
    int32_t championPointsSinceLastLevel;
    int32_t championLevel;
    uint64_t lastPlayTime;
    bool chestGranted;
  };

  inline void to_json(nlohmann::json& j, const LolCollectionsCollectionsChampionMastery_t& v) {
    j["championPoints"] = v.championPoints;
    j["championId"] = v.championId;
    j["playerId"] = v.playerId;
    j["highestGrade"] = v.highestGrade;
    j["championPointsUntilNextLevel"] = v.championPointsUntilNextLevel;
    j["championPointsSinceLastLevel"] = v.championPointsSinceLastLevel;
    j["championLevel"] = v.championLevel;
    j["lastPlayTime"] = v.lastPlayTime;
    j["chestGranted"] = v.chestGranted;
  }

  inline void from_json(const nlohmann::json& j, LolCollectionsCollectionsChampionMastery_t& v) {
    v.championPoints = j.at("championPoints").get<int32_t>();
    v.championId = j.at("championId").get<int32_t>();
    v.playerId = j.at("playerId").get<uint64_t>();
    v.highestGrade = j.at("highestGrade").get<std::string>();
    v.championPointsUntilNextLevel = j.at("championPointsUntilNextLevel").get<int32_t>();
    v.championPointsSinceLastLevel = j.at("championPointsSinceLastLevel").get<int32_t>();
    v.championLevel = j.at("championLevel").get<int32_t>();
    v.lastPlayTime = j.at("lastPlayTime").get<uint64_t>();
    v.chestGranted = j.at("chestGranted").get<bool>();
  }
}
