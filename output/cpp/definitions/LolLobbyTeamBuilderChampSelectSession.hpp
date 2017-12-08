#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyTeamBuilderChampSelectChatRoomDetails.hpp"
#include "LolLobbyTeamBuilderChampSelectTradeContract.hpp"
#include "LolLobbyTeamBuilderChampSelectPlayerSelection.hpp"
#include "LolLobbyTeamBuilderChampSelectTimer.hpp"
namespace leagueapi {
  struct LolLobbyTeamBuilderChampSelectSession_t {
    std::vector<LolLobbyTeamBuilderChampSelectPlayerSelection_t> theirTeam;
    uint32_t_t rerollsRemaining;
    bool_t allowBattleBoost;
    std::vector<LolLobbyTeamBuilderChampSelectTradeContract_t> trades;
    bool_t allowSkinSelection;
    bool_t allowRerolling;
    std::vector<nlohmann::json> actions;
    LolLobbyTeamBuilderChampSelectChatRoomDetails_t chatDetails;
    LolLobbyTeamBuilderChampSelectTimer_t timer;
    std::vector<LolLobbyTeamBuilderChampSelectPlayerSelection_t> myTeam;
    int64_t_t localPlayerCellId;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderChampSelectSession_t& v) {
    j["theirTeam"] = v.theirTeam;
    j["rerollsRemaining"] = v.rerollsRemaining;
    j["allowBattleBoost"] = v.allowBattleBoost;
    j["trades"] = v.trades;
    j["allowSkinSelection"] = v.allowSkinSelection;
    j["allowRerolling"] = v.allowRerolling;
    j["actions"] = v.actions;
    j["chatDetails"] = v.chatDetails;
    j["timer"] = v.timer;
    j["myTeam"] = v.myTeam;
    j["localPlayerCellId"] = v.localPlayerCellId;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderChampSelectSession_t& v) {
    v.theirTeam = j.at("theirTeam").get<std::vector<LolLobbyTeamBuilderChampSelectPlayerSelection_t>>();
    v.rerollsRemaining = j.at("rerollsRemaining").get<uint32_t_t>();
    v.allowBattleBoost = j.at("allowBattleBoost").get<bool_t>();
    v.trades = j.at("trades").get<std::vector<LolLobbyTeamBuilderChampSelectTradeContract_t>>();
    v.allowSkinSelection = j.at("allowSkinSelection").get<bool_t>();
    v.allowRerolling = j.at("allowRerolling").get<bool_t>();
    v.actions = j.at("actions").get<std::vector<nlohmann::json>>();
    v.chatDetails = j.at("chatDetails").get<LolLobbyTeamBuilderChampSelectChatRoomDetails_t>();
    v.timer = j.at("timer").get<LolLobbyTeamBuilderChampSelectTimer_t>();
    v.myTeam = j.at("myTeam").get<std::vector<LolLobbyTeamBuilderChampSelectPlayerSelection_t>>();
    v.localPlayerCellId = j.at("localPlayerCellId").get<int64_t_t>();
  }
  inline std::string to_string(const LolLobbyTeamBuilderChampSelectSession_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
