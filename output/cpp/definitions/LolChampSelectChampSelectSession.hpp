#pragma once
#include <json.hpp>
#include <optional>
#include "LolChampSelectChampSelectBannedChampions.hpp"
#include "LolChampSelectChampSelectTradeContract.hpp"
#include "LolChampSelectChampSelectPlayerSelection.hpp"
#include "LolChampSelectChampSelectTimer.hpp"
#include "LolChampSelectChampSelectChatRoomDetails.hpp"
namespace leagueapi {
  struct LolChampSelectChampSelectSession_t {
    std::vector<LolChampSelectChampSelectTradeContract_t> trades;
    int64_t localPlayerCellId;
    uint32_t rerollsRemaining;
    LolChampSelectChampSelectBannedChampions_t bans;
    std::vector<LolChampSelectChampSelectPlayerSelection_t> myTeam;
    bool allowBattleBoost;
    bool isSpectating;
    LolChampSelectChampSelectChatRoomDetails_t chatDetails;
    std::vector<nlohmann::json> actions;
    bool allowSkinSelection;
    LolChampSelectChampSelectTimer_t timer;
    bool allowRerolling;
    std::vector<LolChampSelectChampSelectPlayerSelection_t> theirTeam;
  };

  inline void to_json(nlohmann::json& j, const LolChampSelectChampSelectSession_t& v) {
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

  inline void from_json(const nlohmann::json& j, LolChampSelectChampSelectSession_t& v) {
    v.trades = j.at("trades").get<std::vector<LolChampSelectChampSelectTradeContract_t>>();
    v.localPlayerCellId = j.at("localPlayerCellId").get<int64_t>();
    v.rerollsRemaining = j.at("rerollsRemaining").get<uint32_t>();
    v.bans = j.at("bans").get<LolChampSelectChampSelectBannedChampions_t>();
    v.myTeam = j.at("myTeam").get<std::vector<LolChampSelectChampSelectPlayerSelection_t>>();
    v.allowBattleBoost = j.at("allowBattleBoost").get<bool>();
    v.isSpectating = j.at("isSpectating").get<bool>();
    v.chatDetails = j.at("chatDetails").get<LolChampSelectChampSelectChatRoomDetails_t>();
    v.actions = j.at("actions").get<std::vector<nlohmann::json>>();
    v.allowSkinSelection = j.at("allowSkinSelection").get<bool>();
    v.timer = j.at("timer").get<LolChampSelectChampSelectTimer_t>();
    v.allowRerolling = j.at("allowRerolling").get<bool>();
    v.theirTeam = j.at("theirTeam").get<std::vector<LolChampSelectChampSelectPlayerSelection_t>>();
  }
  inline std::string to_string(const LolChampSelectChampSelectSession_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
