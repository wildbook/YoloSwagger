#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLobbyTeamBuilderTeamBuilderBoostInfo_t {
    bool allowBattleBoost;
    int64_t activatorCellId;
    std::vector<int64_t> unlockedSkinIds;
    bool battleBoostActivated;
    int64_t cost;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderTeamBuilderBoostInfo_t& v) {
    j["allowBattleBoost"] = v.allowBattleBoost;
    j["activatorCellId"] = v.activatorCellId;
    j["unlockedSkinIds"] = v.unlockedSkinIds;
    j["battleBoostActivated"] = v.battleBoostActivated;
    j["cost"] = v.cost;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderTeamBuilderBoostInfo_t& v) {
    v.allowBattleBoost = j.at("allowBattleBoost").get<bool>();
    v.activatorCellId = j.at("activatorCellId").get<int64_t>();
    v.unlockedSkinIds = j.at("unlockedSkinIds").get<std::vector<int64_t>>();
    v.battleBoostActivated = j.at("battleBoostActivated").get<bool>();
    v.cost = j.at("cost").get<int64_t>();
  }
}
