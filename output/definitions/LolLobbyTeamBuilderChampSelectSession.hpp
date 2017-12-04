#ifndef SWAGGER_TYPES_LolLobbyTeamBuilderChampSelectSession_HPP
#define SWAGGER_TYPES_LolLobbyTeamBuilderChampSelectSession_HPP
#include <json.hpp>
#include "LolLobbyTeamBuilderChampSelectPlayerSelection.hpp"
#include "LolLobbyTeamBuilderChampSelectTradeContract.hpp"
#include "LolLobbyTeamBuilderChampSelectTimer.hpp"
#include "LolLobbyTeamBuilderChampSelectChatRoomDetails.hpp"
namespace leagueapi {
  // 
  struct LolLobbyTeamBuilderChampSelectSession {
    // 
    std::vector<nlohmann::json> actions;
    // 
    bool allowBattleBoost;
    // 
    bool allowRerolling;
    // 
    bool allowSkinSelection;
    // 
    LolLobbyTeamBuilderChampSelectChatRoomDetails chatDetails;
    // 
    int64_t localPlayerCellId;
    // 
    std::vector<LolLobbyTeamBuilderChampSelectPlayerSelection> myTeam;
    // 
    uint32_t rerollsRemaining;
    // 
    std::vector<LolLobbyTeamBuilderChampSelectPlayerSelection> theirTeam;
    // 
    LolLobbyTeamBuilderChampSelectTimer timer;
    // 
    std::vector<LolLobbyTeamBuilderChampSelectTradeContract> trades;
  };

  void to_json(nlohmann::json& j, const LolLobbyTeamBuilderChampSelectSession& v) {
    j["actions"] = v.actions;
    j["allowBattleBoost"] = v.allowBattleBoost;
    j["allowRerolling"] = v.allowRerolling;
    j["allowSkinSelection"] = v.allowSkinSelection;
    j["chatDetails"] = v.chatDetails;
    j["localPlayerCellId"] = v.localPlayerCellId;
    j["myTeam"] = v.myTeam;
    j["rerollsRemaining"] = v.rerollsRemaining;
    j["theirTeam"] = v.theirTeam;
    j["timer"] = v.timer;
    j["trades"] = v.trades;
  }

  void from_json(const nlohmann::json& j, LolLobbyTeamBuilderChampSelectSession& v) {
    v.actions = j.at("actions").get<std::vector<nlohmann::json>>;
    v.allowBattleBoost = j.at("allowBattleBoost").get<bool>;
    v.allowRerolling = j.at("allowRerolling").get<bool>;
    v.allowSkinSelection = j.at("allowSkinSelection").get<bool>;
    v.chatDetails = j.at("chatDetails").get<LolLobbyTeamBuilderChampSelectChatRoomDetails>;
    v.localPlayerCellId = j.at("localPlayerCellId").get<int64_t>;
    v.myTeam = j.at("myTeam").get<std::vector<LolLobbyTeamBuilderChampSelectPlayerSelection>>;
    v.rerollsRemaining = j.at("rerollsRemaining").get<uint32_t>;
    v.theirTeam = j.at("theirTeam").get<std::vector<LolLobbyTeamBuilderChampSelectPlayerSelection>>;
    v.timer = j.at("timer").get<LolLobbyTeamBuilderChampSelectTimer>;
    v.trades = j.at("trades").get<std::vector<LolLobbyTeamBuilderChampSelectTradeContract>>;
  }

}
#endif // SWAGGER_TYPES_LolLobbyTeamBuilderChampSelectSession_HPP
