#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolEndOfGameChampionMasteryGrade_t {
    std::string grade;
    int32_t championId;
    uint64_t playerId;
  };

  inline void to_json(nlohmann::json& j, const LolEndOfGameChampionMasteryGrade_t& v) {
    j["grade"] = v.grade;
    j["championId"] = v.championId;
    j["playerId"] = v.playerId;
  }

  inline void from_json(const nlohmann::json& j, LolEndOfGameChampionMasteryGrade_t& v) {
    v.grade = j.at("grade").get<std::string>();
    v.championId = j.at("championId").get<int32_t>();
    v.playerId = j.at("playerId").get<uint64_t>();
  }
  inline std::string to_string(const LolEndOfGameChampionMasteryGrade_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
