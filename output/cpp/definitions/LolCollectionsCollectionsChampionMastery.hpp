#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolCollectionsCollectionsChampionMastery_t {
    uint64_t lastPlayTime;
    int32_t championPointsUntilNextLevel;
    uint64_t playerId;
    int32_t championPoints;
    int32_t championPointsSinceLastLevel;
    bool chestGranted;
    int32_t championId;
    std::string highestGrade;
    int32_t championLevel;
  };

  inline void to_json(nlohmann::json& j, const LolCollectionsCollectionsChampionMastery_t& v) {
    j["lastPlayTime"] = v.lastPlayTime;
    j["championPointsUntilNextLevel"] = v.championPointsUntilNextLevel;
    j["playerId"] = v.playerId;
    j["championPoints"] = v.championPoints;
    j["championPointsSinceLastLevel"] = v.championPointsSinceLastLevel;
    j["chestGranted"] = v.chestGranted;
    j["championId"] = v.championId;
    j["highestGrade"] = v.highestGrade;
    j["championLevel"] = v.championLevel;
  }

  inline void from_json(const nlohmann::json& j, LolCollectionsCollectionsChampionMastery_t& v) {
    v.lastPlayTime = j.at("lastPlayTime").get<uint64_t>();
    v.championPointsUntilNextLevel = j.at("championPointsUntilNextLevel").get<int32_t>();
    v.playerId = j.at("playerId").get<uint64_t>();
    v.championPoints = j.at("championPoints").get<int32_t>();
    v.championPointsSinceLastLevel = j.at("championPointsSinceLastLevel").get<int32_t>();
    v.chestGranted = j.at("chestGranted").get<bool>();
    v.championId = j.at("championId").get<int32_t>();
    v.highestGrade = j.at("highestGrade").get<std::string>();
    v.championLevel = j.at("championLevel").get<int32_t>();
  }
  inline std::string to_string(const LolCollectionsCollectionsChampionMastery_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
