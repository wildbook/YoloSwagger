#ifndef SWAGGER_TYPES_LolLobbyTeamBuilderTbLobbyPremadeStateResource_HPP
#define SWAGGER_TYPES_LolLobbyTeamBuilderTbLobbyPremadeStateResource_HPP
#include <json.hpp>
#include "LolLobbyTeamBuilderTbLobbyBackwardsToPremadeTransitionResource.hpp"
#include "LolLobbyTeamBuilderTbLobbySlotResource.hpp"
#include "LolLobbyTeamBuilderReadyStateV1.hpp"
namespace test {
  // 
  struct LolLobbyTeamBuilderTbLobbyPremadeStateResource {
'    // 
    bool autoFillEligible;
    // 
    bool autoFillProtectedForPromos;
    // 
    bool autoFillProtectedForStreaking;
    // 
    LolLobbyTeamBuilderTbLobbyBackwardsToPremadeTransitionResource backwardsToPremadeTransitionReason;
    // 
    int32_t captainSlotId;
    // 
    std::string draftPremadeId;
    // 
    std::vector<LolLobbyTeamBuilderTbLobbySlotResource> draftSlots;
    // 
    int32_t localPlayerSlotId;
    // 
    std::vector<std::string> playableDraftPositions;
    // 
    std::string premadeChatRoomId;
    // 
    LolLobbyTeamBuilderReadyStateV1 readyState;
    // 
    bool readyToMatchmake;
    // 
    bool showPositionExcluder;
    // 
    bool showPositionSelector;
    // 
    int64_t timer;
  };

  void to_json(nlohmann::json& j, const LolLobbyTeamBuilderTbLobbyPremadeStateResource& v) {
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

  void from_json(const nlohmann::json& j, LolLobbyTeamBuilderTbLobbyPremadeStateResource& v) {
    v.autoFillEligible = j.at("autoFillEligible").get<bool>;
    v.autoFillProtectedForPromos = j.at("autoFillProtectedForPromos").get<bool>;
    v.autoFillProtectedForStreaking = j.at("autoFillProtectedForStreaking").get<bool>;
    v.backwardsToPremadeTransitionReason = j.at("backwardsToPremadeTransitionReason").get<LolLobbyTeamBuilderTbLobbyBackwardsToPremadeTransitionResource>;
    v.captainSlotId = j.at("captainSlotId").get<int32_t>;
    v.draftPremadeId = j.at("draftPremadeId").get<std::string>;
    v.draftSlots = j.at("draftSlots").get<std::vector<LolLobbyTeamBuilderTbLobbySlotResource>>;
    v.localPlayerSlotId = j.at("localPlayerSlotId").get<int32_t>;
    v.playableDraftPositions = j.at("playableDraftPositions").get<std::vector<std::string>>;
    v.premadeChatRoomId = j.at("premadeChatRoomId").get<std::string>;
    v.readyState = j.at("readyState").get<LolLobbyTeamBuilderReadyStateV1>;
    v.readyToMatchmake = j.at("readyToMatchmake").get<bool>;
    v.showPositionExcluder = j.at("showPositionExcluder").get<bool>;
    v.showPositionSelector = j.at("showPositionSelector").get<bool>;
    v.timer = j.at("timer").get<int64_t>;
  }

}
#endif // SWAGGER_TYPES_LolLobbyTeamBuilderTbLobbyPremadeStateResource_HPP
