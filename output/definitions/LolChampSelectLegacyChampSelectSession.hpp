#ifndef SWAGGER_TYPES_LolChampSelectLegacyChampSelectSession_HPP
#define SWAGGER_TYPES_LolChampSelectLegacyChampSelectSession_HPP
#include <json.hpp>
#include "LolChampSelectLegacyChampSelectBannedChampions.hpp"
#include "LolChampSelectLegacyChampSelectTimer.hpp"
#include "LolChampSelectLegacyChampSelectChatRoomDetails.hpp"
#include "LolChampSelectLegacyChampSelectTradeContract.hpp"
#include "LolChampSelectLegacyChampSelectPlayerSelection.hpp"
namespace leagueapi {
  // 
  struct LolChampSelectLegacyChampSelectSession {
    // 
    std::vector<nlohmann::json> actions;
    // 
    bool allowBattleBoost;
    // 
    bool allowRerolling;
    // 
    bool allowSkinSelection;
    // 
    LolChampSelectLegacyChampSelectBannedChampions bans;
    // 
    LolChampSelectLegacyChampSelectChatRoomDetails chatDetails;
    // 
    bool isSpectating;
    // 
    int64_t localPlayerCellId;
    // 
    std::vector<LolChampSelectLegacyChampSelectPlayerSelection> myTeam;
    // 
    uint32_t rerollsRemaining;
    // 
    std::vector<LolChampSelectLegacyChampSelectPlayerSelection> theirTeam;
    // 
    LolChampSelectLegacyChampSelectTimer timer;
    // 
    std::vector<LolChampSelectLegacyChampSelectTradeContract> trades;
  };

  inline void to_json(nlohmann::json& j, const LolChampSelectLegacyChampSelectSession& v) {
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

  inline void from_json(const nlohmann::json& j, LolChampSelectLegacyChampSelectSession& v) {
    v.actions = j.at("actions").get<std::vector<nlohmann::json>>;
    v.allowBattleBoost = j.at("allowBattleBoost").get<bool>;
    v.allowRerolling = j.at("allowRerolling").get<bool>;
    v.allowSkinSelection = j.at("allowSkinSelection").get<bool>;
    v.bans = j.at("bans").get<LolChampSelectLegacyChampSelectBannedChampions>;
    v.chatDetails = j.at("chatDetails").get<LolChampSelectLegacyChampSelectChatRoomDetails>;
    v.isSpectating = j.at("isSpectating").get<bool>;
    v.localPlayerCellId = j.at("localPlayerCellId").get<int64_t>;
    v.myTeam = j.at("myTeam").get<std::vector<LolChampSelectLegacyChampSelectPlayerSelection>>;
    v.rerollsRemaining = j.at("rerollsRemaining").get<uint32_t>;
    v.theirTeam = j.at("theirTeam").get<std::vector<LolChampSelectLegacyChampSelectPlayerSelection>>;
    v.timer = j.at("timer").get<LolChampSelectLegacyChampSelectTimer>;
    v.trades = j.at("trades").get<std::vector<LolChampSelectLegacyChampSelectTradeContract>>;
  }

}
#endif // SWAGGER_TYPES_LolChampSelectLegacyChampSelectSession_HPP
