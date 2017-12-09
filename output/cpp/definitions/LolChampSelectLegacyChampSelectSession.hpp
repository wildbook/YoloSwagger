#pragma once
#include <json.hpp>
#include <optional>
#include "LolChampSelectLegacyChampSelectTimer.hpp"
#include "LolChampSelectLegacyChampSelectChatRoomDetails.hpp"
#include "LolChampSelectLegacyChampSelectBannedChampions.hpp"
#include "LolChampSelectLegacyChampSelectPlayerSelection.hpp"
#include "LolChampSelectLegacyChampSelectTradeContract.hpp"
namespace leagueapi {
  struct LolChampSelectLegacyChampSelectSession_t {
    LolChampSelectLegacyChampSelectChatRoomDetails_t chatDetails;
    LolChampSelectLegacyChampSelectTimer_t timer;
    int64_t localPlayerCellId;
    uint32_t rerollsRemaining;
    bool allowRerolling;
    bool allowBattleBoost;
    std::vector<LolChampSelectLegacyChampSelectPlayerSelection_t> theirTeam;
    LolChampSelectLegacyChampSelectBannedChampions_t bans;
    std::vector<LolChampSelectLegacyChampSelectTradeContract_t> trades;
    bool isSpectating;
    std::vector<nlohmann::json> actions;
    std::vector<LolChampSelectLegacyChampSelectPlayerSelection_t> myTeam;
    bool allowSkinSelection;
  };

  inline void to_json(nlohmann::json& j, const LolChampSelectLegacyChampSelectSession_t& v) {
    j["chatDetails"] = v.chatDetails;
    j["timer"] = v.timer;
    j["localPlayerCellId"] = v.localPlayerCellId;
    j["rerollsRemaining"] = v.rerollsRemaining;
    j["allowRerolling"] = v.allowRerolling;
    j["allowBattleBoost"] = v.allowBattleBoost;
    j["theirTeam"] = v.theirTeam;
    j["bans"] = v.bans;
    j["trades"] = v.trades;
    j["isSpectating"] = v.isSpectating;
    j["actions"] = v.actions;
    j["myTeam"] = v.myTeam;
    j["allowSkinSelection"] = v.allowSkinSelection;
  }

  inline void from_json(const nlohmann::json& j, LolChampSelectLegacyChampSelectSession_t& v) {
    v.chatDetails = j.at("chatDetails").get<LolChampSelectLegacyChampSelectChatRoomDetails_t>();
    v.timer = j.at("timer").get<LolChampSelectLegacyChampSelectTimer_t>();
    v.localPlayerCellId = j.at("localPlayerCellId").get<int64_t>();
    v.rerollsRemaining = j.at("rerollsRemaining").get<uint32_t>();
    v.allowRerolling = j.at("allowRerolling").get<bool>();
    v.allowBattleBoost = j.at("allowBattleBoost").get<bool>();
    v.theirTeam = j.at("theirTeam").get<std::vector<LolChampSelectLegacyChampSelectPlayerSelection_t>>();
    v.bans = j.at("bans").get<LolChampSelectLegacyChampSelectBannedChampions_t>();
    v.trades = j.at("trades").get<std::vector<LolChampSelectLegacyChampSelectTradeContract_t>>();
    v.isSpectating = j.at("isSpectating").get<bool>();
    v.actions = j.at("actions").get<std::vector<nlohmann::json>>();
    v.myTeam = j.at("myTeam").get<std::vector<LolChampSelectLegacyChampSelectPlayerSelection_t>>();
    v.allowSkinSelection = j.at("allowSkinSelection").get<bool>();
  }
  inline std::string to_string(const LolChampSelectLegacyChampSelectSession_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
