#pragma once
#include <json.hpp>
#include <optional>
#include "LolChampSelectLegacyChampSelectPlayerSelection.hpp"
#include "LolChampSelectLegacyChampSelectBannedChampions.hpp"
#include "LolChampSelectLegacyChampSelectChatRoomDetails.hpp"
#include "LolChampSelectLegacyChampSelectTimer.hpp"
#include "LolChampSelectLegacyChampSelectTradeContract.hpp"
namespace leagueapi {
  struct LolChampSelectLegacyChampSelectSession_t {
    std::vector<LolChampSelectLegacyChampSelectTradeContract_t> trades;
    int64_t localPlayerCellId;
    uint32_t rerollsRemaining;
    LolChampSelectLegacyChampSelectBannedChampions_t bans;
    std::vector<LolChampSelectLegacyChampSelectPlayerSelection_t> myTeam;
    bool allowBattleBoost;
    bool isSpectating;
    LolChampSelectLegacyChampSelectChatRoomDetails_t chatDetails;
    std::vector<nlohmann::json> actions;
    bool allowSkinSelection;
    LolChampSelectLegacyChampSelectTimer_t timer;
    bool allowRerolling;
    std::vector<LolChampSelectLegacyChampSelectPlayerSelection_t> theirTeam;
  };

  inline void to_json(nlohmann::json& j, const LolChampSelectLegacyChampSelectSession_t& v) {
    j["trades"] = v.trades;
    j["localPlayerCellId"] = v.localPlayerCellId;
    j["rerollsRemaining"] = v.rerollsRemaining;
    j["bans"] = v.bans;
    j["myTeam"] = v.myTeam;
    j["allowBattleBoost"] = v.allowBattleBoost;
    j["isSpectating"] = v.isSpectating;
    j["chatDetails"] = v.chatDetails;
    j["actions"] = v.actions;
    j["allowSkinSelection"] = v.allowSkinSelection;
    j["timer"] = v.timer;
    j["allowRerolling"] = v.allowRerolling;
    j["theirTeam"] = v.theirTeam;
  }

  inline void from_json(const nlohmann::json& j, LolChampSelectLegacyChampSelectSession_t& v) {
    v.trades = j.at("trades").get<std::vector<LolChampSelectLegacyChampSelectTradeContract_t>>();
    v.localPlayerCellId = j.at("localPlayerCellId").get<int64_t>();
    v.rerollsRemaining = j.at("rerollsRemaining").get<uint32_t>();
    v.bans = j.at("bans").get<LolChampSelectLegacyChampSelectBannedChampions_t>();
    v.myTeam = j.at("myTeam").get<std::vector<LolChampSelectLegacyChampSelectPlayerSelection_t>>();
    v.allowBattleBoost = j.at("allowBattleBoost").get<bool>();
    v.isSpectating = j.at("isSpectating").get<bool>();
    v.chatDetails = j.at("chatDetails").get<LolChampSelectLegacyChampSelectChatRoomDetails_t>();
    v.actions = j.at("actions").get<std::vector<nlohmann::json>>();
    v.allowSkinSelection = j.at("allowSkinSelection").get<bool>();
    v.timer = j.at("timer").get<LolChampSelectLegacyChampSelectTimer_t>();
    v.allowRerolling = j.at("allowRerolling").get<bool>();
    v.theirTeam = j.at("theirTeam").get<std::vector<LolChampSelectLegacyChampSelectPlayerSelection_t>>();
  }
  inline std::string to_string(const LolChampSelectLegacyChampSelectSession_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
