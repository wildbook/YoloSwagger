#ifndef SWAGGER_TYPES_LolChampSelectChampSelectSession_HPP
#define SWAGGER_TYPES_LolChampSelectChampSelectSession_HPP
#include <json.hpp>
#include "LolChampSelectChampSelectChatRoomDetails.hpp"
#include "LolChampSelectChampSelectTradeContract.hpp"
#include "LolChampSelectChampSelectTimer.hpp"
#include "LolChampSelectChampSelectBannedChampions.hpp"
#include "LolChampSelectChampSelectPlayerSelection.hpp"
namespace leagueapi {
  // 
  struct LolChampSelectChampSelectSession {
    // 
    std::vector<nlohmann::json> actions;
    // 
    bool allowBattleBoost;
    // 
    bool allowRerolling;
    // 
    bool allowSkinSelection;
    // 
    LolChampSelectChampSelectBannedChampions bans;
    // 
    LolChampSelectChampSelectChatRoomDetails chatDetails;
    // 
    bool isSpectating;
    // 
    int64_t localPlayerCellId;
    // 
    std::vector<LolChampSelectChampSelectPlayerSelection> myTeam;
    // 
    uint32_t rerollsRemaining;
    // 
    std::vector<LolChampSelectChampSelectPlayerSelection> theirTeam;
    // 
    LolChampSelectChampSelectTimer timer;
    // 
    std::vector<LolChampSelectChampSelectTradeContract> trades;
  };

  inline void to_json(nlohmann::json& j, const LolChampSelectChampSelectSession& v) {
    j["actions"] = v.actions;
    j["allowBattleBoost"] = v.allowBattleBoost;
    j["allowRerolling"] = v.allowRerolling;
    j["allowSkinSelection"] = v.allowSkinSelection;
    j["bans"] = v.bans;
    j["chatDetails"] = v.chatDetails;
    j["isSpectating"] = v.isSpectating;
    j["localPlayerCellId"] = v.localPlayerCellId;
    j["myTeam"] = v.myTeam;
    j["rerollsRemaining"] = v.rerollsRemaining;
    j["theirTeam"] = v.theirTeam;
    j["timer"] = v.timer;
    j["trades"] = v.trades;
  }

  inline void from_json(const nlohmann::json& j, LolChampSelectChampSelectSession& v) {
    v.actions = j.at("actions").get<std::vector<nlohmann::json>>;
    v.allowBattleBoost = j.at("allowBattleBoost").get<bool>;
    v.allowRerolling = j.at("allowRerolling").get<bool>;
    v.allowSkinSelection = j.at("allowSkinSelection").get<bool>;
    v.bans = j.at("bans").get<LolChampSelectChampSelectBannedChampions>;
    v.chatDetails = j.at("chatDetails").get<LolChampSelectChampSelectChatRoomDetails>;
    v.isSpectating = j.at("isSpectating").get<bool>;
    v.localPlayerCellId = j.at("localPlayerCellId").get<int64_t>;
    v.myTeam = j.at("myTeam").get<std::vector<LolChampSelectChampSelectPlayerSelection>>;
    v.rerollsRemaining = j.at("rerollsRemaining").get<uint32_t>;
    v.theirTeam = j.at("theirTeam").get<std::vector<LolChampSelectChampSelectPlayerSelection>>;
    v.timer = j.at("timer").get<LolChampSelectChampSelectTimer>;
    v.trades = j.at("trades").get<std::vector<LolChampSelectChampSelectTradeContract>>;
  }

}
#endif // SWAGGER_TYPES_LolChampSelectChampSelectSession_HPP
