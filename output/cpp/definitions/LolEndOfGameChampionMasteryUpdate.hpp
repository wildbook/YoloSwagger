#pragma once
#include <json.hpp>
#include <optional>
#include "LolEndOfGameChampionMasteryGrade.hpp"
#include "LolEndOfGameChampionMasteryMini.hpp"
namespace leagueapi {
  struct LolEndOfGameChampionMasteryUpdate_t {
    int64_t_t pointsUntilNextLevelAfterGame;
    int64_t_t pointsUntilNextLevelBeforeGame;
    bool_t hasLeveledUp;
    uint64_t_t gameId;
    int32_t_t championId;
    int64_t_t score;
    int64_t_t level;
    std::string_t grade;
    int64_t_t pointsGained;
    uint64_t_t playerId;
    int64_t_t bonusPointsGained;
    std::vector<LolEndOfGameChampionMasteryGrade_t> memberGrades;
    int64_t_t pointsSinceLastLevelBeforeGame;
    std::vector<LolEndOfGameChampionMasteryMini_t> levelUpList;
    int64_t_t pointsGainedIndividualContribution;
    std::string_t id;
    int64_t_t pointsBeforeGame;
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
    v.pointsUntilNextLevelAfterGame = j.at("pointsUntilNextLevelAfterGame").get<int64_t_t>();
    v.pointsUntilNextLevelBeforeGame = j.at("pointsUntilNextLevelBeforeGame").get<int64_t_t>();
    v.hasLeveledUp = j.at("hasLeveledUp").get<bool_t>();
    v.gameId = j.at("gameId").get<uint64_t_t>();
    v.championId = j.at("championId").get<int32_t_t>();
    v.score = j.at("score").get<int64_t_t>();
    v.level = j.at("level").get<int64_t_t>();
    v.grade = j.at("grade").get<std::string_t>();
    v.pointsGained = j.at("pointsGained").get<int64_t_t>();
    v.playerId = j.at("playerId").get<uint64_t_t>();
    v.bonusPointsGained = j.at("bonusPointsGained").get<int64_t_t>();
    v.memberGrades = j.at("memberGrades").get<std::vector<LolEndOfGameChampionMasteryGrade_t>>();
    v.pointsSinceLastLevelBeforeGame = j.at("pointsSinceLastLevelBeforeGame").get<int64_t_t>();
    v.levelUpList = j.at("levelUpList").get<std::vector<LolEndOfGameChampionMasteryMini_t>>();
    v.pointsGainedIndividualContribution = j.at("pointsGainedIndividualContribution").get<int64_t_t>();
    v.id = j.at("id").get<std::string_t>();
    v.pointsBeforeGame = j.at("pointsBeforeGame").get<int64_t_t>();
  }
  inline std::string to_string(const LolEndOfGameChampionMasteryUpdate_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
