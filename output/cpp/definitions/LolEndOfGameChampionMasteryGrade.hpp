#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolEndOfGameChampionMasteryGrade_t {
    int32_t championId;
    std::string grade;
    uint64_t playerId;
  };

  inline void to_json(nlohmann::json& j, const LolEndOfGameChampionMasteryGrade_t& v) {
    j["championId"] = v.championId;
    j["grade"] = v.grade;
    j["playerId"] = v.playerId;
  }

  inline void from_json(const nlohmann::json& j, LolEndOfGameChampionMasteryGrade_t& v) {
    v.championId = j.at("championId").get<int32_t>();
    v.grade = j.at("grade").get<std::string>();
    v.playerId = j.at("playerId").get<uint64_t>();
  }
}
