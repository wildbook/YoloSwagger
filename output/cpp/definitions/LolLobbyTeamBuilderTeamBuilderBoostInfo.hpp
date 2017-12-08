#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLobbyTeamBuilderTeamBuilderBoostInfo_t {
    bool allowBattleBoost;
    bool battleBoostActivated;
    int64_t cost;
    std::vector<int64_t> unlockedSkinIds;
    int64_t activatorCellId;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderTeamBuilderBoostInfo_t& v) {
    j["allowBattleBoost"] = v.allowBattleBoost;
    j["battleBoostActivated"] = v.battleBoostActivated;
    j["cost"] = v.cost;
    j["unlockedSkinIds"] = v.unlockedSkinIds;
    j["activatorCellId"] = v.activatorCellId;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderTeamBuilderBoostInfo_t& v) {
    v.allowBattleBoost = j.at("allowBattleBoost").get<bool>();
    v.battleBoostActivated = j.at("battleBoostActivated").get<bool>();
    v.cost = j.at("cost").get<int64_t>();
    v.unlockedSkinIds = j.at("unlockedSkinIds").get<std::vector<int64_t>>();
    v.activatorCellId = j.at("activatorCellId").get<int64_t>();
  }
  inline std::string to_string(const LolLobbyTeamBuilderTeamBuilderBoostInfo_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
