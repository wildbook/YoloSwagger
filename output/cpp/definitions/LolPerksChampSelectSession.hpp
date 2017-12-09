#pragma once
#include <json.hpp>
#include <optional>
#include "LolPerksChampSelectPlayerSelection.hpp"
#include "LolPerksChampSelectChatRoomDetails.hpp"
#include "LolPerksChampSelectTradeContract.hpp"
#include "LolPerksChampSelectTimer.hpp"
#include "LolPerksChampSelectBannedChampions.hpp"
namespace leagueapi {
  struct LolPerksChampSelectSession_t {
    LolPerksChampSelectChatRoomDetails_t chatDetails;
    std::vector<LolPerksChampSelectPlayerSelection_t> theirTeam;
    LolPerksChampSelectTimer_t timer;
    LolPerksChampSelectBannedChampions_t bans;
    std::vector<LolPerksChampSelectTradeContract_t> trades;
    int64_t localPlayerCellId;
    std::vector<nlohmann::json> actions;
    bool isSpectating;
    std::vector<LolPerksChampSelectPlayerSelection_t> myTeam;
  };

  inline void to_json(nlohmann::json& j, const LolPerksChampSelectSession_t& v) {
    j["chatDetails"] = v.chatDetails;
    j["theirTeam"] = v.theirTeam;
    j["timer"] = v.timer;
    j["bans"] = v.bans;
    j["trades"] = v.trades;
    j["localPlayerCellId"] = v.localPlayerCellId;
    j["actions"] = v.actions;
    j["isSpectating"] = v.isSpectating;
    j["myTeam"] = v.myTeam;
  }

  inline void from_json(const nlohmann::json& j, LolPerksChampSelectSession_t& v) {
    v.chatDetails = j.at("chatDetails").get<LolPerksChampSelectChatRoomDetails_t>();
    v.theirTeam = j.at("theirTeam").get<std::vector<LolPerksChampSelectPlayerSelection_t>>();
    v.timer = j.at("timer").get<LolPerksChampSelectTimer_t>();
    v.bans = j.at("bans").get<LolPerksChampSelectBannedChampions_t>();
    v.trades = j.at("trades").get<std::vector<LolPerksChampSelectTradeContract_t>>();
    v.localPlayerCellId = j.at("localPlayerCellId").get<int64_t>();
    v.actions = j.at("actions").get<std::vector<nlohmann::json>>();
    v.isSpectating = j.at("isSpectating").get<bool>();
    v.myTeam = j.at("myTeam").get<std::vector<LolPerksChampSelectPlayerSelection_t>>();
  }
  inline std::string to_string(const LolPerksChampSelectSession_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
