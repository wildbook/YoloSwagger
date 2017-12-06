#pragma once
#include <json.hpp>
#include <optional>
#include "LolPerksChampSelectBannedChampions.hpp"
#include "LolPerksChampSelectPlayerSelection.hpp"
#include "LolPerksChampSelectChatRoomDetails.hpp"
#include "LolPerksChampSelectTimer.hpp"
#include "LolPerksChampSelectTradeContract.hpp"
namespace leagueapi {
  struct LolPerksChampSelectSession_t {
    std::vector<nlohmann::json> actions;
    LolPerksChampSelectBannedChampions_t bans;
    LolPerksChampSelectChatRoomDetails_t chatDetails;
    bool isSpectating;
    int64_t localPlayerCellId;
    std::vector<LolPerksChampSelectPlayerSelection_t> myTeam;
    std::vector<LolPerksChampSelectPlayerSelection_t> theirTeam;
    LolPerksChampSelectTimer_t timer;
    std::vector<LolPerksChampSelectTradeContract_t> trades;
  };

  inline void to_json(nlohmann::json& j, const LolPerksChampSelectSession_t& v) {
    j["actions"] = v.actions;
    j["bans"] = v.bans;
    j["chatDetails"] = v.chatDetails;
    j["isSpectating"] = v.isSpectating;
    j["localPlayerCellId"] = v.localPlayerCellId;
    j["myTeam"] = v.myTeam;
    j["theirTeam"] = v.theirTeam;
    j["timer"] = v.timer;
    j["trades"] = v.trades;
  }

  inline void from_json(const nlohmann::json& j, LolPerksChampSelectSession_t& v) {
    v.actions = j.at("actions").get<std::vector<nlohmann::json>>();
    v.bans = j.at("bans").get<LolPerksChampSelectBannedChampions_t>();
    v.chatDetails = j.at("chatDetails").get<LolPerksChampSelectChatRoomDetails_t>();
    v.isSpectating = j.at("isSpectating").get<bool>();
    v.localPlayerCellId = j.at("localPlayerCellId").get<int64_t>();
    v.myTeam = j.at("myTeam").get<std::vector<LolPerksChampSelectPlayerSelection_t>>();
    v.theirTeam = j.at("theirTeam").get<std::vector<LolPerksChampSelectPlayerSelection_t>>();
    v.timer = j.at("timer").get<LolPerksChampSelectTimer_t>();
    v.trades = j.at("trades").get<std::vector<LolPerksChampSelectTradeContract_t>>();
  }
}
