#pragma once
#include <json.hpp>
#include <optional>
#include "LolEndOfGameChampionMasteryGrade.hpp"
#include "LolEndOfGameChampionMasteryMini.hpp"
namespace leagueapi {
  struct LolEndOfGameChampionMasteryUpdate_t {
    int64_t pointsUntilNextLevelAfterGame;
    int64_t pointsUntilNextLevelBeforeGame;
    bool hasLeveledUp;
    uint64_t gameId;
    int32_t championId;
    int64_t score;
    int64_t level;
    std::string grade;
    int64_t pointsGained;
    uint64_t playerId;
    int64_t bonusPointsGained;
    std::vector<LolEndOfGameChampionMasteryGrade_t> memberGrades;
    int64_t pointsSinceLastLevelBeforeGame;
    std::vector<LolEndOfGameChampionMasteryMini_t> levelUpList;
    int64_t pointsGainedIndividualContribution;
    std::string id;
    int64_t pointsBeforeGame;
  };

  inline void to_json(nlohmann::json& j, const LolEndOfGameChampionMasteryUpdate_t& v) {
    j["pointsUntilNextLevelAfterGame"] = v.pointsUntilNextLevelAfterGame;
    j["pointsUntilNextLevelBeforeGame"] = v.pointsUntilNextLevelBeforeGame;
    j["hasLeveledUp"] = v.hasLeveledUp;
    j["gameId"] = v.gameId;
    j["championId"] = v.championId;
    j["score"] = v.score;
    j["level"] = v.level;
    j["grade"] = v.grade;
    j["pointsGained"] = v.pointsGained;
    j["playerId"] = v.playerId;
    j["bonusPointsGained"] = v.bonusPointsGained;
    j["memberGrades"] = v.memberGrades;
    j["pointsSinceLastLevelBeforeGame"] = v.pointsSinceLastLevelBeforeGame;
    j["levelUpList"] = v.levelUpList;
    j["pointsGainedIndividualContribution"] = v.pointsGainedIndividualContribution;
    j["id"] = v.id;
    j["pointsBeforeGame"] = v.pointsBeforeGame;
  }

  inline void from_json(const nlohmann::json& j, LolEndOfGameChampionMasteryUpdate_t& v) {
    v.pointsUntilNextLevelAfterGame = j.at("pointsUntilNextLevelAfterGame").get<int64_t>();
    v.pointsUntilNextLevelBeforeGame = j.at("pointsUntilNextLevelBeforeGame").get<int64_t>();
    v.hasLeveledUp = j.at("hasLeveledUp").get<bool>();
    v.gameId = j.at("gameId").get<uint64_t>();
    v.championId = j.at("championId").get<int32_t>();
    v.score = j.at("score").get<int64_t>();
    v.level = j.at("level").get<int64_t>();
    v.grade = j.at("grade").get<std::string>();
    v.pointsGained = j.at("pointsGained").get<int64_t>();
    v.playerId = j.at("playerId").get<uint64_t>();
    v.bonusPointsGained = j.at("bonusPointsGained").get<int64_t>();
    v.memberGrades = j.at("memberGrades").get<std::vector<LolEndOfGameChampionMasteryGrade_t>>();
    v.pointsSinceLastLevelBeforeGame = j.at("pointsSinceLastLevelBeforeGame").get<int64_t>();
    v.levelUpList = j.at("levelUpList").get<std::vector<LolEndOfGameChampionMasteryMini_t>>();
    v.pointsGainedIndividualContribution = j.at("pointsGainedIndividualContribution").get<int64_t>();
    v.id = j.at("id").get<std::string>();
    v.pointsBeforeGame = j.at("pointsBeforeGame").get<int64_t>();
  }
  inline std::string to_string(const LolEndOfGameChampionMasteryUpdate_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
