#pragma once
#include <json.hpp>
#include <optional>
#include "LolChampSelectChampSelectTimer.hpp"
#include "LolChampSelectChampSelectBannedChampions.hpp"
#include "LolChampSelectChampSelectTradeContract.hpp"
#include "LolChampSelectChampSelectPlayerSelection.hpp"
#include "LolChampSelectChampSelectChatRoomDetails.hpp"
namespace leagueapi {
  struct LolChampSelectChampSelectSession_t {
    LolChampSelectChampSelectChatRoomDetails_t chatDetails;
    LolChampSelectChampSelectTimer_t timer;
    int64_t localPlayerCellId;
    uint32_t rerollsRemaining;
    bool allowRerolling;
    bool allowBattleBoost;
    std::vector<LolChampSelectChampSelectPlayerSelection_t> theirTeam;
    LolChampSelectChampSelectBannedChampions_t bans;
    std::vector<LolChampSelectChampSelectTradeContract_t> trades;
    bool isSpectating;
    std::vector<nlohmann::json> actions;
    std::vector<LolChampSelectChampSelectPlayerSelection_t> myTeam;
    bool allowSkinSelection;
  };

  inline void to_json(nlohmann::json& j, const LolChampSelectChampSelectSession_t& v) {
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

  inline void from_json(const nlohmann::json& j, LolChampSelectChampSelectSession_t& v) {
    v.chatDetails = j.at("chatDetails").get<LolChampSelectChampSelectChatRoomDetails_t>();
    v.timer = j.at("timer").get<LolChampSelectChampSelectTimer_t>();
    v.localPlayerCellId = j.at("localPlayerCellId").get<int64_t>();
    v.rerollsRemaining = j.at("rerollsRemaining").get<uint32_t>();
    v.allowRerolling = j.at("allowRerolling").get<bool>();
    v.allowBattleBoost = j.at("allowBattleBoost").get<bool>();
    v.theirTeam = j.at("theirTeam").get<std::vector<LolChampSelectChampSelectPlayerSelection_t>>();
    v.bans = j.at("bans").get<LolChampSelectChampSelectBannedChampions_t>();
    v.trades = j.at("trades").get<std::vector<LolChampSelectChampSelectTradeContract_t>>();
    v.isSpectating = j.at("isSpectating").get<bool>();
    v.actions = j.at("actions").get<std::vector<nlohmann::json>>();
    v.myTeam = j.at("myTeam").get<std::vector<LolChampSelectChampSelectPlayerSelection_t>>();
    v.allowSkinSelection = j.at("allowSkinSelection").get<bool>();
  }
  inline std::string to_string(const LolChampSelectChampSelectSession_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
