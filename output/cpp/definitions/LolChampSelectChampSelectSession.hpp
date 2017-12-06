#pragma once
#include <json.hpp>
#include <optional>
#include "LolChampSelectChampSelectTradeContract.hpp"
#include "LolChampSelectChampSelectBannedChampions.hpp"
#include "LolChampSelectChampSelectChatRoomDetails.hpp"
#include "LolChampSelectChampSelectPlayerSelection.hpp"
#include "LolChampSelectChampSelectTimer.hpp"
namespace leagueapi {
  struct LolChampSelectChampSelectSession_t {
    uint32_t rerollsRemaining;
    std::vector<LolChampSelectChampSelectPlayerSelection_t> myTeam;
    LolChampSelectChampSelectBannedChampions_t bans;
    std::vector<LolChampSelectChampSelectTradeContract_t> trades;
    bool allowSkinSelection;
    bool allowBattleBoost;
    int64_t localPlayerCellId;
    bool isSpectating;
    std::vector<nlohmann::json> actions;
    LolChampSelectChampSelectChatRoomDetails_t chatDetails;
    bool allowRerolling;
    std::vector<LolChampSelectChampSelectPlayerSelection_t> theirTeam;
    LolChampSelectChampSelectTimer_t timer;
  };

  inline void to_json(nlohmann::json& j, const LolChampSelectChampSelectSession_t& v) {
    j["rerollsRemaining"] = v.rerollsRemaining;
    j["myTeam"] = v.myTeam;
    j["bans"] = v.bans;
    j["trades"] = v.trades;
    j["allowSkinSelection"] = v.allowSkinSelection;
    j["allowBattleBoost"] = v.allowBattleBoost;
    j["localPlayerCellId"] = v.localPlayerCellId;
    j["isSpectating"] = v.isSpectating;
    j["actions"] = v.actions;
    j["chatDetails"] = v.chatDetails;
    j["allowRerolling"] = v.allowRerolling;
    j["theirTeam"] = v.theirTeam;
    j["timer"] = v.timer;
  }

  inline void from_json(const nlohmann::json& j, LolChampSelectChampSelectSession_t& v) {
    v.rerollsRemaining = j.at("rerollsRemaining").get<uint32_t>();
    v.myTeam = j.at("myTeam").get<std::vector<LolChampSelectChampSelectPlayerSelection_t>>();
    v.bans = j.at("bans").get<LolChampSelectChampSelectBannedChampions_t>();
    v.trades = j.at("trades").get<std::vector<LolChampSelectChampSelectTradeContract_t>>();
    v.allowSkinSelection = j.at("allowSkinSelection").get<bool>();
    v.allowBattleBoost = j.at("allowBattleBoost").get<bool>();
    v.localPlayerCellId = j.at("localPlayerCellId").get<int64_t>();
    v.isSpectating = j.at("isSpectating").get<bool>();
    v.actions = j.at("actions").get<std::vector<nlohmann::json>>();
    v.chatDetails = j.at("chatDetails").get<LolChampSelectChampSelectChatRoomDetails_t>();
    v.allowRerolling = j.at("allowRerolling").get<bool>();
    v.theirTeam = j.at("theirTeam").get<std::vector<LolChampSelectChampSelectPlayerSelection_t>>();
    v.timer = j.at("timer").get<LolChampSelectChampSelectTimer_t>();
  }
}
