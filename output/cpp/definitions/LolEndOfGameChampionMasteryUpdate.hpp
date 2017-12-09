#pragma once
#include <json.hpp>
#include <optional>
#include "LolEndOfGameChampionMasteryMini.hpp"
#include "LolEndOfGameChampionMasteryGrade.hpp"
namespace leagueapi {
  struct LolEndOfGameChampionMasteryUpdate_t {
    std::string id;
    std::vector<LolEndOfGameChampionMasteryMini_t> levelUpList;
    int64_t bonusPointsGained;
    int64_t pointsSinceLastLevelBeforeGame;
    int64_t pointsGainedIndividualContribution;
    uint64_t gameId;
    int64_t pointsUntilNextLevelAfterGame;
    std::string grade;
    int64_t pointsUntilNextLevelBeforeGame;
    int64_t score;
    int64_t pointsBeforeGame;
    int64_t level;
    std::vector<LolEndOfGameChampionMasteryGrade_t> memberGrades;
    uint64_t playerId;
    int64_t pointsGained;
    bool hasLeveledUp;
    int32_t championId;
  };

  inline void to_json(nlohmann::json& j, const LolEndOfGameChampionMasteryUpdate_t& v) {
    j["id"] = v.id;
    j["levelUpList"] = v.levelUpList;
    j["bonusPointsGained"] = v.bonusPointsGained;
    j["pointsSinceLastLevelBeforeGame"] = v.pointsSinceLastLevelBeforeGame;
    j["pointsGainedIndividualContribution"] = v.pointsGainedIndividualContribution;
    j["gameId"] = v.gameId;
    j["pointsUntilNextLevelAfterGame"] = v.pointsUntilNextLevelAfterGame;
    j["grade"] = v.grade;
    j["pointsUntilNextLevelBeforeGame"] = v.pointsUntilNextLevelBeforeGame;
    j["score"] = v.score;
    j["pointsBeforeGame"] = v.pointsBeforeGame;
    j["level"] = v.level;
    j["memberGrades"] = v.memberGrades;
    j["playerId"] = v.playerId;
    j["pointsGained"] = v.pointsGained;
    j["hasLeveledUp"] = v.hasLeveledUp;
    j["championId"] = v.championId;
  }

  inline void from_json(const nlohmann::json& j, LolEndOfGameChampionMasteryUpdate_t& v) {
    v.id = j.at("id").get<std::string>();
    v.levelUpList = j.at("levelUpList").get<std::vector<LolEndOfGameChampionMasteryMini_t>>();
    v.bonusPointsGained = j.at("bonusPointsGained").get<int64_t>();
    v.pointsSinceLastLevelBeforeGame = j.at("pointsSinceLastLevelBeforeGame").get<int64_t>();
    v.pointsGainedIndividualContribution = j.at("pointsGainedIndividualContribution").get<int64_t>();
    v.gameId = j.at("gameId").get<uint64_t>();
    v.pointsUntilNextLevelAfterGame = j.at("pointsUntilNextLevelAfterGame").get<int64_t>();
    v.grade = j.at("grade").get<std::string>();
    v.pointsUntilNextLevelBeforeGame = j.at("pointsUntilNextLevelBeforeGame").get<int64_t>();
    v.score = j.at("score").get<int64_t>();
    v.pointsBeforeGame = j.at("pointsBeforeGame").get<int64_t>();
    v.level = j.at("level").get<int64_t>();
    v.memberGrades = j.at("memberGrades").get<std::vector<LolEndOfGameChampionMasteryGrade_t>>();
    v.playerId = j.at("playerId").get<uint64_t>();
    v.pointsGained = j.at("pointsGained").get<int64_t>();
    v.hasLeveledUp = j.at("hasLeveledUp").get<bool>();
    v.championId = j.at("championId").get<int32_t>();
  }
  inline std::string to_string(const LolEndOfGameChampionMasteryUpdate_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
