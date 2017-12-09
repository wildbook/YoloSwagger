#pragma once
#include <json.hpp>
#include <optional>
#include "LolChampSelectChampSelectChatRoomDetails.hpp"
#include "LolChampSelectChampSelectTimer.hpp"
#include "LolChampSelectChampSelectBannedChampions.hpp"
#include "LolChampSelectChampSelectPlayerSelection.hpp"
#include "LolChampSelectChampSelectTradeContract.hpp"
namespace leagueapi {
  struct LolChampSelectChampSelectSession_t {
    LolChampSelectChampSelectChatRoomDetails_t chatDetails;
    LolChampSelectChampSelectTimer_t timer;
    std::vector<nlohmann::json> actions;
    uint32_t rerollsRemaining;
    std::vector<LolChampSelectChampSelectPlayerSelection_t> myTeam;
    std::vector<LolChampSelectChampSelectPlayerSelection_t> theirTeam;
    int64_t localPlayerCellId;
    LolChampSelectChampSelectBannedChampions_t bans;
    bool allowBattleBoost;
    std::vector<LolChampSelectChampSelectTradeContract_t> trades;
    bool allowRerolling;
    bool allowSkinSelection;
    bool isSpectating;
  };

  inline void to_json(nlohmann::json& j, const LolChampSelectChampSelectSession_t& v) {
    j["chatDetails"] = v.chatDetails;
    j["timer"] = v.timer;
    j["actions"] = v.actions;
    j["rerollsRemaining"] = v.rerollsRemaining;
    j["myTeam"] = v.myTeam;
    j["theirTeam"] = v.theirTeam;
    j["localPlayerCellId"] = v.localPlayerCellId;
    j["bans"] = v.bans;
    j["allowBattleBoost"] = v.allowBattleBoost;
    j["trades"] = v.trades;
    j["allowRerolling"] = v.allowRerolling;
    j["allowSkinSelection"] = v.allowSkinSelection;
    j["isSpectating"] = v.isSpectating;
  }

  inline void from_json(const nlohmann::json& j, LolChampSelectChampSelectSession_t& v) {
    v.chatDetails = j.at("chatDetails").get<LolChampSelectChampSelectChatRoomDetails_t>();
    v.timer = j.at("timer").get<LolChampSelectChampSelectTimer_t>();
    v.actions = j.at("actions").get<std::vector<nlohmann::json>>();
    v.rerollsRemaining = j.at("rerollsRemaining").get<uint32_t>();
    v.myTeam = j.at("myTeam").get<std::vector<LolChampSelectChampSelectPlayerSelection_t>>();
    v.theirTeam = j.at("theirTeam").get<std::vector<LolChampSelectChampSelectPlayerSelection_t>>();
    v.localPlayerCellId = j.at("localPlayerCellId").get<int64_t>();
    v.bans = j.at("bans").get<LolChampSelectChampSelectBannedChampions_t>();
    v.allowBattleBoost = j.at("allowBattleBoost").get<bool>();
    v.trades = j.at("trades").get<std::vector<LolChampSelectChampSelectTradeContract_t>>();
    v.allowRerolling = j.at("allowRerolling").get<bool>();
    v.allowSkinSelection = j.at("allowSkinSelection").get<bool>();
    v.isSpectating = j.at("isSpectating").get<bool>();
  }
  inline std::string to_string(const LolChampSelectChampSelectSession_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
