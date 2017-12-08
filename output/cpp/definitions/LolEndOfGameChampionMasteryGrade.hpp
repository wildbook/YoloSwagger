#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolEndOfGameChampionMasteryGrade_t {
    std::string_t grade;
    uint64_t_t playerId;
    int32_t_t championId;
  };

  inline void to_json(nlohmann::json& j, const LolEndOfGameChampionMasteryGrade_t& v) {
    j["grade"] = v.grade;
    j["playerId"] = v.playerId;
    j["championId"] = v.championId;
  }

  inline void from_json(const nlohmann::json& j, LolEndOfGameChampionMasteryGrade_t& v) {
    v.grade = j.at("grade").get<std::string_t>();
    v.playerId = j.at("playerId").get<uint64_t_t>();
    v.championId = j.at("championId").get<int32_t_t>();
  }
  inline std::string to_string(const LolEndOfGameChampionMasteryGrade_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
