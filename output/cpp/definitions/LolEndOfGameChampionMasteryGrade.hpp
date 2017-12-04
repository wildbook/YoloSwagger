#ifndef SWAGGER_TYPES_LolEndOfGameChampionMasteryGrade_HPP
#define SWAGGER_TYPES_LolEndOfGameChampionMasteryGrade_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolEndOfGameChampionMasteryGrade {
    // 
    std::string grade;
    // 
    uint64_t playerId;
    // 
    int32_t championId;
  };

  inline void to_json(nlohmann::json& j, const LolEndOfGameChampionMasteryGrade& v) {
    j["grade"] = v.grade;
    j["playerId"] = v.playerId;
    j["championId"] = v.championId;
  }

  inline void from_json(const nlohmann::json& j, LolEndOfGameChampionMasteryGrade& v) {
    v.grade = j.at("grade").get<std::string>;
    v.playerId = j.at("playerId").get<uint64_t>;
    v.championId = j.at("championId").get<int32_t>;
  }

}
#endif // SWAGGER_TYPES_LolEndOfGameChampionMasteryGrade_HPP
