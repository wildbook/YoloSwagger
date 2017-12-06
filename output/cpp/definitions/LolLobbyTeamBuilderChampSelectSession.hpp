#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyTeamBuilderChampSelectTradeContract.hpp"
#include "LolLobbyTeamBuilderChampSelectPlayerSelection.hpp"
#include "LolLobbyTeamBuilderChampSelectTimer.hpp"
#include "LolLobbyTeamBuilderChampSelectChatRoomDetails.hpp"
namespace leagueapi {
  struct LolLobbyTeamBuilderChampSelectSession_t {
    std::vector<nlohmann::json> actions;
    bool allowBattleBoost;
    bool allowRerolling;
    bool allowSkinSelection;
    LolLobbyTeamBuilderChampSelectChatRoomDetails_t chatDetails;
    int64_t localPlayerCellId;
    std::vector<LolLobbyTeamBuilderChampSelectPlayerSelection_t> myTeam;
    uint32_t rerollsRemaining;
    std::vector<LolLobbyTeamBuilderChampSelectPlayerSelection_t> theirTeam;
    LolLobbyTeamBuilderChampSelectTimer_t timer;
    std::vector<LolLobbyTeamBuilderChampSelectTradeContract_t> trades;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderChampSelectSession_t& v) {
    j["actions"] = v.actions;
    j["allowBattleBoost"] = v.allowBattleBoost;
    j["allowRerolling"] = v.allowRerolling;
    j["allowSkinSelection"] = v.allowSkinSelection;
    j["chatDetails"] = v.chatDetails;
    j["localPlayerCellId"] = v.localPlayerCellId;
    j["myTeam"] = v.myTeam;
    j["rerollsRemaining"] = v.rerollsRemaining;
    j["theirTeam"] = v.theirTeam;
    j["timer"] = v.timer;
    j["trades"] = v.trades;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderChampSelectSession_t& v) {
    v.actions = j.at("actions").get<std::vector<nlohmann::json>>();
    v.allowBattleBoost = j.at("allowBattleBoost").get<bool>();
    v.allowRerolling = j.at("allowRerolling").get<bool>();
    v.allowSkinSelection = j.at("allowSkinSelection").get<bool>();
    v.chatDetails = j.at("chatDetails").get<LolLobbyTeamBuilderChampSelectChatRoomDetails_t>();
    v.localPlayerCellId = j.at("localPlayerCellId").get<int64_t>();
    v.myTeam = j.at("myTeam").get<std::vector<LolLobbyTeamBuilderChampSelectPlayerSelection_t>>();
    v.rerollsRemaining = j.at("rerollsRemaining").get<uint32_t>();
    v.theirTeam = j.at("theirTeam").get<std::vector<LolLobbyTeamBuilderChampSelectPlayerSelection_t>>();
    v.timer = j.at("timer").get<LolLobbyTeamBuilderChampSelectTimer_t>();
    v.trades = j.at("trades").get<std::vector<LolLobbyTeamBuilderChampSelectTradeContract_t>>();
  }
}
