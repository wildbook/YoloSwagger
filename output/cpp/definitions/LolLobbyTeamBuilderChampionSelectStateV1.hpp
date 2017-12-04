#ifndef SWAGGER_TYPES_LolLobbyTeamBuilderChampionSelectStateV1_HPP
#define SWAGGER_TYPES_LolLobbyTeamBuilderChampionSelectStateV1_HPP
#include <json.hpp>
#include "LolLobbyTeamBuilderTradeV1.hpp"
#include "LolLobbyTeamBuilderRerollStateV1.hpp"
#include "LolLobbyTeamBuilderTeamBuilderBoostInfo.hpp"
#include "LolLobbyTeamBuilderCellsV1.hpp"
namespace leagueapi {
  // 
  struct LolLobbyTeamBuilderChampionSelectStateV1 {
    // 
    std::string pickIntentClearedReason;
    // 
    bool allowOptingOutOfBanning;
    // 
    std::string subphase;
    // 
    std::string teamChatRoomId;
    // 
    int32_t currentActionSetIndex;
    // 
    LolLobbyTeamBuilderCellsV1 cells;
    // 
    std::vector<LolLobbyTeamBuilderTradeV1> trades;
    // 
    bool allowSkinSelection;
    // 
    int64_t currentTotalTimeMillis;
    // 
    int64_t currentTimeRemainingMillis;
    // 
    std::string teamId;
    // 
    LolLobbyTeamBuilderRerollStateV1 rerollState;
    // 
    std::vector<nlohmann::json> actionSetList;
    // 
    int32_t localPlayerCellId;
    // 
    LolLobbyTeamBuilderTeamBuilderBoostInfo battleBoostState;
    // 
    std::map<std::string, nlohmann::json> ceremoniesByActionSetIndex;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderChampionSelectStateV1& v) {
    j["pickIntentClearedReason"] = v.pickIntentClearedReason;
    j["allowOptingOutOfBanning"] = v.allowOptingOutOfBanning;
    j["subphase"] = v.subphase;
    j["teamChatRoomId"] = v.teamChatRoomId;
    j["currentActionSetIndex"] = v.currentActionSetIndex;
    j["cells"] = v.cells;
    j["trades"] = v.trades;
    j["allowSkinSelection"] = v.allowSkinSelection;
    j["currentTotalTimeMillis"] = v.currentTotalTimeMillis;
    j["currentTimeRemainingMillis"] = v.currentTimeRemainingMillis;
    j["teamId"] = v.teamId;
    j["rerollState"] = v.rerollState;
    j["actionSetList"] = v.actionSetList;
    j["localPlayerCellId"] = v.localPlayerCellId;
    j["battleBoostState"] = v.battleBoostState;
    j["ceremoniesByActionSetIndex"] = v.ceremoniesByActionSetIndex;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderChampionSelectStateV1& v) {
    v.pickIntentClearedReason = j.at("pickIntentClearedReason").get<std::string>;
    v.allowOptingOutOfBanning = j.at("allowOptingOutOfBanning").get<bool>;
    v.subphase = j.at("subphase").get<std::string>;
    v.teamChatRoomId = j.at("teamChatRoomId").get<std::string>;
    v.currentActionSetIndex = j.at("currentActionSetIndex").get<int32_t>;
    v.cells = j.at("cells").get<LolLobbyTeamBuilderCellsV1>;
    v.trades = j.at("trades").get<std::vector<LolLobbyTeamBuilderTradeV1>>;
    v.allowSkinSelection = j.at("allowSkinSelection").get<bool>;
    v.currentTotalTimeMillis = j.at("currentTotalTimeMillis").get<int64_t>;
    v.currentTimeRemainingMillis = j.at("currentTimeRemainingMillis").get<int64_t>;
    v.teamId = j.at("teamId").get<std::string>;
    v.rerollState = j.at("rerollState").get<LolLobbyTeamBuilderRerollStateV1>;
    v.actionSetList = j.at("actionSetList").get<std::vector<nlohmann::json>>;
    v.localPlayerCellId = j.at("localPlayerCellId").get<int32_t>;
    v.battleBoostState = j.at("battleBoostState").get<LolLobbyTeamBuilderTeamBuilderBoostInfo>;
    v.ceremoniesByActionSetIndex = j.at("ceremoniesByActionSetIndex").get<std::map<std::string, nlohmann::json>>;
  }

}
#endif // SWAGGER_TYPES_LolLobbyTeamBuilderChampionSelectStateV1_HPP