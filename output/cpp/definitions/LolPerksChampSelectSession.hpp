#pragma once
#include <json.hpp>
#include <optional>
#include "LolPerksChampSelectTimer.hpp"
#include "LolPerksChampSelectPlayerSelection.hpp"
#include "LolPerksChampSelectBannedChampions.hpp"
#include "LolPerksChampSelectChatRoomDetails.hpp"
#include "LolPerksChampSelectTradeContract.hpp"
namespace leagueapi {
  struct LolPerksChampSelectSession_t {
    std::vector<LolPerksChampSelectPlayerSelection_t> theirTeam;
    LolPerksChampSelectBannedChampions_t bans;
    std::vector<LolPerksChampSelectTradeContract_t> trades;
    bool isSpectating;
    std::vector<nlohmann::json> actions;
    std::vector<LolPerksChampSelectPlayerSelection_t> myTeam;
    LolPerksChampSelectTimer_t timer;
    LolPerksChampSelectChatRoomDetails_t chatDetails;
    int64_t localPlayerCellId;
  };

  inline void to_json(nlohmann::json& j, const LolPerksChampSelectSession_t& v) {
    j["theirTeam"] = v.theirTeam;
    j["bans"] = v.bans;
    j["trades"] = v.trades;
    j["isSpectating"] = v.isSpectating;
    j["actions"] = v.actions;
    j["myTeam"] = v.myTeam;
    j["timer"] = v.timer;
    j["chatDetails"] = v.chatDetails;
    j["localPlayerCellId"] = v.localPlayerCellId;
  }

  inline void from_json(const nlohmann::json& j, LolPerksChampSelectSession_t& v) {
    v.theirTeam = j.at("theirTeam").get<std::vector<LolPerksChampSelectPlayerSelection_t>>();
    v.bans = j.at("bans").get<LolPerksChampSelectBannedChampions_t>();
    v.trades = j.at("trades").get<std::vector<LolPerksChampSelectTradeContract_t>>();
    v.isSpectating = j.at("isSpectating").get<bool>();
    v.actions = j.at("actions").get<std::vector<nlohmann::json>>();
    v.myTeam = j.at("myTeam").get<std::vector<LolPerksChampSelectPlayerSelection_t>>();
    v.timer = j.at("timer").get<LolPerksChampSelectTimer_t>();
    v.chatDetails = j.at("chatDetails").get<LolPerksChampSelectChatRoomDetails_t>();
    v.localPlayerCellId = j.at("localPlayerCellId").get<int64_t>();
  }
  inline std::string to_string(const LolPerksChampSelectSession_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
