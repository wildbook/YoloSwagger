#ifndef SWAGGER_TYPES_LolLobbyTeamBuilderTeamBuilderBoostInfo_HPP
#define SWAGGER_TYPES_LolLobbyTeamBuilderTeamBuilderBoostInfo_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolLobbyTeamBuilderTeamBuilderBoostInfo {
    // 
    int64_t activatorCellId;
    // 
    bool allowBattleBoost;
    // 
    int64_t cost;
    // 
    bool battleBoostActivated;
    // 
    std::vector<int64_t> unlockedSkinIds;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderTeamBuilderBoostInfo& v) {
    j["activatorCellId"] = v.activatorCellId;
    j["allowBattleBoost"] = v.allowBattleBoost;
    j["cost"] = v.cost;
    j["battleBoostActivated"] = v.battleBoostActivated;
    j["unlockedSkinIds"] = v.unlockedSkinIds;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderTeamBuilderBoostInfo& v) {
    v.activatorCellId = j.at("activatorCellId").get<int64_t>;
    v.allowBattleBoost = j.at("allowBattleBoost").get<bool>;
    v.cost = j.at("cost").get<int64_t>;
    v.battleBoostActivated = j.at("battleBoostActivated").get<bool>;
    v.unlockedSkinIds = j.at("unlockedSkinIds").get<std::vector<int64_t>>;
  }

}
#endif // SWAGGER_TYPES_LolLobbyTeamBuilderTeamBuilderBoostInfo_HPP