#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyTeamBuilderTradeV1.hpp"
#include "LolLobbyTeamBuilderRerollStateV1.hpp"
#include "LolLobbyTeamBuilderTeamBuilderBoostInfo.hpp"
#include "LolLobbyTeamBuilderCellsV1.hpp"
namespace leagueapi {
  struct LolLobbyTeamBuilderChampionSelectStateV1_t {
    std::string pickIntentClearedReason;
    bool allowOptingOutOfBanning;
    std::string subphase;
    std::string teamChatRoomId;
    int32_t currentActionSetIndex;
    LolLobbyTeamBuilderCellsV1_t cells;
    std::vector<LolLobbyTeamBuilderTradeV1_t> trades;
    bool allowSkinSelection;
    int64_t currentTotalTimeMillis;
    int64_t currentTimeRemainingMillis;
    std::string teamId;
    LolLobbyTeamBuilderRerollStateV1_t rerollState;
    std::vector<nlohmann::json> actionSetList;
    int32_t localPlayerCellId;
    LolLobbyTeamBuilderTeamBuilderBoostInfo_t battleBoostState;
    std::map<std::string, nlohmann::json> ceremoniesByActionSetIndex;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderChampionSelectStateV1_t& v) {
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

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderChampionSelectStateV1_t& v) {
    v.pickIntentClearedReason = j.at("pickIntentClearedReason").get<std::string>();
    v.allowOptingOutOfBanning = j.at("allowOptingOutOfBanning").get<bool>();
    v.subphase = j.at("subphase").get<std::string>();
    v.teamChatRoomId = j.at("teamChatRoomId").get<std::string>();
    v.currentActionSetIndex = j.at("currentActionSetIndex").get<int32_t>();
    v.cells = j.at("cells").get<LolLobbyTeamBuilderCellsV1_t>();
    v.trades = j.at("trades").get<std::vector<LolLobbyTeamBuilderTradeV1_t>>();
    v.allowSkinSelection = j.at("allowSkinSelection").get<bool>();
    v.currentTotalTimeMillis = j.at("currentTotalTimeMillis").get<int64_t>();
    v.currentTimeRemainingMillis = j.at("currentTimeRemainingMillis").get<int64_t>();
    v.teamId = j.at("teamId").get<std::string>();
    v.rerollState = j.at("rerollState").get<LolLobbyTeamBuilderRerollStateV1_t>();
    v.actionSetList = j.at("actionSetList").get<std::vector<nlohmann::json>>();
    v.localPlayerCellId = j.at("localPlayerCellId").get<int32_t>();
    v.battleBoostState = j.at("battleBoostState").get<LolLobbyTeamBuilderTeamBuilderBoostInfo_t>();
    v.ceremoniesByActionSetIndex = j.at("ceremoniesByActionSetIndex").get<std::map<std::string, nlohmann::json>>();
  }
  inline std::string to_string(const LolLobbyTeamBuilderChampionSelectStateV1_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
