#ifndef SWAGGER_TYPES_LolLobbyTeamBuilderChampSelectSession_HPP
#define SWAGGER_TYPES_LolLobbyTeamBuilderChampSelectSession_HPP
#include <json.hpp>
#include "LolLobbyTeamBuilderChampSelectChatRoomDetails.hpp"
#include "LolLobbyTeamBuilderChampSelectTradeContract.hpp"
#include "LolLobbyTeamBuilderChampSelectPlayerSelection.hpp"
#include "LolLobbyTeamBuilderChampSelectTimer.hpp"
namespace leagueapi {
  // 
  struct LolLobbyTeamBuilderChampSelectSession {
    // 
    std::vector<LolLobbyTeamBuilderChampSelectPlayerSelection> theirTeam;
    // 
    uint32_t rerollsRemaining;
    // 
    bool allowBattleBoost;
    // 
    std::vector<LolLobbyTeamBuilderChampSelectTradeContract> trades;
    // 
    bool allowSkinSelection;
    // 
    bool allowRerolling;
    // 
    std::vector<nlohmann::json> actions;
    // 
    LolLobbyTeamBuilderChampSelectChatRoomDetails chatDetails;
    // 
    LolLobbyTeamBuilderChampSelectTimer timer;
    // 
    std::vector<LolLobbyTeamBuilderChampSelectPlayerSelection> myTeam;
    // 
    int64_t localPlayerCellId;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderChampSelectSession& v) {
    j["theirTeam"] = v.theirTeam;
    j["rerollsRemaining"] = v.rerollsRemaining;
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

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderChampSelectSession& v) {
    v.theirTeam = j.at("theirTeam").get<std::vector<LolLobbyTeamBuilderChampSelectPlayerSelection>>;
    v.rerollsRemaining = j.at("rerollsRemaining").get<uint32_t>;
    v.allowBattleBoost = j.at("allowBattleBoost").get<bool>;
    v.trades = j.at("trades").get<std::vector<LolLobbyTeamBuilderChampSelectTradeContract>>;
    v.allowSkinSelection = j.at("allowSkinSelection").get<bool>;
    v.allowRerolling = j.at("allowRerolling").get<bool>;
    v.actions = j.at("actions").get<std::vector<nlohmann::json>>;
    v.chatDetails = j.at("chatDetails").get<LolLobbyTeamBuilderChampSelectChatRoomDetails>;
    v.timer = j.at("timer").get<LolLobbyTeamBuilderChampSelectTimer>;
    v.myTeam = j.at("myTeam").get<std::vector<LolLobbyTeamBuilderChampSelectPlayerSelection>>;
    v.localPlayerCellId = j.at("localPlayerCellId").get<int64_t>;
  }

}
#endif // SWAGGER_TYPES_LolLobbyTeamBuilderChampSelectSession_HPP
