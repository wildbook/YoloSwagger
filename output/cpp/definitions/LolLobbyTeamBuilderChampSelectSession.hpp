#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyTeamBuilderChampSelectTradeContract.hpp"
#include "LolLobbyTeamBuilderChampSelectTimer.hpp"
#include "LolLobbyTeamBuilderChampSelectChatRoomDetails.hpp"
#include "LolLobbyTeamBuilderChampSelectPlayerSelection.hpp"
namespace leagueapi {
  struct LolLobbyTeamBuilderChampSelectSession_t {
    std::vector<nlohmann::json> actions;
    bool allowSkinSelection;
    std::vector<LolLobbyTeamBuilderChampSelectTradeContract_t> trades;
    bool allowRerolling;
    uint32_t rerollsRemaining;
    std::vector<LolLobbyTeamBuilderChampSelectPlayerSelection_t> theirTeam;
    std::vector<LolLobbyTeamBuilderChampSelectPlayerSelection_t> myTeam;
    LolLobbyTeamBuilderChampSelectTimer_t timer;
    int64_t localPlayerCellId;
    bool allowBattleBoost;
    LolLobbyTeamBuilderChampSelectChatRoomDetails_t chatDetails;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderChampSelectSession_t& v) {
    j["actions"] = v.actions;
    j["allowSkinSelection"] = v.allowSkinSelection;
    j["trades"] = v.trades;
    j["allowRerolling"] = v.allowRerolling;
    j["rerollsRemaining"] = v.rerollsRemaining;
    j["theirTeam"] = v.theirTeam;
    j["myTeam"] = v.myTeam;
    j["timer"] = v.timer;
    j["localPlayerCellId"] = v.localPlayerCellId;
    j["allowBattleBoost"] = v.allowBattleBoost;
    j["chatDetails"] = v.chatDetails;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderChampSelectSession_t& v) {
    v.actions = j.at("actions").get<std::vector<nlohmann::json>>();
    v.allowSkinSelection = j.at("allowSkinSelection").get<bool>();
    v.trades = j.at("trades").get<std::vector<LolLobbyTeamBuilderChampSelectTradeContract_t>>();
    v.allowRerolling = j.at("allowRerolling").get<bool>();
    v.rerollsRemaining = j.at("rerollsRemaining").get<uint32_t>();
    v.theirTeam = j.at("theirTeam").get<std::vector<LolLobbyTeamBuilderChampSelectPlayerSelection_t>>();
    v.myTeam = j.at("myTeam").get<std::vector<LolLobbyTeamBuilderChampSelectPlayerSelection_t>>();
    v.timer = j.at("timer").get<LolLobbyTeamBuilderChampSelectTimer_t>();
    v.localPlayerCellId = j.at("localPlayerCellId").get<int64_t>();
    v.allowBattleBoost = j.at("allowBattleBoost").get<bool>();
    v.chatDetails = j.at("chatDetails").get<LolLobbyTeamBuilderChampSelectChatRoomDetails_t>();
  }
  inline std::string to_string(const LolLobbyTeamBuilderChampSelectSession_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
