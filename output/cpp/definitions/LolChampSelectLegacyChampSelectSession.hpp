#pragma once
#include <json.hpp>
#include <optional>
#include "LolChampSelectLegacyChampSelectBannedChampions.hpp"
#include "LolChampSelectLegacyChampSelectTradeContract.hpp"
#include "LolChampSelectLegacyChampSelectPlayerSelection.hpp"
#include "LolChampSelectLegacyChampSelectTimer.hpp"
#include "LolChampSelectLegacyChampSelectChatRoomDetails.hpp"
namespace leagueapi {
  struct LolChampSelectLegacyChampSelectSession_t {
    std::vector<nlohmann::json> actions;
    bool allowSkinSelection;
    LolChampSelectLegacyChampSelectBannedChampions_t bans;
    bool allowRerolling;
    std::vector<LolChampSelectLegacyChampSelectPlayerSelection_t> theirTeam;
    LolChampSelectLegacyChampSelectTimer_t timer;
    int64_t localPlayerCellId;
    uint32_t rerollsRemaining;
    LolChampSelectLegacyChampSelectChatRoomDetails_t chatDetails;
    std::vector<LolChampSelectLegacyChampSelectTradeContract_t> trades;
    std::vector<LolChampSelectLegacyChampSelectPlayerSelection_t> myTeam;
    bool isSpectating;
    bool allowBattleBoost;
  };

  inline void to_json(nlohmann::json& j, const LolChampSelectLegacyChampSelectSession_t& v) {
    j["actions"] = v.actions;
    j["allowSkinSelection"] = v.allowSkinSelection;
    j["bans"] = v.bans;
    j["allowRerolling"] = v.allowRerolling;
    j["theirTeam"] = v.theirTeam;
    j["timer"] = v.timer;
    j["localPlayerCellId"] = v.localPlayerCellId;
    j["rerollsRemaining"] = v.rerollsRemaining;
    j["chatDetails"] = v.chatDetails;
    j["trades"] = v.trades;
    j["myTeam"] = v.myTeam;
    j["isSpectating"] = v.isSpectating;
    j["allowBattleBoost"] = v.allowBattleBoost;
  }

  inline void from_json(const nlohmann::json& j, LolChampSelectLegacyChampSelectSession_t& v) {
    v.actions = j.at("actions").get<std::vector<nlohmann::json>>();
    v.allowSkinSelection = j.at("allowSkinSelection").get<bool>();
    v.bans = j.at("bans").get<LolChampSelectLegacyChampSelectBannedChampions_t>();
    v.allowRerolling = j.at("allowRerolling").get<bool>();
    v.theirTeam = j.at("theirTeam").get<std::vector<LolChampSelectLegacyChampSelectPlayerSelection_t>>();
    v.timer = j.at("timer").get<LolChampSelectLegacyChampSelectTimer_t>();
    v.localPlayerCellId = j.at("localPlayerCellId").get<int64_t>();
    v.rerollsRemaining = j.at("rerollsRemaining").get<uint32_t>();
    v.chatDetails = j.at("chatDetails").get<LolChampSelectLegacyChampSelectChatRoomDetails_t>();
    v.trades = j.at("trades").get<std::vector<LolChampSelectLegacyChampSelectTradeContract_t>>();
    v.myTeam = j.at("myTeam").get<std::vector<LolChampSelectLegacyChampSelectPlayerSelection_t>>();
    v.isSpectating = j.at("isSpectating").get<bool>();
    v.allowBattleBoost = j.at("allowBattleBoost").get<bool>();
  }
  inline std::string to_string(const LolChampSelectLegacyChampSelectSession_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
