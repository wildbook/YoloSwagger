#pragma once
#include <json.hpp>
#include <optional>
#include "LolChampSelectChampSelectChatRoomDetails.hpp"
#include "LolChampSelectChampSelectTradeContract.hpp"
#include "LolChampSelectChampSelectBannedChampions.hpp"
#include "LolChampSelectChampSelectPlayerSelection.hpp"
#include "LolChampSelectChampSelectTimer.hpp"
namespace leagueapi {
  struct LolChampSelectChampSelectSession_t {
    std::vector<nlohmann::json> actions;
    bool allowBattleBoost;
    bool allowRerolling;
    bool allowSkinSelection;
    LolChampSelectChampSelectBannedChampions_t bans;
    LolChampSelectChampSelectChatRoomDetails_t chatDetails;
    bool isSpectating;
    int64_t localPlayerCellId;
    std::vector<LolChampSelectChampSelectPlayerSelection_t> myTeam;
    uint32_t rerollsRemaining;
    std::vector<LolChampSelectChampSelectPlayerSelection_t> theirTeam;
    LolChampSelectChampSelectTimer_t timer;
    std::vector<LolChampSelectChampSelectTradeContract_t> trades;
  };

  inline void to_json(nlohmann::json& j, const LolChampSelectChampSelectSession_t& v) {
    j["actions"] = v.actions;
    j["allowBattleBoost"] = v.allowBattleBoost;
    j["allowRerolling"] = v.allowRerolling;
    j["allowSkinSelection"] = v.allowSkinSelection;
    j["bans"] = v.bans;
    j["chatDetails"] = v.chatDetails;
    j["isSpectating"] = v.isSpectating;
    j["localPlayerCellId"] = v.localPlayerCellId;
    j["myTeam"] = v.myTeam;
    j["rerollsRemaining"] = v.rerollsRemaining;
    j["theirTeam"] = v.theirTeam;
    j["timer"] = v.timer;
    j["trades"] = v.trades;
  }

  inline void from_json(const nlohmann::json& j, LolChampSelectChampSelectSession_t& v) {
    v.actions = j.at("actions").get<std::vector<nlohmann::json>>();
    v.allowBattleBoost = j.at("allowBattleBoost").get<bool>();
    v.allowRerolling = j.at("allowRerolling").get<bool>();
    v.allowSkinSelection = j.at("allowSkinSelection").get<bool>();
    v.bans = j.at("bans").get<LolChampSelectChampSelectBannedChampions_t>();
    v.chatDetails = j.at("chatDetails").get<LolChampSelectChampSelectChatRoomDetails_t>();
    v.isSpectating = j.at("isSpectating").get<bool>();
    v.localPlayerCellId = j.at("localPlayerCellId").get<int64_t>();
    v.myTeam = j.at("myTeam").get<std::vector<LolChampSelectChampSelectPlayerSelection_t>>();
    v.rerollsRemaining = j.at("rerollsRemaining").get<uint32_t>();
    v.theirTeam = j.at("theirTeam").get<std::vector<LolChampSelectChampSelectPlayerSelection_t>>();
    v.timer = j.at("timer").get<LolChampSelectChampSelectTimer_t>();
    v.trades = j.at("trades").get<std::vector<LolChampSelectChampSelectTradeContract_t>>();
  }
}
