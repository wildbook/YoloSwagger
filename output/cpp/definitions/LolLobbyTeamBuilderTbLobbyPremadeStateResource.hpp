#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyTeamBuilderReadyStateV1.hpp"
#include "LolLobbyTeamBuilderTbLobbyBackwardsToPremadeTransitionResource.hpp"
#include "LolLobbyTeamBuilderTbLobbySlotResource.hpp"
namespace leagueapi {
  struct LolLobbyTeamBuilderTbLobbyPremadeStateResource_t {
    bool autoFillEligible;
    bool autoFillProtectedForPromos;
    bool autoFillProtectedForStreaking;
    LolLobbyTeamBuilderTbLobbyBackwardsToPremadeTransitionResource_t backwardsToPremadeTransitionReason;
    int32_t captainSlotId;
    std::string draftPremadeId;
    std::vector<LolLobbyTeamBuilderTbLobbySlotResource_t> draftSlots;
    int32_t localPlayerSlotId;
    std::vector<std::string> playableDraftPositions;
    std::string premadeChatRoomId;
    LolLobbyTeamBuilderReadyStateV1_t readyState;
    bool readyToMatchmake;
    bool showPositionExcluder;
    bool showPositionSelector;
    int64_t timer;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderTbLobbyPremadeStateResource_t& v) {
    j["autoFillEligible"] = v.autoFillEligible;
    j["autoFillProtectedForPromos"] = v.autoFillProtectedForPromos;
    j["autoFillProtectedForStreaking"] = v.autoFillProtectedForStreaking;
    j["backwardsToPremadeTransitionReason"] = v.backwardsToPremadeTransitionReason;
    j["captainSlotId"] = v.captainSlotId;
    j["draftPremadeId"] = v.draftPremadeId;
    j["draftSlots"] = v.draftSlots;
    j["localPlayerSlotId"] = v.localPlayerSlotId;
    j["playableDraftPositions"] = v.playableDraftPositions;
    j["premadeChatRoomId"] = v.premadeChatRoomId;
    j["readyState"] = v.readyState;
    j["readyToMatchmake"] = v.readyToMatchmake;
    j["showPositionExcluder"] = v.showPositionExcluder;
    j["showPositionSelector"] = v.showPositionSelector;
    j["timer"] = v.timer;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderTbLobbyPremadeStateResource_t& v) {
    v.autoFillEligible = j.at("autoFillEligible").get<bool>();
    v.autoFillProtectedForPromos = j.at("autoFillProtectedForPromos").get<bool>();
    v.autoFillProtectedForStreaking = j.at("autoFillProtectedForStreaking").get<bool>();
    v.backwardsToPremadeTransitionReason = j.at("backwardsToPremadeTransitionReason").get<LolLobbyTeamBuilderTbLobbyBackwardsToPremadeTransitionResource_t>();
    v.captainSlotId = j.at("captainSlotId").get<int32_t>();
    v.draftPremadeId = j.at("draftPremadeId").get<std::string>();
    v.draftSlots = j.at("draftSlots").get<std::vector<LolLobbyTeamBuilderTbLobbySlotResource_t>>();
    v.localPlayerSlotId = j.at("localPlayerSlotId").get<int32_t>();
    v.playableDraftPositions = j.at("playableDraftPositions").get<std::vector<std::string>>();
    v.premadeChatRoomId = j.at("premadeChatRoomId").get<std::string>();
    v.readyState = j.at("readyState").get<LolLobbyTeamBuilderReadyStateV1_t>();
    v.readyToMatchmake = j.at("readyToMatchmake").get<bool>();
    v.showPositionExcluder = j.at("showPositionExcluder").get<bool>();
    v.showPositionSelector = j.at("showPositionSelector").get<bool>();
    v.timer = j.at("timer").get<int64_t>();
  }
}
