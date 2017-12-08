#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyTeamBuilderChampSelectChatRoomDetails.hpp"
#include "LolLobbyTeamBuilderChampSelectPlayerSelection.hpp"
#include "LolLobbyTeamBuilderChampSelectTradeContract.hpp"
#include "LolLobbyTeamBuilderChampSelectTimer.hpp"
namespace leagueapi {
  struct LolLobbyTeamBuilderChampSelectSession_t {
    bool allowBattleBoost;
    std::vector<LolLobbyTeamBuilderChampSelectTradeContract_t> trades;
    uint32_t rerollsRemaining;
    LolLobbyTeamBuilderChampSelectChatRoomDetails_t chatDetails;
    int64_t localPlayerCellId;
    std::vector<nlohmann::json> actions;
    std::vector<LolLobbyTeamBuilderChampSelectPlayerSelection_t> myTeam;
    bool allowRerolling;
    LolLobbyTeamBuilderChampSelectTimer_t timer;
    std::vector<LolLobbyTeamBuilderChampSelectPlayerSelection_t> theirTeam;
    bool allowSkinSelection;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderChampSelectSession_t& v) {
    j["allowBattleBoost"] = v.allowBattleBoost;
    j["trades"] = v.trades;
    j["rerollsRemaining"] = v.rerollsRemaining;
    j["chatDetails"] = v.chatDetails;
    j["localPlayerCellId"] = v.localPlayerCellId;
    j["actions"] = v.actions;
    j["myTeam"] = v.myTeam;
    j["allowRerolling"] = v.allowRerolling;
    j["timer"] = v.timer;
    j["theirTeam"] = v.theirTeam;
    j["allowSkinSelection"] = v.allowSkinSelection;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderChampSelectSession_t& v) {
    v.allowBattleBoost = j.at("allowBattleBoost").get<bool>();
    v.trades = j.at("trades").get<std::vector<LolLobbyTeamBuilderChampSelectTradeContract_t>>();
    v.rerollsRemaining = j.at("rerollsRemaining").get<uint32_t>();
    v.chatDetails = j.at("chatDetails").get<LolLobbyTeamBuilderChampSelectChatRoomDetails_t>();
    v.localPlayerCellId = j.at("localPlayerCellId").get<int64_t>();
    v.actions = j.at("actions").get<std::vector<nlohmann::json>>();
    v.myTeam = j.at("myTeam").get<std::vector<LolLobbyTeamBuilderChampSelectPlayerSelection_t>>();
    v.allowRerolling = j.at("allowRerolling").get<bool>();
    v.timer = j.at("timer").get<LolLobbyTeamBuilderChampSelectTimer_t>();
    v.theirTeam = j.at("theirTeam").get<std::vector<LolLobbyTeamBuilderChampSelectPlayerSelection_t>>();
    v.allowSkinSelection = j.at("allowSkinSelection").get<bool>();
  }
  inline std::string to_string(const LolLobbyTeamBuilderChampSelectSession_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
