#ifndef SWAGGER_TYPES_LolPerksChampSelectSession_HPP
#define SWAGGER_TYPES_LolPerksChampSelectSession_HPP
#include <json.hpp>
#include "LolPerksChampSelectBannedChampions.hpp"
#include "LolPerksChampSelectTradeContract.hpp"
#include "LolPerksChampSelectTimer.hpp"
#include "LolPerksChampSelectPlayerSelection.hpp"
#include "LolPerksChampSelectChatRoomDetails.hpp"
namespace leagueapi {
  // 
  struct LolPerksChampSelectSession {
    // 
    std::vector<nlohmann::json> actions;
    // 
    LolPerksChampSelectBannedChampions bans;
    // 
    LolPerksChampSelectChatRoomDetails chatDetails;
    // 
    bool isSpectating;
    // 
    int64_t localPlayerCellId;
    // 
    std::vector<LolPerksChampSelectPlayerSelection> myTeam;
    // 
    std::vector<LolPerksChampSelectPlayerSelection> theirTeam;
    // 
    LolPerksChampSelectTimer timer;
    // 
    std::vector<LolPerksChampSelectTradeContract> trades;
  };

  inline void to_json(nlohmann::json& j, const LolPerksChampSelectSession& v) {
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

  inline void from_json(const nlohmann::json& j, LolPerksChampSelectSession& v) {
    v.actions = j.at("actions").get<std::vector<nlohmann::json>>;
    v.bans = j.at("bans").get<LolPerksChampSelectBannedChampions>;
    v.chatDetails = j.at("chatDetails").get<LolPerksChampSelectChatRoomDetails>;
    v.isSpectating = j.at("isSpectating").get<bool>;
    v.localPlayerCellId = j.at("localPlayerCellId").get<int64_t>;
    v.myTeam = j.at("myTeam").get<std::vector<LolPerksChampSelectPlayerSelection>>;
    v.theirTeam = j.at("theirTeam").get<std::vector<LolPerksChampSelectPlayerSelection>>;
    v.timer = j.at("timer").get<LolPerksChampSelectTimer>;
    v.trades = j.at("trades").get<std::vector<LolPerksChampSelectTradeContract>>;
  }

}
#endif // SWAGGER_TYPES_LolPerksChampSelectSession_HPP
