#ifndef SWAGGER_TYPES_LolEndOfGameChampionMasteryGrade_HPP
#define SWAGGER_TYPES_LolEndOfGameChampionMasteryGrade_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolEndOfGameChampionMasteryGrade {
    // 
    int32_t championId;
    // 
    std::string grade;
    // 
    uint64_t playerId;
  };

  void to_json(nlohmann::json& j, const LolEndOfGameChampionMasteryGrade& v) {
    j["championId"] = v.championId;
    j["grade"] = v.grade;
    j["playerId"] = v.playerId;
  }

  void from_json(const nlohmann::json& j, LolEndOfGameChampionMasteryGrade& v) {
    v.championId = j.at("championId").get<int32_t>;
    v.grade = j.at("grade").get<std::string>;
    v.playerId = j.at("playerId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LolEndOfGameChampionMasteryGrade_HPP
