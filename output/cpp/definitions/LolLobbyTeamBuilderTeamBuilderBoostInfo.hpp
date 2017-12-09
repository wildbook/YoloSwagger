#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLobbyTeamBuilderTeamBuilderBoostInfo_t {
    bool allowBattleBoost;
    bool battleBoostActivated;
    std::vector<int64_t> unlockedSkinIds;
    int64_t activatorCellId;
    int64_t cost;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderTeamBuilderBoostInfo_t& v) {
    j["allowBattleBoost"] = v.allowBattleBoost;
    j["battleBoostActivated"] = v.battleBoostActivated;
    j["unlockedSkinIds"] = v.unlockedSkinIds;
    j["activatorCellId"] = v.activatorCellId;
    j["cost"] = v.cost;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderTeamBuilderBoostInfo_t& v) {
    v.allowBattleBoost = j.at("allowBattleBoost").get<bool>();
    v.battleBoostActivated = j.at("battleBoostActivated").get<bool>();
    v.unlockedSkinIds = j.at("unlockedSkinIds").get<std::vector<int64_t>>();
    v.activatorCellId = j.at("activatorCellId").get<int64_t>();
    v.cost = j.at("cost").get<int64_t>();
  }
  inline std::string to_string(const LolLobbyTeamBuilderTeamBuilderBoostInfo_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
