#pragma once
#include <json.hpp>
#include <optional>
#include "LolPerksChampSelectBannedChampions.hpp"
#include "LolPerksChampSelectChatRoomDetails.hpp"
#include "LolPerksChampSelectPlayerSelection.hpp"
#include "LolPerksChampSelectTradeContract.hpp"
#include "LolPerksChampSelectTimer.hpp"
namespace leagueapi {
  struct LolPerksChampSelectSession_t {
    LolPerksChampSelectBannedChampions_t bans;
    LolPerksChampSelectChatRoomDetails_t chatDetails;
    LolPerksChampSelectTimer_t timer;
    std::vector<nlohmann::json> actions;
    std::vector<LolPerksChampSelectTradeContract_t> trades;
    std::vector<LolPerksChampSelectPlayerSelection_t> myTeam;
    bool isSpectating;
    std::vector<LolPerksChampSelectPlayerSelection_t> theirTeam;
    int64_t localPlayerCellId;
  };

  inline void to_json(nlohmann::json& j, const LolPerksChampSelectSession_t& v) {
    j["bans"] = v.bans;
    j["chatDetails"] = v.chatDetails;
    j["timer"] = v.timer;
    j["actions"] = v.actions;
    j["trades"] = v.trades;
    j["myTeam"] = v.myTeam;
    j["isSpectating"] = v.isSpectating;
    j["theirTeam"] = v.theirTeam;
    j["localPlayerCellId"] = v.localPlayerCellId;
  }

  inline void from_json(const nlohmann::json& j, LolPerksChampSelectSession_t& v) {
    v.bans = j.at("bans").get<LolPerksChampSelectBannedChampions_t>();
    v.chatDetails = j.at("chatDetails").get<LolPerksChampSelectChatRoomDetails_t>();
    v.timer = j.at("timer").get<LolPerksChampSelectTimer_t>();
    v.actions = j.at("actions").get<std::vector<nlohmann::json>>();
    v.trades = j.at("trades").get<std::vector<LolPerksChampSelectTradeContract_t>>();
    v.myTeam = j.at("myTeam").get<std::vector<LolPerksChampSelectPlayerSelection_t>>();
    v.isSpectating = j.at("isSpectating").get<bool>();
    v.theirTeam = j.at("theirTeam").get<std::vector<LolPerksChampSelectPlayerSelection_t>>();
    v.localPlayerCellId = j.at("localPlayerCellId").get<int64_t>();
  }
  inline std::string to_string(const LolPerksChampSelectSession_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
