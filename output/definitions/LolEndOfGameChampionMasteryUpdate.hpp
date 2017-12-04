#ifndef SWAGGER_TYPES_LolEndOfGameChampionMasteryUpdate_HPP
#define SWAGGER_TYPES_LolEndOfGameChampionMasteryUpdate_HPP
#include <json.hpp>
#include "LolEndOfGameChampionMasteryGrade.hpp"
#include "LolEndOfGameChampionMasteryMini.hpp"
namespace test {
  // 
  struct LolEndOfGameChampionMasteryUpdate {
'    // 
    int64_t bonusPointsGained;
    // 
    int32_t championId;
    // 
    uint64_t gameId;
    // 
    std::string grade;
    // 
    bool hasLeveledUp;
    // 
    std::string id;
    // 
    int64_t level;
    // 
    std::vector<LolEndOfGameChampionMasteryMini> levelUpList;
    // 
    std::vector<LolEndOfGameChampionMasteryGrade> memberGrades;
    // 
    uint64_t playerId;
    // 
    int64_t pointsBeforeGame;
    // 
    int64_t pointsGained;
    // 
    int64_t pointsGainedIndividualContribution;
    // 
    int64_t pointsSinceLastLevelBeforeGame;
    // 
    int64_t pointsUntilNextLevelAfterGame;
    // 
    int64_t pointsUntilNextLevelBeforeGame;
    // 
    int64_t score;
  };

  void to_json(nlohmann::json& j, const LolEndOfGameChampionMasteryUpdate& v) {
    j["bonusPointsGained"] = v.bonusPointsGained;
    j["championId"] = v.championId;
    j["gameId"] = v.gameId;
    j["grade"] = v.grade;
    j["hasLeveledUp"] = v.hasLeveledUp;
    j["id"] = v.id;
    j["level"] = v.level;
    j["levelUpList"] = v.levelUpList;
    j["memberGrades"] = v.memberGrades;
    j["playerId"] = v.playerId;
    j["pointsBeforeGame"] = v.pointsBeforeGame;
    j["pointsGained"] = v.pointsGained;
    j["pointsGainedIndividualContribution"] = v.pointsGainedIndividualContribution;
    j["pointsSinceLastLevelBeforeGame"] = v.pointsSinceLastLevelBeforeGame;
    j["pointsUntilNextLevelAfterGame"] = v.pointsUntilNextLevelAfterGame;
    j["pointsUntilNextLevelBeforeGame"] = v.pointsUntilNextLevelBeforeGame;
    j["score"] = v.score;
  }

  void from_json(const nlohmann::json& j, LolEndOfGameChampionMasteryUpdate& v) {
    v.bonusPointsGained = j.at("bonusPointsGained").get<int64_t>;
    v.championId = j.at("championId").get<int32_t>;
    v.gameId = j.at("gameId").get<uint64_t>;
    v.grade = j.at("grade").get<std::string>;
    v.hasLeveledUp = j.at("hasLeveledUp").get<bool>;
    v.id = j.at("id").get<std::string>;
    v.level = j.at("level").get<int64_t>;
    v.levelUpList = j.at("levelUpList").get<std::vector<LolEndOfGameChampionMasteryMini>>;
    v.memberGrades = j.at("memberGrades").get<std::vector<LolEndOfGameChampionMasteryGrade>>;
    v.playerId = j.at("playerId").get<uint64_t>;
    v.pointsBeforeGame = j.at("pointsBeforeGame").get<int64_t>;
    v.pointsGained = j.at("pointsGained").get<int64_t>;
    v.pointsGainedIndividualContribution = j.at("pointsGainedIndividualContribution").get<int64_t>;
    v.pointsSinceLastLevelBeforeGame = j.at("pointsSinceLastLevelBeforeGame").get<int64_t>;
    v.pointsUntilNextLevelAfterGame = j.at("pointsUntilNextLevelAfterGame").get<int64_t>;
    v.pointsUntilNextLevelBeforeGame = j.at("pointsUntilNextLevelBeforeGame").get<int64_t>;
    v.score = j.at("score").get<int64_t>;
  }

}
#endif // SWAGGER_TYPES_LolEndOfGameChampionMasteryUpdate_HPP
