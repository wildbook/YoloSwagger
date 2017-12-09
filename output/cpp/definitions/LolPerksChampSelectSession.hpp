#pragma once
#include <json.hpp>
#include <optional>
#include "LolPerksChampSelectTimer.hpp"
#include "LolPerksChampSelectChatRoomDetails.hpp"
#include "LolPerksChampSelectBannedChampions.hpp"
#include "LolPerksChampSelectPlayerSelection.hpp"
#include "LolPerksChampSelectTradeContract.hpp"
namespace leagueapi {
  struct LolPerksChampSelectSession_t {
    std::vector<nlohmann::json> actions;
    std::vector<LolPerksChampSelectPlayerSelection_t> theirTeam;
    std::vector<LolPerksChampSelectTradeContract_t> trades;
    LolPerksChampSelectBannedChampions_t bans;
    bool isSpectating;
    std::vector<LolPerksChampSelectPlayerSelection_t> myTeam;
    LolPerksChampSelectTimer_t timer;
    int64_t localPlayerCellId;
    LolPerksChampSelectChatRoomDetails_t chatDetails;
  };

  inline void to_json(nlohmann::json& j, const LolPerksChampSelectSession_t& v) {
    j["actions"] = v.actions;
    j["theirTeam"] = v.theirTeam;
    j["trades"] = v.trades;
    j["bans"] = v.bans;
    j["isSpectating"] = v.isSpectating;
    j["myTeam"] = v.myTeam;
    j["timer"] = v.timer;
    j["localPlayerCellId"] = v.localPlayerCellId;
    j["chatDetails"] = v.chatDetails;
  }

  inline void from_json(const nlohmann::json& j, LolPerksChampSelectSession_t& v) {
    v.actions = j.at("actions").get<std::vector<nlohmann::json>>();
    v.theirTeam = j.at("theirTeam").get<std::vector<LolPerksChampSelectPlayerSelection_t>>();
    v.trades = j.at("trades").get<std::vector<LolPerksChampSelectTradeContract_t>>();
    v.bans = j.at("bans").get<LolPerksChampSelectBannedChampions_t>();
    v.isSpectating = j.at("isSpectating").get<bool>();
    v.myTeam = j.at("myTeam").get<std::vector<LolPerksChampSelectPlayerSelection_t>>();
    v.timer = j.at("timer").get<LolPerksChampSelectTimer_t>();
    v.localPlayerCellId = j.at("localPlayerCellId").get<int64_t>();
    v.chatDetails = j.at("chatDetails").get<LolPerksChampSelectChatRoomDetails_t>();
  }
  inline std::string to_string(const LolPerksChampSelectSession_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
