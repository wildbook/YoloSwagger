#pragma once
#include <json.hpp>
#include <optional>
#include "LolEndOfGameChampionMasteryMini.hpp"
#include "LolEndOfGameChampionMasteryGrade.hpp"
namespace leagueapi {
  struct LolEndOfGameChampionMasteryUpdate_t {
    int32_t championId;
    int64_t pointsBeforeGame;
    int64_t pointsGained;
    int64_t pointsSinceLastLevelBeforeGame;
    int64_t pointsGainedIndividualContribution;
    uint64_t gameId;
    std::string grade;
    uint64_t playerId;
    std::string id;
    int64_t bonusPointsGained;
    bool hasLeveledUp;
    std::vector<LolEndOfGameChampionMasteryMini_t> levelUpList;
    int64_t pointsUntilNextLevelAfterGame;
    int64_t level;
    int64_t score;
    std::vector<LolEndOfGameChampionMasteryGrade_t> memberGrades;
    int64_t pointsUntilNextLevelBeforeGame;
  };

  inline void to_json(nlohmann::json& j, const LolEndOfGameChampionMasteryUpdate_t& v) {
    j["championId"] = v.championId;
    j["pointsBeforeGame"] = v.pointsBeforeGame;
    j["pointsGained"] = v.pointsGained;
    j["pointsSinceLastLevelBeforeGame"] = v.pointsSinceLastLevelBeforeGame;
    j["pointsGainedIndividualContribution"] = v.pointsGainedIndividualContribution;
    j["gameId"] = v.gameId;
    j["grade"] = v.grade;
    j["playerId"] = v.playerId;
    j["id"] = v.id;
    j["bonusPointsGained"] = v.bonusPointsGained;
    j["hasLeveledUp"] = v.hasLeveledUp;
    j["levelUpList"] = v.levelUpList;
    j["pointsUntilNextLevelAfterGame"] = v.pointsUntilNextLevelAfterGame;
    j["level"] = v.level;
    j["score"] = v.score;
    j["memberGrades"] = v.memberGrades;
    j["pointsUntilNextLevelBeforeGame"] = v.pointsUntilNextLevelBeforeGame;
  }

  inline void from_json(const nlohmann::json& j, LolEndOfGameChampionMasteryUpdate_t& v) {
    v.championId = j.at("championId").get<int32_t>();
    v.pointsBeforeGame = j.at("pointsBeforeGame").get<int64_t>();
    v.pointsGained = j.at("pointsGained").get<int64_t>();
    v.pointsSinceLastLevelBeforeGame = j.at("pointsSinceLastLevelBeforeGame").get<int64_t>();
    v.pointsGainedIndividualContribution = j.at("pointsGainedIndividualContribution").get<int64_t>();
    v.gameId = j.at("gameId").get<uint64_t>();
    v.grade = j.at("grade").get<std::string>();
    v.playerId = j.at("playerId").get<uint64_t>();
    v.id = j.at("id").get<std::string>();
    v.bonusPointsGained = j.at("bonusPointsGained").get<int64_t>();
    v.hasLeveledUp = j.at("hasLeveledUp").get<bool>();
    v.levelUpList = j.at("levelUpList").get<std::vector<LolEndOfGameChampionMasteryMini_t>>();
    v.pointsUntilNextLevelAfterGame = j.at("pointsUntilNextLevelAfterGame").get<int64_t>();
    v.level = j.at("level").get<int64_t>();
    v.score = j.at("score").get<int64_t>();
    v.memberGrades = j.at("memberGrades").get<std::vector<LolEndOfGameChampionMasteryGrade_t>>();
    v.pointsUntilNextLevelBeforeGame = j.at("pointsUntilNextLevelBeforeGame").get<int64_t>();
  }
}
