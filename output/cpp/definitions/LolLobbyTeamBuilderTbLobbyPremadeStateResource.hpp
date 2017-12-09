#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyTeamBuilderTbLobbySlotResource.hpp"
#include "LolLobbyTeamBuilderReadyStateV1.hpp"
#include "LolLobbyTeamBuilderTbLobbyBackwardsToPremadeTransitionResource.hpp"
namespace leagueapi {
  struct LolLobbyTeamBuilderTbLobbyPremadeStateResource_t {
    bool autoFillEligible;
    int64_t timer;
    LolLobbyTeamBuilderTbLobbyBackwardsToPremadeTransitionResource_t backwardsToPremadeTransitionReason;
    LolLobbyTeamBuilderReadyStateV1_t readyState;
    std::vector<std::string> playableDraftPositions;
    std::string premadeChatRoomId;
    std::string draftPremadeId;
    bool autoFillProtectedForPromos;
    std::vector<LolLobbyTeamBuilderTbLobbySlotResource_t> draftSlots;
    int32_t localPlayerSlotId;
    bool showPositionSelector;
    bool showPositionExcluder;
    bool readyToMatchmake;
    int32_t captainSlotId;
    bool autoFillProtectedForStreaking;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderTbLobbyPremadeStateResource_t& v) {
    j["autoFillEligible"] = v.autoFillEligible;
    j["timer"] = v.timer;
    j["backwardsToPremadeTransitionReason"] = v.backwardsToPremadeTransitionReason;
    j["readyState"] = v.readyState;
    j["playableDraftPositions"] = v.playableDraftPositions;
    j["premadeChatRoomId"] = v.premadeChatRoomId;
    j["draftPremadeId"] = v.draftPremadeId;
    j["autoFillProtectedForPromos"] = v.autoFillProtectedForPromos;
    j["draftSlots"] = v.draftSlots;
    j["localPlayerSlotId"] = v.localPlayerSlotId;
    j["showPositionSelector"] = v.showPositionSelector;
    j["showPositionExcluder"] = v.showPositionExcluder;
    j["readyToMatchmake"] = v.readyToMatchmake;
    j["captainSlotId"] = v.captainSlotId;
    j["autoFillProtectedForStreaking"] = v.autoFillProtectedForStreaking;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderTbLobbyPremadeStateResource_t& v) {
    v.autoFillEligible = j.at("autoFillEligible").get<bool>();
    v.timer = j.at("timer").get<int64_t>();
    v.backwardsToPremadeTransitionReason = j.at("backwardsToPremadeTransitionReason").get<LolLobbyTeamBuilderTbLobbyBackwardsToPremadeTransitionResource_t>();
    v.readyState = j.at("readyState").get<LolLobbyTeamBuilderReadyStateV1_t>();
    v.playableDraftPositions = j.at("playableDraftPositions").get<std::vector<std::string>>();
    v.premadeChatRoomId = j.at("premadeChatRoomId").get<std::string>();
    v.draftPremadeId = j.at("draftPremadeId").get<std::string>();
    v.autoFillProtectedForPromos = j.at("autoFillProtectedForPromos").get<bool>();
    v.draftSlots = j.at("draftSlots").get<std::vector<LolLobbyTeamBuilderTbLobbySlotResource_t>>();
    v.localPlayerSlotId = j.at("localPlayerSlotId").get<int32_t>();
    v.showPositionSelector = j.at("showPositionSelector").get<bool>();
    v.showPositionExcluder = j.at("showPositionExcluder").get<bool>();
    v.readyToMatchmake = j.at("readyToMatchmake").get<bool>();
    v.captainSlotId = j.at("captainSlotId").get<int32_t>();
    v.autoFillProtectedForStreaking = j.at("autoFillProtectedForStreaking").get<bool>();
  }
  inline std::string to_string(const LolLobbyTeamBuilderTbLobbyPremadeStateResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
