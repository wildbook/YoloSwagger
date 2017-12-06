#pragma once
#include <json.hpp>
#include <optional>
#include "LolPerksChampSelectBannedChampions.hpp"
#include "LolPerksChampSelectTradeContract.hpp"
#include "LolPerksChampSelectTimer.hpp"
#include "LolPerksChampSelectChatRoomDetails.hpp"
#include "LolPerksChampSelectPlayerSelection.hpp"
namespace leagueapi {
  struct LolPerksChampSelectSession_t {
    int64_t localPlayerCellId;
    std::vector<LolPerksChampSelectTradeContract_t> trades;
    std::vector<LolPerksChampSelectPlayerSelection_t> myTeam;
    bool isSpectating;
    LolPerksChampSelectBannedChampions_t bans;
    LolPerksChampSelectChatRoomDetails_t chatDetails;
    std::vector<LolPerksChampSelectPlayerSelection_t> theirTeam;
    std::vector<nlohmann::json> actions;
    LolPerksChampSelectTimer_t timer;
  };

  inline void to_json(nlohmann::json& j, const LolPerksChampSelectSession_t& v) {
    j["localPlayerCellId"] = v.localPlayerCellId;
    j["trades"] = v.trades;
    j["myTeam"] = v.myTeam;
    j["isSpectating"] = v.isSpectating;
    j["bans"] = v.bans;
    j["chatDetails"] = v.chatDetails;
    j["theirTeam"] = v.theirTeam;
    j["actions"] = v.actions;
    j["timer"] = v.timer;
  }

  inline void from_json(const nlohmann::json& j, LolPerksChampSelectSession_t& v) {
    v.localPlayerCellId = j.at("localPlayerCellId").get<int64_t>();
    v.trades = j.at("trades").get<std::vector<LolPerksChampSelectTradeContract_t>>();
    v.myTeam = j.at("myTeam").get<std::vector<LolPerksChampSelectPlayerSelection_t>>();
    v.isSpectating = j.at("isSpectating").get<bool>();
    v.bans = j.at("bans").get<LolPerksChampSelectBannedChampions_t>();
    v.chatDetails = j.at("chatDetails").get<LolPerksChampSelectChatRoomDetails_t>();
    v.theirTeam = j.at("theirTeam").get<std::vector<LolPerksChampSelectPlayerSelection_t>>();
    v.actions = j.at("actions").get<std::vector<nlohmann::json>>();
    v.timer = j.at("timer").get<LolPerksChampSelectTimer_t>();
  }
}
