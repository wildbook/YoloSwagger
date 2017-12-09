#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLobbyTeamBuilderTeamBuilderBoostInfo_t {
    bool battleBoostActivated;
    bool allowBattleBoost;
    int64_t activatorCellId;
    std::vector<int64_t> unlockedSkinIds;
    int64_t cost;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderTeamBuilderBoostInfo_t& v) {
    j["battleBoostActivated"] = v.battleBoostActivated;
    j["allowBattleBoost"] = v.allowBattleBoost;
    j["activatorCellId"] = v.activatorCellId;
    j["unlockedSkinIds"] = v.unlockedSkinIds;
    j["cost"] = v.cost;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderTeamBuilderBoostInfo_t& v) {
    v.battleBoostActivated = j.at("battleBoostActivated").get<bool>();
    v.allowBattleBoost = j.at("allowBattleBoost").get<bool>();
    v.activatorCellId = j.at("activatorCellId").get<int64_t>();
    v.unlockedSkinIds = j.at("unlockedSkinIds").get<std::vector<int64_t>>();
    v.cost = j.at("cost").get<int64_t>();
  }
  inline std::string to_string(const LolLobbyTeamBuilderTeamBuilderBoostInfo_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
