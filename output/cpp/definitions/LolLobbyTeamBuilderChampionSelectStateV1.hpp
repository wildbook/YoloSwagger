#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyTeamBuilderRerollStateV1.hpp"
#include "LolLobbyTeamBuilderTradeV1.hpp"
#include "LolLobbyTeamBuilderCellsV1.hpp"
#include "LolLobbyTeamBuilderTeamBuilderBoostInfo.hpp"
namespace leagueapi {
  struct LolLobbyTeamBuilderChampionSelectStateV1_t {
    std::vector<nlohmann::json> actionSetList;
    bool allowOptingOutOfBanning;
    bool allowSkinSelection;
    LolLobbyTeamBuilderTeamBuilderBoostInfo_t battleBoostState;
    LolLobbyTeamBuilderCellsV1_t cells;
    std::map<std::string, nlohmann::json> ceremoniesByActionSetIndex;
    int32_t currentActionSetIndex;
    int64_t currentTimeRemainingMillis;
    int64_t currentTotalTimeMillis;
    int32_t localPlayerCellId;
    std::string pickIntentClearedReason;
    LolLobbyTeamBuilderRerollStateV1_t rerollState;
    std::string subphase;
    std::string teamChatRoomId;
    std::string teamId;
    std::vector<LolLobbyTeamBuilderTradeV1_t> trades;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderChampionSelectStateV1_t& v) {
    j["actionSetList"] = v.actionSetList;
    j["allowOptingOutOfBanning"] = v.allowOptingOutOfBanning;
    j["allowSkinSelection"] = v.allowSkinSelection;
    j["battleBoostState"] = v.battleBoostState;
    j["cells"] = v.cells;
    j["ceremoniesByActionSetIndex"] = v.ceremoniesByActionSetIndex;
    j["currentActionSetIndex"] = v.currentActionSetIndex;
    j["currentTimeRemainingMillis"] = v.currentTimeRemainingMillis;
    j["currentTotalTimeMillis"] = v.currentTotalTimeMillis;
    j["localPlayerCellId"] = v.localPlayerCellId;
    j["pickIntentClearedReason"] = v.pickIntentClearedReason;
    j["rerollState"] = v.rerollState;
    j["subphase"] = v.subphase;
    j["teamChatRoomId"] = v.teamChatRoomId;
    j["teamId"] = v.teamId;
    j["trades"] = v.trades;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderChampionSelectStateV1_t& v) {
    v.actionSetList = j.at("actionSetList").get<std::vector<nlohmann::json>>();
    v.allowOptingOutOfBanning = j.at("allowOptingOutOfBanning").get<bool>();
    v.allowSkinSelection = j.at("allowSkinSelection").get<bool>();
    v.battleBoostState = j.at("battleBoostState").get<LolLobbyTeamBuilderTeamBuilderBoostInfo_t>();
    v.cells = j.at("cells").get<LolLobbyTeamBuilderCellsV1_t>();
    v.ceremoniesByActionSetIndex = j.at("ceremoniesByActionSetIndex").get<std::map<std::string, nlohmann::json>>();
    v.currentActionSetIndex = j.at("currentActionSetIndex").get<int32_t>();
    v.currentTimeRemainingMillis = j.at("currentTimeRemainingMillis").get<int64_t>();
    v.currentTotalTimeMillis = j.at("currentTotalTimeMillis").get<int64_t>();
    v.localPlayerCellId = j.at("localPlayerCellId").get<int32_t>();
    v.pickIntentClearedReason = j.at("pickIntentClearedReason").get<std::string>();
    v.rerollState = j.at("rerollState").get<LolLobbyTeamBuilderRerollStateV1_t>();
    v.subphase = j.at("subphase").get<std::string>();
    v.teamChatRoomId = j.at("teamChatRoomId").get<std::string>();
    v.teamId = j.at("teamId").get<std::string>();
    v.trades = j.at("trades").get<std::vector<LolLobbyTeamBuilderTradeV1_t>>();
  }
}
