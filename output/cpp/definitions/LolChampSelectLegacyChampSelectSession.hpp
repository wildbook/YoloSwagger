#pragma once
#include <json.hpp>
#include <optional>
#include "LolChampSelectLegacyChampSelectTradeContract.hpp"
#include "LolChampSelectLegacyChampSelectChatRoomDetails.hpp"
#include "LolChampSelectLegacyChampSelectTimer.hpp"
#include "LolChampSelectLegacyChampSelectPlayerSelection.hpp"
#include "LolChampSelectLegacyChampSelectBannedChampions.hpp"
namespace leagueapi {
  struct LolChampSelectLegacyChampSelectSession_t {
    std::vector<nlohmann::json> actions;
    bool allowBattleBoost;
    bool allowRerolling;
    bool allowSkinSelection;
    LolChampSelectLegacyChampSelectBannedChampions_t bans;
    LolChampSelectLegacyChampSelectChatRoomDetails_t chatDetails;
    bool isSpectating;
    int64_t localPlayerCellId;
    std::vector<LolChampSelectLegacyChampSelectPlayerSelection_t> myTeam;
    uint32_t rerollsRemaining;
    std::vector<LolChampSelectLegacyChampSelectPlayerSelection_t> theirTeam;
    LolChampSelectLegacyChampSelectTimer_t timer;
    std::vector<LolChampSelectLegacyChampSelectTradeContract_t> trades;
  };

  inline void to_json(nlohmann::json& j, const LolChampSelectLegacyChampSelectSession_t& v) {
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

  inline void from_json(const nlohmann::json& j, LolChampSelectLegacyChampSelectSession_t& v) {
    v.actions = j.at("actions").get<std::vector<nlohmann::json>>();
    v.allowBattleBoost = j.at("allowBattleBoost").get<bool>();
    v.allowRerolling = j.at("allowRerolling").get<bool>();
    v.allowSkinSelection = j.at("allowSkinSelection").get<bool>();
    v.bans = j.at("bans").get<LolChampSelectLegacyChampSelectBannedChampions_t>();
    v.chatDetails = j.at("chatDetails").get<LolChampSelectLegacyChampSelectChatRoomDetails_t>();
    v.isSpectating = j.at("isSpectating").get<bool>();
    v.localPlayerCellId = j.at("localPlayerCellId").get<int64_t>();
    v.myTeam = j.at("myTeam").get<std::vector<LolChampSelectLegacyChampSelectPlayerSelection_t>>();
    v.rerollsRemaining = j.at("rerollsRemaining").get<uint32_t>();
    v.theirTeam = j.at("theirTeam").get<std::vector<LolChampSelectLegacyChampSelectPlayerSelection_t>>();
    v.timer = j.at("timer").get<LolChampSelectLegacyChampSelectTimer_t>();
    v.trades = j.at("trades").get<std::vector<LolChampSelectLegacyChampSelectTradeContract_t>>();
  }
}
