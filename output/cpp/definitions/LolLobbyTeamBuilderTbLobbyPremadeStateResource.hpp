#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyTeamBuilderTbLobbySlotResource.hpp"
#include "LolLobbyTeamBuilderTbLobbyBackwardsToPremadeTransitionResource.hpp"
#include "LolLobbyTeamBuilderReadyStateV1.hpp"
namespace leagueapi {
  struct LolLobbyTeamBuilderTbLobbyPremadeStateResource_t {
    int32_t localPlayerSlotId;
    std::string draftPremadeId;
    bool autoFillEligible;
    bool showPositionExcluder;
    int32_t captainSlotId;
    int64_t timer;
    LolLobbyTeamBuilderTbLobbyBackwardsToPremadeTransitionResource_t backwardsToPremadeTransitionReason;
    bool autoFillProtectedForStreaking;
    bool showPositionSelector;
    bool readyToMatchmake;
    LolLobbyTeamBuilderReadyStateV1_t readyState;
    bool autoFillProtectedForPromos;
    std::vector<std::string> playableDraftPositions;
    std::string premadeChatRoomId;
    std::vector<LolLobbyTeamBuilderTbLobbySlotResource_t> draftSlots;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderTbLobbyPremadeStateResource_t& v) {
    j["localPlayerSlotId"] = v.localPlayerSlotId;
    j["draftPremadeId"] = v.draftPremadeId;
    j["autoFillEligible"] = v.autoFillEligible;
    j["showPositionExcluder"] = v.showPositionExcluder;
    j["captainSlotId"] = v.captainSlotId;
    j["timer"] = v.timer;
    j["backwardsToPremadeTransitionReason"] = v.backwardsToPremadeTransitionReason;
    j["autoFillProtectedForStreaking"] = v.autoFillProtectedForStreaking;
    j["showPositionSelector"] = v.showPositionSelector;
    j["readyToMatchmake"] = v.readyToMatchmake;
    j["readyState"] = v.readyState;
    j["autoFillProtectedForPromos"] = v.autoFillProtectedForPromos;
    j["playableDraftPositions"] = v.playableDraftPositions;
    j["premadeChatRoomId"] = v.premadeChatRoomId;
    j["draftSlots"] = v.draftSlots;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderTbLobbyPremadeStateResource_t& v) {
    v.localPlayerSlotId = j.at("localPlayerSlotId").get<int32_t>();
    v.draftPremadeId = j.at("draftPremadeId").get<std::string>();
    v.autoFillEligible = j.at("autoFillEligible").get<bool>();
    v.showPositionExcluder = j.at("showPositionExcluder").get<bool>();
    v.captainSlotId = j.at("captainSlotId").get<int32_t>();
    v.timer = j.at("timer").get<int64_t>();
    v.backwardsToPremadeTransitionReason = j.at("backwardsToPremadeTransitionReason").get<LolLobbyTeamBuilderTbLobbyBackwardsToPremadeTransitionResource_t>();
    v.autoFillProtectedForStreaking = j.at("autoFillProtectedForStreaking").get<bool>();
    v.showPositionSelector = j.at("showPositionSelector").get<bool>();
    v.readyToMatchmake = j.at("readyToMatchmake").get<bool>();
    v.readyState = j.at("readyState").get<LolLobbyTeamBuilderReadyStateV1_t>();
    v.autoFillProtectedForPromos = j.at("autoFillProtectedForPromos").get<bool>();
    v.playableDraftPositions = j.at("playableDraftPositions").get<std::vector<std::string>>();
    v.premadeChatRoomId = j.at("premadeChatRoomId").get<std::string>();
    v.draftSlots = j.at("draftSlots").get<std::vector<LolLobbyTeamBuilderTbLobbySlotResource_t>>();
  }
  inline std::string to_string(const LolLobbyTeamBuilderTbLobbyPremadeStateResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
