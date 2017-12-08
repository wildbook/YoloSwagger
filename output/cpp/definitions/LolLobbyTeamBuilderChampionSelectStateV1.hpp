#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyTeamBuilderTeamBuilderBoostInfo.hpp"
#include "LolLobbyTeamBuilderRerollStateV1.hpp"
#include "LolLobbyTeamBuilderCellsV1.hpp"
#include "LolLobbyTeamBuilderTradeV1.hpp"
namespace leagueapi {
  struct LolLobbyTeamBuilderChampionSelectStateV1_t {
    LolLobbyTeamBuilderCellsV1_t cells;
    std::vector<LolLobbyTeamBuilderTradeV1_t> trades;
    int32_t currentActionSetIndex;
    std::map<std::string, nlohmann::json> ceremoniesByActionSetIndex;
    bool allowOptingOutOfBanning;
    std::string pickIntentClearedReason;
    std::string teamId;
    int32_t localPlayerCellId;
    std::string teamChatRoomId;
    std::string subphase;
    int64_t currentTotalTimeMillis;
    LolLobbyTeamBuilderRerollStateV1_t rerollState;
    LolLobbyTeamBuilderTeamBuilderBoostInfo_t battleBoostState;
    std::vector<nlohmann::json> actionSetList;
    int64_t currentTimeRemainingMillis;
    bool allowSkinSelection;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderChampionSelectStateV1_t& v) {
    j["cells"] = v.cells;
    j["trades"] = v.trades;
    j["currentActionSetIndex"] = v.currentActionSetIndex;
    j["ceremoniesByActionSetIndex"] = v.ceremoniesByActionSetIndex;
    j["allowOptingOutOfBanning"] = v.allowOptingOutOfBanning;
    j["pickIntentClearedReason"] = v.pickIntentClearedReason;
    j["teamId"] = v.teamId;
    j["localPlayerCellId"] = v.localPlayerCellId;
    j["teamChatRoomId"] = v.teamChatRoomId;
    j["subphase"] = v.subphase;
    j["currentTotalTimeMillis"] = v.currentTotalTimeMillis;
    j["rerollState"] = v.rerollState;
    j["battleBoostState"] = v.battleBoostState;
    j["actionSetList"] = v.actionSetList;
    j["currentTimeRemainingMillis"] = v.currentTimeRemainingMillis;
    j["allowSkinSelection"] = v.allowSkinSelection;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderChampionSelectStateV1_t& v) {
    v.cells = j.at("cells").get<LolLobbyTeamBuilderCellsV1_t>();
    v.trades = j.at("trades").get<std::vector<LolLobbyTeamBuilderTradeV1_t>>();
    v.currentActionSetIndex = j.at("currentActionSetIndex").get<int32_t>();
    v.ceremoniesByActionSetIndex = j.at("ceremoniesByActionSetIndex").get<std::map<std::string, nlohmann::json>>();
    v.allowOptingOutOfBanning = j.at("allowOptingOutOfBanning").get<bool>();
    v.pickIntentClearedReason = j.at("pickIntentClearedReason").get<std::string>();
    v.teamId = j.at("teamId").get<std::string>();
    v.localPlayerCellId = j.at("localPlayerCellId").get<int32_t>();
    v.teamChatRoomId = j.at("teamChatRoomId").get<std::string>();
    v.subphase = j.at("subphase").get<std::string>();
    v.currentTotalTimeMillis = j.at("currentTotalTimeMillis").get<int64_t>();
    v.rerollState = j.at("rerollState").get<LolLobbyTeamBuilderRerollStateV1_t>();
    v.battleBoostState = j.at("battleBoostState").get<LolLobbyTeamBuilderTeamBuilderBoostInfo_t>();
    v.actionSetList = j.at("actionSetList").get<std::vector<nlohmann::json>>();
    v.currentTimeRemainingMillis = j.at("currentTimeRemainingMillis").get<int64_t>();
    v.allowSkinSelection = j.at("allowSkinSelection").get<bool>();
  }
  inline std::string to_string(const LolLobbyTeamBuilderChampionSelectStateV1_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
