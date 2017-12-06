#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyTeamBuilderReadyStateV1.hpp"
#include "LolLobbyTeamBuilderTbLobbySlotResource.hpp"
#include "LolLobbyTeamBuilderTbLobbyBackwardsToPremadeTransitionResource.hpp"
namespace leagueapi {
  struct LolLobbyTeamBuilderTbLobbyPremadeStateResource_t {
    LolLobbyTeamBuilderReadyStateV1_t readyState;
    LolLobbyTeamBuilderTbLobbyBackwardsToPremadeTransitionResource_t backwardsToPremadeTransitionReason;
    bool showPositionSelector;
    std::string draftPremadeId;
    std::string premadeChatRoomId;
    bool autoFillProtectedForStreaking;
    std::vector<std::string> playableDraftPositions;
    int32_t localPlayerSlotId;
    int32_t captainSlotId;
    bool readyToMatchmake;
    bool autoFillProtectedForPromos;
    bool showPositionExcluder;
    int64_t timer;
    std::vector<LolLobbyTeamBuilderTbLobbySlotResource_t> draftSlots;
    bool autoFillEligible;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderTbLobbyPremadeStateResource_t& v) {
    j["readyState"] = v.readyState;
    j["backwardsToPremadeTransitionReason"] = v.backwardsToPremadeTransitionReason;
    j["showPositionSelector"] = v.showPositionSelector;
    j["draftPremadeId"] = v.draftPremadeId;
    j["premadeChatRoomId"] = v.premadeChatRoomId;
    j["autoFillProtectedForStreaking"] = v.autoFillProtectedForStreaking;
    j["playableDraftPositions"] = v.playableDraftPositions;
    j["localPlayerSlotId"] = v.localPlayerSlotId;
    j["captainSlotId"] = v.captainSlotId;
    j["readyToMatchmake"] = v.readyToMatchmake;
    j["autoFillProtectedForPromos"] = v.autoFillProtectedForPromos;
    j["showPositionExcluder"] = v.showPositionExcluder;
    j["timer"] = v.timer;
    j["draftSlots"] = v.draftSlots;
    j["autoFillEligible"] = v.autoFillEligible;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderTbLobbyPremadeStateResource_t& v) {
    v.readyState = j.at("readyState").get<LolLobbyTeamBuilderReadyStateV1_t>();
    v.backwardsToPremadeTransitionReason = j.at("backwardsToPremadeTransitionReason").get<LolLobbyTeamBuilderTbLobbyBackwardsToPremadeTransitionResource_t>();
    v.showPositionSelector = j.at("showPositionSelector").get<bool>();
    v.draftPremadeId = j.at("draftPremadeId").get<std::string>();
    v.premadeChatRoomId = j.at("premadeChatRoomId").get<std::string>();
    v.autoFillProtectedForStreaking = j.at("autoFillProtectedForStreaking").get<bool>();
    v.playableDraftPositions = j.at("playableDraftPositions").get<std::vector<std::string>>();
    v.localPlayerSlotId = j.at("localPlayerSlotId").get<int32_t>();
    v.captainSlotId = j.at("captainSlotId").get<int32_t>();
    v.readyToMatchmake = j.at("readyToMatchmake").get<bool>();
    v.autoFillProtectedForPromos = j.at("autoFillProtectedForPromos").get<bool>();
    v.showPositionExcluder = j.at("showPositionExcluder").get<bool>();
    v.timer = j.at("timer").get<int64_t>();
    v.draftSlots = j.at("draftSlots").get<std::vector<LolLobbyTeamBuilderTbLobbySlotResource_t>>();
    v.autoFillEligible = j.at("autoFillEligible").get<bool>();
  }
}
