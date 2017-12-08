#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolCollectionsCollectionsChampionMastery_t {
    int32_t championLevel;
    bool chestGranted;
    int32_t championPoints;
    int32_t championId;
    uint64_t playerId;
    int32_t championPointsUntilNextLevel;
    uint64_t lastPlayTime;
    std::string highestGrade;
    int32_t championPointsSinceLastLevel;
  };

  inline void to_json(nlohmann::json& j, const LolCollectionsCollectionsChampionMastery_t& v) {
    j["championLevel"] = v.championLevel;
    j["chestGranted"] = v.chestGranted;
    j["championPoints"] = v.championPoints;
    j["championId"] = v.championId;
    j["playerId"] = v.playerId;
    j["championPointsUntilNextLevel"] = v.championPointsUntilNextLevel;
    j["lastPlayTime"] = v.lastPlayTime;
    j["highestGrade"] = v.highestGrade;
    j["championPointsSinceLastLevel"] = v.championPointsSinceLastLevel;
  }

  inline void from_json(const nlohmann::json& j, LolCollectionsCollectionsChampionMastery_t& v) {
    v.championLevel = j.at("championLevel").get<int32_t>();
    v.chestGranted = j.at("chestGranted").get<bool>();
    v.championPoints = j.at("championPoints").get<int32_t>();
    v.championId = j.at("championId").get<int32_t>();
    v.playerId = j.at("playerId").get<uint64_t>();
    v.championPointsUntilNextLevel = j.at("championPointsUntilNextLevel").get<int32_t>();
    v.lastPlayTime = j.at("lastPlayTime").get<uint64_t>();
    v.highestGrade = j.at("highestGrade").get<std::string>();
    v.championPointsSinceLastLevel = j.at("championPointsSinceLastLevel").get<int32_t>();
  }
  inline std::string to_string(const LolCollectionsCollectionsChampionMastery_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
