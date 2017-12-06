#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyTeamBuilderChampSelectTimer.hpp"
#include "LolLobbyTeamBuilderChampSelectChatRoomDetails.hpp"
#include "LolLobbyTeamBuilderChampSelectPlayerSelection.hpp"
#include "LolLobbyTeamBuilderChampSelectTradeContract.hpp"
namespace leagueapi {
  struct LolLobbyTeamBuilderChampSelectSession_t {
    bool allowBattleBoost;
    int64_t localPlayerCellId;
    uint32_t rerollsRemaining;
    std::vector<LolLobbyTeamBuilderChampSelectPlayerSelection_t> myTeam;
    std::vector<nlohmann::json> actions;
    LolLobbyTeamBuilderChampSelectChatRoomDetails_t chatDetails;
    bool allowRerolling;
    std::vector<LolLobbyTeamBuilderChampSelectTradeContract_t> trades;
    bool allowSkinSelection;
    std::vector<LolLobbyTeamBuilderChampSelectPlayerSelection_t> theirTeam;
    LolLobbyTeamBuilderChampSelectTimer_t timer;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderChampSelectSession_t& v) {
    j["allowBattleBoost"] = v.allowBattleBoost;
    j["localPlayerCellId"] = v.localPlayerCellId;
    j["rerollsRemaining"] = v.rerollsRemaining;
    j["myTeam"] = v.myTeam;
    j["actions"] = v.actions;
    j["chatDetails"] = v.chatDetails;
    j["allowRerolling"] = v.allowRerolling;
    j["trades"] = v.trades;
    j["allowSkinSelection"] = v.allowSkinSelection;
    j["theirTeam"] = v.theirTeam;
    j["timer"] = v.timer;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderChampSelectSession_t& v) {
    v.allowBattleBoost = j.at("allowBattleBoost").get<bool>();
    v.localPlayerCellId = j.at("localPlayerCellId").get<int64_t>();
    v.rerollsRemaining = j.at("rerollsRemaining").get<uint32_t>();
    v.myTeam = j.at("myTeam").get<std::vector<LolLobbyTeamBuilderChampSelectPlayerSelection_t>>();
    v.actions = j.at("actions").get<std::vector<nlohmann::json>>();
    v.chatDetails = j.at("chatDetails").get<LolLobbyTeamBuilderChampSelectChatRoomDetails_t>();
    v.allowRerolling = j.at("allowRerolling").get<bool>();
    v.trades = j.at("trades").get<std::vector<LolLobbyTeamBuilderChampSelectTradeContract_t>>();
    v.allowSkinSelection = j.at("allowSkinSelection").get<bool>();
    v.theirTeam = j.at("theirTeam").get<std::vector<LolLobbyTeamBuilderChampSelectPlayerSelection_t>>();
    v.timer = j.at("timer").get<LolLobbyTeamBuilderChampSelectTimer_t>();
  }
}
