#pragma once
#include <json.hpp>
#include <optional>
#include "LolEndOfGameChampionMasteryGrade.hpp"
#include "LolEndOfGameChampionMasteryMini.hpp"
namespace leagueapi {
  struct LolEndOfGameChampionMasteryUpdate_t {
    std::vector<LolEndOfGameChampionMasteryMini_t> levelUpList;
    bool hasLeveledUp;
    int32_t championId;
    int64_t pointsGainedIndividualContribution;
    uint64_t gameId;
    int64_t pointsUntilNextLevelBeforeGame;
    int64_t pointsGained;
    int64_t bonusPointsGained;
    int64_t pointsBeforeGame;
    int64_t pointsUntilNextLevelAfterGame;
    std::vector<LolEndOfGameChampionMasteryGrade_t> memberGrades;
    std::string grade;
    uint64_t playerId;
    std::string id;
    int64_t level;
    int64_t score;
    int64_t pointsSinceLastLevelBeforeGame;
  };

  inline void to_json(nlohmann::json& j, const LolEndOfGameChampionMasteryUpdate_t& v) {
    j["levelUpList"] = v.levelUpList;
    j["hasLeveledUp"] = v.hasLeveledUp;
    j["championId"] = v.championId;
    j["pointsGainedIndividualContribution"] = v.pointsGainedIndividualContribution;
    j["gameId"] = v.gameId;
    j["pointsUntilNextLevelBeforeGame"] = v.pointsUntilNextLevelBeforeGame;
    j["pointsGained"] = v.pointsGained;
    j["bonusPointsGained"] = v.bonusPointsGained;
    j["pointsBeforeGame"] = v.pointsBeforeGame;
    j["pointsUntilNextLevelAfterGame"] = v.pointsUntilNextLevelAfterGame;
    j["memberGrades"] = v.memberGrades;
    j["grade"] = v.grade;
    j["playerId"] = v.playerId;
    j["id"] = v.id;
    j["level"] = v.level;
    j["score"] = v.score;
    j["pointsSinceLastLevelBeforeGame"] = v.pointsSinceLastLevelBeforeGame;
  }

  inline void from_json(const nlohmann::json& j, LolEndOfGameChampionMasteryUpdate_t& v) {
    v.levelUpList = j.at("levelUpList").get<std::vector<LolEndOfGameChampionMasteryMini_t>>();
    v.hasLeveledUp = j.at("hasLeveledUp").get<bool>();
    v.championId = j.at("championId").get<int32_t>();
    v.pointsGainedIndividualContribution = j.at("pointsGainedIndividualContribution").get<int64_t>();
    v.gameId = j.at("gameId").get<uint64_t>();
    v.pointsUntilNextLevelBeforeGame = j.at("pointsUntilNextLevelBeforeGame").get<int64_t>();
    v.pointsGained = j.at("pointsGained").get<int64_t>();
    v.bonusPointsGained = j.at("bonusPointsGained").get<int64_t>();
    v.pointsBeforeGame = j.at("pointsBeforeGame").get<int64_t>();
    v.pointsUntilNextLevelAfterGame = j.at("pointsUntilNextLevelAfterGame").get<int64_t>();
    v.memberGrades = j.at("memberGrades").get<std::vector<LolEndOfGameChampionMasteryGrade_t>>();
    v.grade = j.at("grade").get<std::string>();
    v.playerId = j.at("playerId").get<uint64_t>();
    v.id = j.at("id").get<std::string>();
    v.level = j.at("level").get<int64_t>();
    v.score = j.at("score").get<int64_t>();
    v.pointsSinceLastLevelBeforeGame = j.at("pointsSinceLastLevelBeforeGame").get<int64_t>();
  }
  inline std::string to_string(const LolEndOfGameChampionMasteryUpdate_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
