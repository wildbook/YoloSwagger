#pragma once
#include <json.hpp>
#include <optional>
#include "LolEndOfGameChampionMasteryGrade.hpp"
#include "LolEndOfGameChampionMasteryMini.hpp"
namespace leagueapi {
  struct LolEndOfGameChampionMasteryUpdate_t {
    std::vector<LolEndOfGameChampionMasteryGrade_t> memberGrades;
    std::string grade;
    uint64_t playerId;
    int64_t pointsUntilNextLevelAfterGame;
    int64_t pointsGainedIndividualContribution;
    std::vector<LolEndOfGameChampionMasteryMini_t> levelUpList;
    int64_t level;
    int64_t pointsUntilNextLevelBeforeGame;
    int64_t pointsBeforeGame;
    std::string id;
    uint64_t gameId;
    int64_t pointsSinceLastLevelBeforeGame;
    int32_t championId;
    int64_t pointsGained;
    bool hasLeveledUp;
    int64_t score;
    int64_t bonusPointsGained;
  };

  inline void to_json(nlohmann::json& j, const LolEndOfGameChampionMasteryUpdate_t& v) {
    j["memberGrades"] = v.memberGrades;
    j["grade"] = v.grade;
    j["playerId"] = v.playerId;
    j["pointsUntilNextLevelAfterGame"] = v.pointsUntilNextLevelAfterGame;
    j["pointsGainedIndividualContribution"] = v.pointsGainedIndividualContribution;
    j["levelUpList"] = v.levelUpList;
    j["level"] = v.level;
    j["pointsUntilNextLevelBeforeGame"] = v.pointsUntilNextLevelBeforeGame;
    j["pointsBeforeGame"] = v.pointsBeforeGame;
    j["id"] = v.id;
    j["gameId"] = v.gameId;
    j["pointsSinceLastLevelBeforeGame"] = v.pointsSinceLastLevelBeforeGame;
    j["championId"] = v.championId;
    j["pointsGained"] = v.pointsGained;
    j["hasLeveledUp"] = v.hasLeveledUp;
    j["score"] = v.score;
    j["bonusPointsGained"] = v.bonusPointsGained;
  }

  inline void from_json(const nlohmann::json& j, LolEndOfGameChampionMasteryUpdate_t& v) {
    v.memberGrades = j.at("memberGrades").get<std::vector<LolEndOfGameChampionMasteryGrade_t>>();
    v.grade = j.at("grade").get<std::string>();
    v.playerId = j.at("playerId").get<uint64_t>();
    v.pointsUntilNextLevelAfterGame = j.at("pointsUntilNextLevelAfterGame").get<int64_t>();
    v.pointsGainedIndividualContribution = j.at("pointsGainedIndividualContribution").get<int64_t>();
    v.levelUpList = j.at("levelUpList").get<std::vector<LolEndOfGameChampionMasteryMini_t>>();
    v.level = j.at("level").get<int64_t>();
    v.pointsUntilNextLevelBeforeGame = j.at("pointsUntilNextLevelBeforeGame").get<int64_t>();
    v.pointsBeforeGame = j.at("pointsBeforeGame").get<int64_t>();
    v.id = j.at("id").get<std::string>();
    v.gameId = j.at("gameId").get<uint64_t>();
    v.pointsSinceLastLevelBeforeGame = j.at("pointsSinceLastLevelBeforeGame").get<int64_t>();
    v.championId = j.at("championId").get<int32_t>();
    v.pointsGained = j.at("pointsGained").get<int64_t>();
    v.hasLeveledUp = j.at("hasLeveledUp").get<bool>();
    v.score = j.at("score").get<int64_t>();
    v.bonusPointsGained = j.at("bonusPointsGained").get<int64_t>();
  }
  inline std::string to_string(const LolEndOfGameChampionMasteryUpdate_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
