#pragma once
#include <json.hpp>
#include <optional>
#include "LolChampSelectLegacyChampSelectTimer.hpp"
#include "LolChampSelectLegacyChampSelectTradeContract.hpp"
#include "LolChampSelectLegacyChampSelectChatRoomDetails.hpp"
#include "LolChampSelectLegacyChampSelectBannedChampions.hpp"
#include "LolChampSelectLegacyChampSelectPlayerSelection.hpp"
namespace leagueapi {
  struct LolChampSelectLegacyChampSelectSession_t {
    std::vector<LolChampSelectLegacyChampSelectPlayerSelection_t> theirTeam;
    LolChampSelectLegacyChampSelectBannedChampions_t bans;
    uint32_t rerollsRemaining;
    bool isSpectating;
    bool allowBattleBoost;
    std::vector<LolChampSelectLegacyChampSelectTradeContract_t> trades;
    bool allowSkinSelection;
    bool allowRerolling;
    std::vector<nlohmann::json> actions;
    LolChampSelectLegacyChampSelectChatRoomDetails_t chatDetails;
    LolChampSelectLegacyChampSelectTimer_t timer;
    std::vector<LolChampSelectLegacyChampSelectPlayerSelection_t> myTeam;
    int64_t localPlayerCellId;
  };

  inline void to_json(nlohmann::json& j, const LolChampSelectLegacyChampSelectSession_t& v) {
    j["theirTeam"] = v.theirTeam;
    j["bans"] = v.bans;
    j["rerollsRemaining"] = v.rerollsRemaining;
    j["isSpectating"] = v.isSpectating;
    j["allowBattleBoost"] = v.allowBattleBoost;
    j["trades"] = v.trades;
    j["allowSkinSelection"] = v.allowSkinSelection;
    j["allowRerolling"] = v.allowRerolling;
    j["actions"] = v.actions;
    j["chatDetails"] = v.chatDetails;
    j["timer"] = v.timer;
    j["myTeam"] = v.myTeam;
    j["localPlayerCellId"] = v.localPlayerCellId;
  }

  inline void from_json(const nlohmann::json& j, LolChampSelectLegacyChampSelectSession_t& v) {
    v.theirTeam = j.at("theirTeam").get<std::vector<LolChampSelectLegacyChampSelectPlayerSelection_t>>();
    v.bans = j.at("bans").get<LolChampSelectLegacyChampSelectBannedChampions_t>();
    v.rerollsRemaining = j.at("rerollsRemaining").get<uint32_t>();
    v.isSpectating = j.at("isSpectating").get<bool>();
    v.allowBattleBoost = j.at("allowBattleBoost").get<bool>();
    v.trades = j.at("trades").get<std::vector<LolChampSelectLegacyChampSelectTradeContract_t>>();
    v.allowSkinSelection = j.at("allowSkinSelection").get<bool>();
    v.allowRerolling = j.at("allowRerolling").get<bool>();
    v.actions = j.at("actions").get<std::vector<nlohmann::json>>();
    v.chatDetails = j.at("chatDetails").get<LolChampSelectLegacyChampSelectChatRoomDetails_t>();
    v.timer = j.at("timer").get<LolChampSelectLegacyChampSelectTimer_t>();
    v.myTeam = j.at("myTeam").get<std::vector<LolChampSelectLegacyChampSelectPlayerSelection_t>>();
    v.localPlayerCellId = j.at("localPlayerCellId").get<int64_t>();
  }
  inline std::string to_string(const LolChampSelectLegacyChampSelectSession_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
