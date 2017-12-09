#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolCollectionsCollectionsChampionMastery_t {
    int32_t championPointsUntilNextLevel;
    std::string highestGrade;
    int32_t championLevel;
    int32_t championPointsSinceLastLevel;
    int32_t championPoints;
    uint64_t lastPlayTime;
    bool chestGranted;
    uint64_t playerId;
    int32_t championId;
  };

  inline void to_json(nlohmann::json& j, const LolCollectionsCollectionsChampionMastery_t& v) {
    j["championPointsUntilNextLevel"] = v.championPointsUntilNextLevel;
    j["highestGrade"] = v.highestGrade;
    j["championLevel"] = v.championLevel;
    j["championPointsSinceLastLevel"] = v.championPointsSinceLastLevel;
    j["championPoints"] = v.championPoints;
    j["lastPlayTime"] = v.lastPlayTime;
    j["chestGranted"] = v.chestGranted;
    j["playerId"] = v.playerId;
    j["championId"] = v.championId;
  }

  inline void from_json(const nlohmann::json& j, LolCollectionsCollectionsChampionMastery_t& v) {
    v.championPointsUntilNextLevel = j.at("championPointsUntilNextLevel").get<int32_t>();
    v.highestGrade = j.at("highestGrade").get<std::string>();
    v.championLevel = j.at("championLevel").get<int32_t>();
    v.championPointsSinceLastLevel = j.at("championPointsSinceLastLevel").get<int32_t>();
    v.championPoints = j.at("championPoints").get<int32_t>();
    v.lastPlayTime = j.at("lastPlayTime").get<uint64_t>();
    v.chestGranted = j.at("chestGranted").get<bool>();
    v.playerId = j.at("playerId").get<uint64_t>();
    v.championId = j.at("championId").get<int32_t>();
  }
  inline std::string to_string(const LolCollectionsCollectionsChampionMastery_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
