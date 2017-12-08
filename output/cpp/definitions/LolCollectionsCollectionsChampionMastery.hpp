#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolCollectionsCollectionsChampionMastery_t {
    int32_t_t championLevel;
    bool_t chestGranted;
    int32_t_t championPoints;
    int32_t_t championPointsSinceLastLevel;
    std::string_t highestGrade;
    uint64_t_t playerId;
    int32_t_t championPointsUntilNextLevel;
    int32_t_t championId;
    uint64_t_t lastPlayTime;
  };

  inline void to_json(nlohmann::json& j, const LolCollectionsCollectionsChampionMastery_t& v) {
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

  inline void from_json(const nlohmann::json& j, LolCollectionsCollectionsChampionMastery_t& v) {
    v.championLevel = j.at("championLevel").get<int32_t_t>();
    v.chestGranted = j.at("chestGranted").get<bool_t>();
    v.championPoints = j.at("championPoints").get<int32_t_t>();
    v.championPointsSinceLastLevel = j.at("championPointsSinceLastLevel").get<int32_t_t>();
    v.highestGrade = j.at("highestGrade").get<std::string_t>();
    v.playerId = j.at("playerId").get<uint64_t_t>();
    v.championPointsUntilNextLevel = j.at("championPointsUntilNextLevel").get<int32_t_t>();
    v.championId = j.at("championId").get<int32_t_t>();
    v.lastPlayTime = j.at("lastPlayTime").get<uint64_t_t>();
  }
  inline std::string to_string(const LolCollectionsCollectionsChampionMastery_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
