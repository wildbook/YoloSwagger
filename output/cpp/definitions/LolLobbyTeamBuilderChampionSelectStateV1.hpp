#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyTeamBuilderTeamBuilderBoostInfo.hpp"
#include "LolLobbyTeamBuilderRerollStateV1.hpp"
#include "LolLobbyTeamBuilderCellsV1.hpp"
#include "LolLobbyTeamBuilderTradeV1.hpp"
namespace leagueapi {
  struct LolLobbyTeamBuilderChampionSelectStateV1_t {
    bool allowOptingOutOfBanning;
    std::string subphase;
    LolLobbyTeamBuilderCellsV1_t cells;
    std::vector<nlohmann::json> actionSetList;
    bool allowSkinSelection;
    LolLobbyTeamBuilderRerollStateV1_t rerollState;
    std::vector<LolLobbyTeamBuilderTradeV1_t> trades;
    std::string pickIntentClearedReason;
    int32_t localPlayerCellId;
    std::map<std::string, nlohmann::json> ceremoniesByActionSetIndex;
    int64_t currentTotalTimeMillis;
    std::string teamChatRoomId;
    int32_t currentActionSetIndex;
    int64_t currentTimeRemainingMillis;
    std::string teamId;
    LolLobbyTeamBuilderTeamBuilderBoostInfo_t battleBoostState;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderChampionSelectStateV1_t& v) {
    j["allowOptingOutOfBanning"] = v.allowOptingOutOfBanning;
    j["subphase"] = v.subphase;
    j["cells"] = v.cells;
    j["actionSetList"] = v.actionSetList;
    j["allowSkinSelection"] = v.allowSkinSelection;
    j["rerollState"] = v.rerollState;
    j["trades"] = v.trades;
    j["pickIntentClearedReason"] = v.pickIntentClearedReason;
    j["localPlayerCellId"] = v.localPlayerCellId;
    j["ceremoniesByActionSetIndex"] = v.ceremoniesByActionSetIndex;
    j["currentTotalTimeMillis"] = v.currentTotalTimeMillis;
    j["teamChatRoomId"] = v.teamChatRoomId;
    j["currentActionSetIndex"] = v.currentActionSetIndex;
    j["currentTimeRemainingMillis"] = v.currentTimeRemainingMillis;
    j["teamId"] = v.teamId;
    j["battleBoostState"] = v.battleBoostState;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderChampionSelectStateV1_t& v) {
    v.allowOptingOutOfBanning = j.at("allowOptingOutOfBanning").get<bool>();
    v.subphase = j.at("subphase").get<std::string>();
    v.cells = j.at("cells").get<LolLobbyTeamBuilderCellsV1_t>();
    v.actionSetList = j.at("actionSetList").get<std::vector<nlohmann::json>>();
    v.allowSkinSelection = j.at("allowSkinSelection").get<bool>();
    v.rerollState = j.at("rerollState").get<LolLobbyTeamBuilderRerollStateV1_t>();
    v.trades = j.at("trades").get<std::vector<LolLobbyTeamBuilderTradeV1_t>>();
    v.pickIntentClearedReason = j.at("pickIntentClearedReason").get<std::string>();
    v.localPlayerCellId = j.at("localPlayerCellId").get<int32_t>();
    v.ceremoniesByActionSetIndex = j.at("ceremoniesByActionSetIndex").get<std::map<std::string, nlohmann::json>>();
    v.currentTotalTimeMillis = j.at("currentTotalTimeMillis").get<int64_t>();
    v.teamChatRoomId = j.at("teamChatRoomId").get<std::string>();
    v.currentActionSetIndex = j.at("currentActionSetIndex").get<int32_t>();
    v.currentTimeRemainingMillis = j.at("currentTimeRemainingMillis").get<int64_t>();
    v.teamId = j.at("teamId").get<std::string>();
    v.battleBoostState = j.at("battleBoostState").get<LolLobbyTeamBuilderTeamBuilderBoostInfo_t>();
  }
}
