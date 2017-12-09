#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyTeamBuilderChampSelectPlayerSelection.hpp"
#include "LolLobbyTeamBuilderChampSelectTimer.hpp"
#include "LolLobbyTeamBuilderChampSelectTradeContract.hpp"
#include "LolLobbyTeamBuilderChampSelectChatRoomDetails.hpp"
namespace leagueapi {
  struct LolLobbyTeamBuilderChampSelectSession_t {
    bool allowBattleBoost;
    LolLobbyTeamBuilderChampSelectChatRoomDetails_t chatDetails;
    std::vector<LolLobbyTeamBuilderChampSelectPlayerSelection_t> theirTeam;
    LolLobbyTeamBuilderChampSelectTimer_t timer;
    uint32_t rerollsRemaining;
    std::vector<LolLobbyTeamBuilderChampSelectTradeContract_t> trades;
    int64_t localPlayerCellId;
    std::vector<nlohmann::json> actions;
    bool allowRerolling;
    std::vector<LolLobbyTeamBuilderChampSelectPlayerSelection_t> myTeam;
    bool allowSkinSelection;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderChampSelectSession_t& v) {
    j["allowBattleBoost"] = v.allowBattleBoost;
    j["chatDetails"] = v.chatDetails;
    j["theirTeam"] = v.theirTeam;
    j["timer"] = v.timer;
    j["rerollsRemaining"] = v.rerollsRemaining;
    j["trades"] = v.trades;
    j["localPlayerCellId"] = v.localPlayerCellId;
    j["actions"] = v.actions;
    j["allowRerolling"] = v.allowRerolling;
    j["myTeam"] = v.myTeam;
    j["allowSkinSelection"] = v.allowSkinSelection;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderChampSelectSession_t& v) {
    v.allowBattleBoost = j.at("allowBattleBoost").get<bool>();
    v.chatDetails = j.at("chatDetails").get<LolLobbyTeamBuilderChampSelectChatRoomDetails_t>();
    v.theirTeam = j.at("theirTeam").get<std::vector<LolLobbyTeamBuilderChampSelectPlayerSelection_t>>();
    v.timer = j.at("timer").get<LolLobbyTeamBuilderChampSelectTimer_t>();
    v.rerollsRemaining = j.at("rerollsRemaining").get<uint32_t>();
    v.trades = j.at("trades").get<std::vector<LolLobbyTeamBuilderChampSelectTradeContract_t>>();
    v.localPlayerCellId = j.at("localPlayerCellId").get<int64_t>();
    v.actions = j.at("actions").get<std::vector<nlohmann::json>>();
    v.allowRerolling = j.at("allowRerolling").get<bool>();
    v.myTeam = j.at("myTeam").get<std::vector<LolLobbyTeamBuilderChampSelectPlayerSelection_t>>();
    v.allowSkinSelection = j.at("allowSkinSelection").get<bool>();
  }
  inline std::string to_string(const LolLobbyTeamBuilderChampSelectSession_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
