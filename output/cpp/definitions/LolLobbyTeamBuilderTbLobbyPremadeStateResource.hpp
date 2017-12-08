#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyTeamBuilderTbLobbyBackwardsToPremadeTransitionResource.hpp"
#include "LolLobbyTeamBuilderTbLobbySlotResource.hpp"
#include "LolLobbyTeamBuilderReadyStateV1.hpp"
namespace leagueapi {
  struct LolLobbyTeamBuilderTbLobbyPremadeStateResource_t {
    int32_t localPlayerSlotId;
    LolLobbyTeamBuilderReadyStateV1_t readyState;
    std::vector<LolLobbyTeamBuilderTbLobbySlotResource_t> draftSlots;
    bool autoFillProtectedForPromos;
    bool autoFillEligible;
    int32_t captainSlotId;
    bool readyToMatchmake;
    bool autoFillProtectedForStreaking;
    bool showPositionSelector;
    bool showPositionExcluder;
    int64_t timer;
    std::string draftPremadeId;
    LolLobbyTeamBuilderTbLobbyBackwardsToPremadeTransitionResource_t backwardsToPremadeTransitionReason;
    std::string premadeChatRoomId;
    std::vector<std::string> playableDraftPositions;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderTbLobbyPremadeStateResource_t& v) {
    j["localPlayerSlotId"] = v.localPlayerSlotId;
    j["readyState"] = v.readyState;
    j["draftSlots"] = v.draftSlots;
    j["autoFillProtectedForPromos"] = v.autoFillProtectedForPromos;
    j["autoFillEligible"] = v.autoFillEligible;
    j["captainSlotId"] = v.captainSlotId;
    j["readyToMatchmake"] = v.readyToMatchmake;
    j["autoFillProtectedForStreaking"] = v.autoFillProtectedForStreaking;
    j["showPositionSelector"] = v.showPositionSelector;
    j["showPositionExcluder"] = v.showPositionExcluder;
    j["timer"] = v.timer;
    j["draftPremadeId"] = v.draftPremadeId;
    j["backwardsToPremadeTransitionReason"] = v.backwardsToPremadeTransitionReason;
    j["premadeChatRoomId"] = v.premadeChatRoomId;
    j["playableDraftPositions"] = v.playableDraftPositions;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderTbLobbyPremadeStateResource_t& v) {
    v.localPlayerSlotId = j.at("localPlayerSlotId").get<int32_t>();
    v.readyState = j.at("readyState").get<LolLobbyTeamBuilderReadyStateV1_t>();
    v.draftSlots = j.at("draftSlots").get<std::vector<LolLobbyTeamBuilderTbLobbySlotResource_t>>();
    v.autoFillProtectedForPromos = j.at("autoFillProtectedForPromos").get<bool>();
    v.autoFillEligible = j.at("autoFillEligible").get<bool>();
    v.captainSlotId = j.at("captainSlotId").get<int32_t>();
    v.readyToMatchmake = j.at("readyToMatchmake").get<bool>();
    v.autoFillProtectedForStreaking = j.at("autoFillProtectedForStreaking").get<bool>();
    v.showPositionSelector = j.at("showPositionSelector").get<bool>();
    v.showPositionExcluder = j.at("showPositionExcluder").get<bool>();
    v.timer = j.at("timer").get<int64_t>();
    v.draftPremadeId = j.at("draftPremadeId").get<std::string>();
    v.backwardsToPremadeTransitionReason = j.at("backwardsToPremadeTransitionReason").get<LolLobbyTeamBuilderTbLobbyBackwardsToPremadeTransitionResource_t>();
    v.premadeChatRoomId = j.at("premadeChatRoomId").get<std::string>();
    v.playableDraftPositions = j.at("playableDraftPositions").get<std::vector<std::string>>();
  }
  inline std::string to_string(const LolLobbyTeamBuilderTbLobbyPremadeStateResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
