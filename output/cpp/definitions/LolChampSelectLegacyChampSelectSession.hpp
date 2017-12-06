#pragma once
#include <json.hpp>
#include <optional>
#include "LolChampSelectLegacyChampSelectChatRoomDetails.hpp"
#include "LolChampSelectLegacyChampSelectPlayerSelection.hpp"
#include "LolChampSelectLegacyChampSelectTradeContract.hpp"
#include "LolChampSelectLegacyChampSelectBannedChampions.hpp"
#include "LolChampSelectLegacyChampSelectTimer.hpp"
namespace leagueapi {
  struct LolChampSelectLegacyChampSelectSession_t {
    uint32_t rerollsRemaining;
    std::vector<LolChampSelectLegacyChampSelectPlayerSelection_t> myTeam;
    LolChampSelectLegacyChampSelectBannedChampions_t bans;
    std::vector<LolChampSelectLegacyChampSelectTradeContract_t> trades;
    bool allowSkinSelection;
    bool allowBattleBoost;
    int64_t localPlayerCellId;
    bool isSpectating;
    std::vector<nlohmann::json> actions;
    LolChampSelectLegacyChampSelectChatRoomDetails_t chatDetails;
    bool allowRerolling;
    std::vector<LolChampSelectLegacyChampSelectPlayerSelection_t> theirTeam;
    LolChampSelectLegacyChampSelectTimer_t timer;
  };

  inline void to_json(nlohmann::json& j, const LolChampSelectLegacyChampSelectSession_t& v) {
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

  inline void from_json(const nlohmann::json& j, LolChampSelectLegacyChampSelectSession_t& v) {
    v.rerollsRemaining = j.at("rerollsRemaining").get<uint32_t>();
    v.myTeam = j.at("myTeam").get<std::vector<LolChampSelectLegacyChampSelectPlayerSelection_t>>();
    v.bans = j.at("bans").get<LolChampSelectLegacyChampSelectBannedChampions_t>();
    v.trades = j.at("trades").get<std::vector<LolChampSelectLegacyChampSelectTradeContract_t>>();
    v.allowSkinSelection = j.at("allowSkinSelection").get<bool>();
    v.allowBattleBoost = j.at("allowBattleBoost").get<bool>();
    v.localPlayerCellId = j.at("localPlayerCellId").get<int64_t>();
    v.isSpectating = j.at("isSpectating").get<bool>();
    v.actions = j.at("actions").get<std::vector<nlohmann::json>>();
    v.chatDetails = j.at("chatDetails").get<LolChampSelectLegacyChampSelectChatRoomDetails_t>();
    v.allowRerolling = j.at("allowRerolling").get<bool>();
    v.theirTeam = j.at("theirTeam").get<std::vector<LolChampSelectLegacyChampSelectPlayerSelection_t>>();
    v.timer = j.at("timer").get<LolChampSelectLegacyChampSelectTimer_t>();
  }
}
