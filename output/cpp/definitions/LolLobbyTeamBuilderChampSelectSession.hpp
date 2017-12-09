#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyTeamBuilderChampSelectTradeContract.hpp"
#include "LolLobbyTeamBuilderChampSelectChatRoomDetails.hpp"
#include "LolLobbyTeamBuilderChampSelectTimer.hpp"
#include "LolLobbyTeamBuilderChampSelectPlayerSelection.hpp"
namespace leagueapi {
  struct LolLobbyTeamBuilderChampSelectSession_t {
    LolLobbyTeamBuilderChampSelectChatRoomDetails_t chatDetails;
    bool allowBattleBoost;
    uint32_t rerollsRemaining;
    std::vector<nlohmann::json> actions;
    std::vector<LolLobbyTeamBuilderChampSelectTradeContract_t> trades;
    LolLobbyTeamBuilderChampSelectTimer_t timer;
    bool allowRerolling;
    std::vector<LolLobbyTeamBuilderChampSelectPlayerSelection_t> myTeam;
    bool allowSkinSelection;
    std::vector<LolLobbyTeamBuilderChampSelectPlayerSelection_t> theirTeam;
    int64_t localPlayerCellId;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderChampSelectSession_t& v) {
    j["chatDetails"] = v.chatDetails;
    j["allowBattleBoost"] = v.allowBattleBoost;
    j["rerollsRemaining"] = v.rerollsRemaining;
    j["actions"] = v.actions;
    j["trades"] = v.trades;
    j["timer"] = v.timer;
    j["allowRerolling"] = v.allowRerolling;
    j["myTeam"] = v.myTeam;
    j["allowSkinSelection"] = v.allowSkinSelection;
    j["theirTeam"] = v.theirTeam;
    j["localPlayerCellId"] = v.localPlayerCellId;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderChampSelectSession_t& v) {
    v.chatDetails = j.at("chatDetails").get<LolLobbyTeamBuilderChampSelectChatRoomDetails_t>();
    v.allowBattleBoost = j.at("allowBattleBoost").get<bool>();
    v.rerollsRemaining = j.at("rerollsRemaining").get<uint32_t>();
    v.actions = j.at("actions").get<std::vector<nlohmann::json>>();
    v.trades = j.at("trades").get<std::vector<LolLobbyTeamBuilderChampSelectTradeContract_t>>();
    v.timer = j.at("timer").get<LolLobbyTeamBuilderChampSelectTimer_t>();
    v.allowRerolling = j.at("allowRerolling").get<bool>();
    v.myTeam = j.at("myTeam").get<std::vector<LolLobbyTeamBuilderChampSelectPlayerSelection_t>>();
    v.allowSkinSelection = j.at("allowSkinSelection").get<bool>();
    v.theirTeam = j.at("theirTeam").get<std::vector<LolLobbyTeamBuilderChampSelectPlayerSelection_t>>();
    v.localPlayerCellId = j.at("localPlayerCellId").get<int64_t>();
  }
  inline std::string to_string(const LolLobbyTeamBuilderChampSelectSession_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
