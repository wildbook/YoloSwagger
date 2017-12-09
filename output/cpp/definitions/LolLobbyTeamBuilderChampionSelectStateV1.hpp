#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyTeamBuilderTradeV1.hpp"
#include "LolLobbyTeamBuilderCellsV1.hpp"
#include "LolLobbyTeamBuilderRerollStateV1.hpp"
#include "LolLobbyTeamBuilderTeamBuilderBoostInfo.hpp"
namespace leagueapi {
  struct LolLobbyTeamBuilderChampionSelectStateV1_t {
    bool allowOptingOutOfBanning;
    std::vector<nlohmann::json> actionSetList;
    std::string teamChatRoomId;
    LolLobbyTeamBuilderRerollStateV1_t rerollState;
    int32_t currentActionSetIndex;
    int32_t localPlayerCellId;
    LolLobbyTeamBuilderCellsV1_t cells;
    LolLobbyTeamBuilderTeamBuilderBoostInfo_t battleBoostState;
    int64_t currentTimeRemainingMillis;
    std::vector<LolLobbyTeamBuilderTradeV1_t> trades;
    int64_t currentTotalTimeMillis;
    std::map<std::string, nlohmann::json> ceremoniesByActionSetIndex;
    std::string teamId;
    std::string subphase;
    std::string pickIntentClearedReason;
    bool allowSkinSelection;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderChampionSelectStateV1_t& v) {
    j["allowOptingOutOfBanning"] = v.allowOptingOutOfBanning;
    j["actionSetList"] = v.actionSetList;
    j["teamChatRoomId"] = v.teamChatRoomId;
    j["rerollState"] = v.rerollState;
    j["currentActionSetIndex"] = v.currentActionSetIndex;
    j["localPlayerCellId"] = v.localPlayerCellId;
    j["cells"] = v.cells;
    j["battleBoostState"] = v.battleBoostState;
    j["currentTimeRemainingMillis"] = v.currentTimeRemainingMillis;
    j["trades"] = v.trades;
    j["currentTotalTimeMillis"] = v.currentTotalTimeMillis;
    j["ceremoniesByActionSetIndex"] = v.ceremoniesByActionSetIndex;
    j["teamId"] = v.teamId;
    j["subphase"] = v.subphase;
    j["pickIntentClearedReason"] = v.pickIntentClearedReason;
    j["allowSkinSelection"] = v.allowSkinSelection;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderChampionSelectStateV1_t& v) {
    v.allowOptingOutOfBanning = j.at("allowOptingOutOfBanning").get<bool>();
    v.actionSetList = j.at("actionSetList").get<std::vector<nlohmann::json>>();
    v.teamChatRoomId = j.at("teamChatRoomId").get<std::string>();
    v.rerollState = j.at("rerollState").get<LolLobbyTeamBuilderRerollStateV1_t>();
    v.currentActionSetIndex = j.at("currentActionSetIndex").get<int32_t>();
    v.localPlayerCellId = j.at("localPlayerCellId").get<int32_t>();
    v.cells = j.at("cells").get<LolLobbyTeamBuilderCellsV1_t>();
    v.battleBoostState = j.at("battleBoostState").get<LolLobbyTeamBuilderTeamBuilderBoostInfo_t>();
    v.currentTimeRemainingMillis = j.at("currentTimeRemainingMillis").get<int64_t>();
    v.trades = j.at("trades").get<std::vector<LolLobbyTeamBuilderTradeV1_t>>();
    v.currentTotalTimeMillis = j.at("currentTotalTimeMillis").get<int64_t>();
    v.ceremoniesByActionSetIndex = j.at("ceremoniesByActionSetIndex").get<std::map<std::string, nlohmann::json>>();
    v.teamId = j.at("teamId").get<std::string>();
    v.subphase = j.at("subphase").get<std::string>();
    v.pickIntentClearedReason = j.at("pickIntentClearedReason").get<std::string>();
    v.allowSkinSelection = j.at("allowSkinSelection").get<bool>();
  }
  inline std::string to_string(const LolLobbyTeamBuilderChampionSelectStateV1_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
