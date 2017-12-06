#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolEndOfGameChampionMasteryGrade_t {
    int32_t championId;
    uint64_t playerId;
    std::string grade;
  };

  inline void to_json(nlohmann::json& j, const LolEndOfGameChampionMasteryGrade_t& v) {
    j["championId"] = v.championId;
    j["playerId"] = v.playerId;
    j["grade"] = v.grade;
  }

  inline void from_json(const nlohmann::json& j, LolEndOfGameChampionMasteryGrade_t& v) {
    v.championId = j.at("championId").get<int32_t>();
    v.playerId = j.at("playerId").get<uint64_t>();
    v.grade = j.at("grade").get<std::string>();
  }
}
