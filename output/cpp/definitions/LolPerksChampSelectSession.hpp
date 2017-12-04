#ifndef SWAGGER_TYPES_LolPerksChampSelectSession_HPP
#define SWAGGER_TYPES_LolPerksChampSelectSession_HPP
#include <json.hpp>
#include "LolPerksChampSelectTimer.hpp"
#include "LolPerksChampSelectPlayerSelection.hpp"
#include "LolPerksChampSelectBannedChampions.hpp"
#include "LolPerksChampSelectChatRoomDetails.hpp"
#include "LolPerksChampSelectTradeContract.hpp"
namespace leagueapi {
  // 
  struct LolPerksChampSelectSession {
    // 
    std::vector<LolPerksChampSelectPlayerSelection> theirTeam;
    // 
    LolPerksChampSelectBannedChampions bans;
    // 
    std::vector<LolPerksChampSelectTradeContract> trades;
    // 
    bool isSpectating;
    // 
    std::vector<nlohmann::json> actions;
    // 
    std::vector<LolPerksChampSelectPlayerSelection> myTeam;
    // 
    LolPerksChampSelectTimer timer;
    // 
    LolPerksChampSelectChatRoomDetails chatDetails;
    // 
    int64_t localPlayerCellId;
  };

  inline void to_json(nlohmann::json& j, const LolPerksChampSelectSession& v) {
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

  inline void from_json(const nlohmann::json& j, LolPerksChampSelectSession& v) {
    v.theirTeam = j.at("theirTeam").get<std::vector<LolPerksChampSelectPlayerSelection>>;
    v.bans = j.at("bans").get<LolPerksChampSelectBannedChampions>;
    v.trades = j.at("trades").get<std::vector<LolPerksChampSelectTradeContract>>;
    v.isSpectating = j.at("isSpectating").get<bool>;
    v.actions = j.at("actions").get<std::vector<nlohmann::json>>;
    v.myTeam = j.at("myTeam").get<std::vector<LolPerksChampSelectPlayerSelection>>;
    v.timer = j.at("timer").get<LolPerksChampSelectTimer>;
    v.chatDetails = j.at("chatDetails").get<LolPerksChampSelectChatRoomDetails>;
    v.localPlayerCellId = j.at("localPlayerCellId").get<int64_t>;
  }

}
#endif // SWAGGER_TYPES_LolPerksChampSelectSession_HPP
