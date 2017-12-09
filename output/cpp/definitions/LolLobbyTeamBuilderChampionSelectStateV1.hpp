#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyTeamBuilderCellsV1.hpp"
#include "LolLobbyTeamBuilderRerollStateV1.hpp"
#include "LolLobbyTeamBuilderTradeV1.hpp"
#include "LolLobbyTeamBuilderTeamBuilderBoostInfo.hpp"
namespace leagueapi {
  struct LolLobbyTeamBuilderChampionSelectStateV1_t {
    std::string teamId;
    LolLobbyTeamBuilderCellsV1_t cells;
    bool allowSkinSelection;
    int32_t localPlayerCellId;
    int64_t currentTotalTimeMillis;
    std::string pickIntentClearedReason;
    std::vector<nlohmann::json> actionSetList;
    std::string subphase;
    std::vector<LolLobbyTeamBuilderTradeV1_t> trades;
    int32_t currentActionSetIndex;
    int64_t currentTimeRemainingMillis;
    bool allowOptingOutOfBanning;
    std::string teamChatRoomId;
    std::map<std::string, nlohmann::json> ceremoniesByActionSetIndex;
    LolLobbyTeamBuilderTeamBuilderBoostInfo_t battleBoostState;
    LolLobbyTeamBuilderRerollStateV1_t rerollState;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderChampionSelectStateV1_t& v) {
    j["teamId"] = v.teamId;
    j["cells"] = v.cells;
    j["allowSkinSelection"] = v.allowSkinSelection;
    j["localPlayerCellId"] = v.localPlayerCellId;
    j["currentTotalTimeMillis"] = v.currentTotalTimeMillis;
    j["pickIntentClearedReason"] = v.pickIntentClearedReason;
    j["actionSetList"] = v.actionSetList;
    j["subphase"] = v.subphase;
    j["trades"] = v.trades;
    j["currentActionSetIndex"] = v.currentActionSetIndex;
    j["currentTimeRemainingMillis"] = v.currentTimeRemainingMillis;
    j["allowOptingOutOfBanning"] = v.allowOptingOutOfBanning;
    j["teamChatRoomId"] = v.teamChatRoomId;
    j["ceremoniesByActionSetIndex"] = v.ceremoniesByActionSetIndex;
    j["battleBoostState"] = v.battleBoostState;
    j["rerollState"] = v.rerollState;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderChampionSelectStateV1_t& v) {
    v.teamId = j.at("teamId").get<std::string>();
    v.cells = j.at("cells").get<LolLobbyTeamBuilderCellsV1_t>();
    v.allowSkinSelection = j.at("allowSkinSelection").get<bool>();
    v.localPlayerCellId = j.at("localPlayerCellId").get<int32_t>();
    v.currentTotalTimeMillis = j.at("currentTotalTimeMillis").get<int64_t>();
    v.pickIntentClearedReason = j.at("pickIntentClearedReason").get<std::string>();
    v.actionSetList = j.at("actionSetList").get<std::vector<nlohmann::json>>();
    v.subphase = j.at("subphase").get<std::string>();
    v.trades = j.at("trades").get<std::vector<LolLobbyTeamBuilderTradeV1_t>>();
    v.currentActionSetIndex = j.at("currentActionSetIndex").get<int32_t>();
    v.currentTimeRemainingMillis = j.at("currentTimeRemainingMillis").get<int64_t>();
    v.allowOptingOutOfBanning = j.at("allowOptingOutOfBanning").get<bool>();
    v.teamChatRoomId = j.at("teamChatRoomId").get<std::string>();
    v.ceremoniesByActionSetIndex = j.at("ceremoniesByActionSetIndex").get<std::map<std::string, nlohmann::json>>();
    v.battleBoostState = j.at("battleBoostState").get<LolLobbyTeamBuilderTeamBuilderBoostInfo_t>();
    v.rerollState = j.at("rerollState").get<LolLobbyTeamBuilderRerollStateV1_t>();
  }
  inline std::string to_string(const LolLobbyTeamBuilderChampionSelectStateV1_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
