#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyTeamBuilderReadyStateV1.hpp"
#include "LolLobbyTeamBuilderTbLobbyBackwardsToPremadeTransitionResource.hpp"
#include "LolLobbyTeamBuilderTbLobbySlotResource.hpp"
namespace leagueapi {
  struct LolLobbyTeamBuilderTbLobbyPremadeStateResource_t {
    int32_t localPlayerSlotId;
    LolLobbyTeamBuilderReadyStateV1_t readyState;
    LolLobbyTeamBuilderTbLobbyBackwardsToPremadeTransitionResource_t backwardsToPremadeTransitionReason;
    bool autoFillProtectedForPromos;
    bool showPositionExcluder;
    bool showPositionSelector;
    bool readyToMatchmake;
    int32_t captainSlotId;
    std::string premadeChatRoomId;
    std::string draftPremadeId;
    int64_t timer;
    bool autoFillProtectedForStreaking;
    bool autoFillEligible;
    std::vector<std::string> playableDraftPositions;
    std::vector<LolLobbyTeamBuilderTbLobbySlotResource_t> draftSlots;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderTbLobbyPremadeStateResource_t& v) {
    j["localPlayerSlotId"] = v.localPlayerSlotId;
    j["readyState"] = v.readyState;
    j["backwardsToPremadeTransitionReason"] = v.backwardsToPremadeTransitionReason;
    j["autoFillProtectedForPromos"] = v.autoFillProtectedForPromos;
    j["showPositionExcluder"] = v.showPositionExcluder;
    j["showPositionSelector"] = v.showPositionSelector;
    j["readyToMatchmake"] = v.readyToMatchmake;
    j["captainSlotId"] = v.captainSlotId;
    j["premadeChatRoomId"] = v.premadeChatRoomId;
    j["draftPremadeId"] = v.draftPremadeId;
    j["timer"] = v.timer;
    j["autoFillProtectedForStreaking"] = v.autoFillProtectedForStreaking;
    j["autoFillEligible"] = v.autoFillEligible;
    j["playableDraftPositions"] = v.playableDraftPositions;
    j["draftSlots"] = v.draftSlots;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderTbLobbyPremadeStateResource_t& v) {
    v.localPlayerSlotId = j.at("localPlayerSlotId").get<int32_t>();
    v.readyState = j.at("readyState").get<LolLobbyTeamBuilderReadyStateV1_t>();
    v.backwardsToPremadeTransitionReason = j.at("backwardsToPremadeTransitionReason").get<LolLobbyTeamBuilderTbLobbyBackwardsToPremadeTransitionResource_t>();
    v.autoFillProtectedForPromos = j.at("autoFillProtectedForPromos").get<bool>();
    v.showPositionExcluder = j.at("showPositionExcluder").get<bool>();
    v.showPositionSelector = j.at("showPositionSelector").get<bool>();
    v.readyToMatchmake = j.at("readyToMatchmake").get<bool>();
    v.captainSlotId = j.at("captainSlotId").get<int32_t>();
    v.premadeChatRoomId = j.at("premadeChatRoomId").get<std::string>();
    v.draftPremadeId = j.at("draftPremadeId").get<std::string>();
    v.timer = j.at("timer").get<int64_t>();
    v.autoFillProtectedForStreaking = j.at("autoFillProtectedForStreaking").get<bool>();
    v.autoFillEligible = j.at("autoFillEligible").get<bool>();
    v.playableDraftPositions = j.at("playableDraftPositions").get<std::vector<std::string>>();
    v.draftSlots = j.at("draftSlots").get<std::vector<LolLobbyTeamBuilderTbLobbySlotResource_t>>();
  }
  inline std::string to_string(const LolLobbyTeamBuilderTbLobbyPremadeStateResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
