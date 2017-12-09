#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyTeamBuilderTradeV1.hpp"
#include "LolLobbyTeamBuilderRerollStateV1.hpp"
#include "LolLobbyTeamBuilderCellsV1.hpp"
#include "LolLobbyTeamBuilderTeamBuilderBoostInfo.hpp"
namespace leagueapi {
  struct LolLobbyTeamBuilderChampionSelectStateV1_t {
    bool allowOptingOutOfBanning;
    std::vector<nlohmann::json> actionSetList;
    std::string pickIntentClearedReason;
    std::map<std::string, nlohmann::json> ceremoniesByActionSetIndex;
    int32_t localPlayerCellId;
    int64_t currentTimeRemainingMillis;
    std::string teamChatRoomId;
    LolLobbyTeamBuilderRerollStateV1_t rerollState;
    std::vector<LolLobbyTeamBuilderTradeV1_t> trades;
    int64_t currentTotalTimeMillis;
    int32_t currentActionSetIndex;
    LolLobbyTeamBuilderTeamBuilderBoostInfo_t battleBoostState;
    bool allowSkinSelection;
    std::string subphase;
    std::string teamId;
    LolLobbyTeamBuilderCellsV1_t cells;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderChampionSelectStateV1_t& v) {
    j["allowOptingOutOfBanning"] = v.allowOptingOutOfBanning;
    j["actionSetList"] = v.actionSetList;
    j["pickIntentClearedReason"] = v.pickIntentClearedReason;
    j["ceremoniesByActionSetIndex"] = v.ceremoniesByActionSetIndex;
    j["localPlayerCellId"] = v.localPlayerCellId;
    j["currentTimeRemainingMillis"] = v.currentTimeRemainingMillis;
    j["teamChatRoomId"] = v.teamChatRoomId;
    j["rerollState"] = v.rerollState;
    j["trades"] = v.trades;
    j["currentTotalTimeMillis"] = v.currentTotalTimeMillis;
    j["currentActionSetIndex"] = v.currentActionSetIndex;
    j["battleBoostState"] = v.battleBoostState;
    j["allowSkinSelection"] = v.allowSkinSelection;
    j["subphase"] = v.subphase;
    j["teamId"] = v.teamId;
    j["cells"] = v.cells;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderChampionSelectStateV1_t& v) {
    v.allowOptingOutOfBanning = j.at("allowOptingOutOfBanning").get<bool>();
    v.actionSetList = j.at("actionSetList").get<std::vector<nlohmann::json>>();
    v.pickIntentClearedReason = j.at("pickIntentClearedReason").get<std::string>();
    v.ceremoniesByActionSetIndex = j.at("ceremoniesByActionSetIndex").get<std::map<std::string, nlohmann::json>>();
    v.localPlayerCellId = j.at("localPlayerCellId").get<int32_t>();
    v.currentTimeRemainingMillis = j.at("currentTimeRemainingMillis").get<int64_t>();
    v.teamChatRoomId = j.at("teamChatRoomId").get<std::string>();
    v.rerollState = j.at("rerollState").get<LolLobbyTeamBuilderRerollStateV1_t>();
    v.trades = j.at("trades").get<std::vector<LolLobbyTeamBuilderTradeV1_t>>();
    v.currentTotalTimeMillis = j.at("currentTotalTimeMillis").get<int64_t>();
    v.currentActionSetIndex = j.at("currentActionSetIndex").get<int32_t>();
    v.battleBoostState = j.at("battleBoostState").get<LolLobbyTeamBuilderTeamBuilderBoostInfo_t>();
    v.allowSkinSelection = j.at("allowSkinSelection").get<bool>();
    v.subphase = j.at("subphase").get<std::string>();
    v.teamId = j.at("teamId").get<std::string>();
    v.cells = j.at("cells").get<LolLobbyTeamBuilderCellsV1_t>();
  }
  inline std::string to_string(const LolLobbyTeamBuilderChampionSelectStateV1_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
