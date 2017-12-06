#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLobbyTeamBuilderTeamBuilderBoostInfo_t {
    int64_t activatorCellId;
    bool allowBattleBoost;
    bool battleBoostActivated;
    int64_t cost;
    std::vector<int64_t> unlockedSkinIds;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderTeamBuilderBoostInfo_t& v) {
    j["activatorCellId"] = v.activatorCellId;
    j["allowBattleBoost"] = v.allowBattleBoost;
    j["battleBoostActivated"] = v.battleBoostActivated;
    j["cost"] = v.cost;
    j["unlockedSkinIds"] = v.unlockedSkinIds;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderTeamBuilderBoostInfo_t& v) {
    v.activatorCellId = j.at("activatorCellId").get<int64_t>();
    v.allowBattleBoost = j.at("allowBattleBoost").get<bool>();
    v.battleBoostActivated = j.at("battleBoostActivated").get<bool>();
    v.cost = j.at("cost").get<int64_t>();
    v.unlockedSkinIds = j.at("unlockedSkinIds").get<std::vector<int64_t>>();
  }
}
