#ifndef SWAGGER_TYPES_LolChampSelectChampSelectSession_HPP
#define SWAGGER_TYPES_LolChampSelectChampSelectSession_HPP
#include <json.hpp>
#include "LolChampSelectChampSelectBannedChampions.hpp"
#include "LolChampSelectChampSelectTradeContract.hpp"
#include "LolChampSelectChampSelectChatRoomDetails.hpp"
#include "LolChampSelectChampSelectTimer.hpp"
#include "LolChampSelectChampSelectPlayerSelection.hpp"
namespace leagueapi {
  // 
  struct LolChampSelectChampSelectSession {
    // 
    std::vector<LolChampSelectChampSelectPlayerSelection> theirTeam;
    // 
    LolChampSelectChampSelectBannedChampions bans;
    // 
    uint32_t rerollsRemaining;
    // 
    bool isSpectating;
    // 
    bool allowBattleBoost;
    // 
    std::vector<LolChampSelectChampSelectTradeContract> trades;
    // 
    bool allowSkinSelection;
    // 
    bool allowRerolling;
    // 
    std::vector<nlohmann::json> actions;
    // 
    LolChampSelectChampSelectChatRoomDetails chatDetails;
    // 
    LolChampSelectChampSelectTimer timer;
    // 
    std::vector<LolChampSelectChampSelectPlayerSelection> myTeam;
    // 
    int64_t localPlayerCellId;
  };

  inline void to_json(nlohmann::json& j, const LolChampSelectChampSelectSession& v) {
    j["theirTeam"] = v.theirTeam;
    j["bans"] = v.bans;
    j["rerollsRemaining"] = v.rerollsRemaining;
    j["isSpectating"] = v.isSpectating;
    j["allowBattleBoost"] = v.allowBattleBoost;
    j["trades"] = v.trades;
    j["allowSkinSelection"] = v.allowSkinSelection;
    j["allowRerolling"] = v.allowRerolling;
    j["actions"] = v.actions;
    j["chatDetails"] = v.chatDetails;
    j["timer"] = v.timer;
    j["myTeam"] = v.myTeam;
    j["localPlayerCellId"] = v.localPlayerCellId;
  }

  inline void from_json(const nlohmann::json& j, LolChampSelectChampSelectSession& v) {
    v.theirTeam = j.at("theirTeam").get<std::vector<LolChampSelectChampSelectPlayerSelection>>;
    v.bans = j.at("bans").get<LolChampSelectChampSelectBannedChampions>;
    v.rerollsRemaining = j.at("rerollsRemaining").get<uint32_t>;
    v.isSpectating = j.at("isSpectating").get<bool>;
    v.allowBattleBoost = j.at("allowBattleBoost").get<bool>;
    v.trades = j.at("trades").get<std::vector<LolChampSelectChampSelectTradeContract>>;
    v.allowSkinSelection = j.at("allowSkinSelection").get<bool>;
    v.allowRerolling = j.at("allowRerolling").get<bool>;
    v.actions = j.at("actions").get<std::vector<nlohmann::json>>;
    v.chatDetails = j.at("chatDetails").get<LolChampSelectChampSelectChatRoomDetails>;
    v.timer = j.at("timer").get<LolChampSelectChampSelectTimer>;
    v.myTeam = j.at("myTeam").get<std::vector<LolChampSelectChampSelectPlayerSelection>>;
    v.localPlayerCellId = j.at("localPlayerCellId").get<int64_t>;
  }

}
#endif // SWAGGER_TYPES_LolChampSelectChampSelectSession_HPP
