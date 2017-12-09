#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyTeamBuilderTbLobbySlotResource.hpp"
#include "LolLobbyTeamBuilderTbLobbyBackwardsToPremadeTransitionResource.hpp"
#include "LolLobbyTeamBuilderReadyStateV1.hpp"
namespace leagueapi {
  struct LolLobbyTeamBuilderTbLobbyPremadeStateResource_t {
    int32_t captainSlotId;
    int64_t timer;
    std::string premadeChatRoomId;
    std::vector<LolLobbyTeamBuilderTbLobbySlotResource_t> draftSlots;
    int32_t localPlayerSlotId;
    bool autoFillProtectedForPromos;
    bool autoFillProtectedForStreaking;
    LolLobbyTeamBuilderTbLobbyBackwardsToPremadeTransitionResource_t backwardsToPremadeTransitionReason;
    std::vector<std::string> playableDraftPositions;
    bool autoFillEligible;
    bool showPositionSelector;
    bool showPositionExcluder;
    std::string draftPremadeId;
    bool readyToMatchmake;
    LolLobbyTeamBuilderReadyStateV1_t readyState;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderTbLobbyPremadeStateResource_t& v) {
    j["captainSlotId"] = v.captainSlotId;
    j["timer"] = v.timer;
    j["premadeChatRoomId"] = v.premadeChatRoomId;
    j["draftSlots"] = v.draftSlots;
    j["localPlayerSlotId"] = v.localPlayerSlotId;
    j["autoFillProtectedForPromos"] = v.autoFillProtectedForPromos;
    j["autoFillProtectedForStreaking"] = v.autoFillProtectedForStreaking;
    j["backwardsToPremadeTransitionReason"] = v.backwardsToPremadeTransitionReason;
    j["playableDraftPositions"] = v.playableDraftPositions;
    j["autoFillEligible"] = v.autoFillEligible;
    j["showPositionSelector"] = v.showPositionSelector;
    j["showPositionExcluder"] = v.showPositionExcluder;
    j["draftPremadeId"] = v.draftPremadeId;
    j["readyToMatchmake"] = v.readyToMatchmake;
    j["readyState"] = v.readyState;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderTbLobbyPremadeStateResource_t& v) {
    v.captainSlotId = j.at("captainSlotId").get<int32_t>();
    v.timer = j.at("timer").get<int64_t>();
    v.premadeChatRoomId = j.at("premadeChatRoomId").get<std::string>();
    v.draftSlots = j.at("draftSlots").get<std::vector<LolLobbyTeamBuilderTbLobbySlotResource_t>>();
    v.localPlayerSlotId = j.at("localPlayerSlotId").get<int32_t>();
    v.autoFillProtectedForPromos = j.at("autoFillProtectedForPromos").get<bool>();
    v.autoFillProtectedForStreaking = j.at("autoFillProtectedForStreaking").get<bool>();
    v.backwardsToPremadeTransitionReason = j.at("backwardsToPremadeTransitionReason").get<LolLobbyTeamBuilderTbLobbyBackwardsToPremadeTransitionResource_t>();
    v.playableDraftPositions = j.at("playableDraftPositions").get<std::vector<std::string>>();
    v.autoFillEligible = j.at("autoFillEligible").get<bool>();
    v.showPositionSelector = j.at("showPositionSelector").get<bool>();
    v.showPositionExcluder = j.at("showPositionExcluder").get<bool>();
    v.draftPremadeId = j.at("draftPremadeId").get<std::string>();
    v.readyToMatchmake = j.at("readyToMatchmake").get<bool>();
    v.readyState = j.at("readyState").get<LolLobbyTeamBuilderReadyStateV1_t>();
  }
  inline std::string to_string(const LolLobbyTeamBuilderTbLobbyPremadeStateResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
