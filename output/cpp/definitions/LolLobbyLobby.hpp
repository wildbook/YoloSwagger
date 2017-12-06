#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyLobbyRemovedFromGameReason.hpp"
#include "LolLobbyLobbyInvitation.hpp"
#include "LolLobbyLobbyCustomGameLobby.hpp"
#include "LolLobbyLobbyMember.hpp"
#include "LolLobbyQueueAvailability.hpp"
namespace leagueapi {
  struct LolLobbyLobby_t {
    std::string chatRoomId;
    LolLobbyLobbyMember_t localMember;
    bool autoFillProtectedForStreaking;
    std::string invitationId;
    std::string gameMode;
    std::vector<LolLobbyLobbyMember_t> members;
    std::optional<LolLobbyLobbyCustomGameLobby_t> customGameLobby;
    bool premadeSizeAllowed;
    bool showPositionSelector;
    LolLobbyQueueAvailability_t queueAvailability;
    LolLobbyLobbyRemovedFromGameReason_t removalReason;
    bool isTeamBuilderManaged;
    int32_t queueId;
    bool canStartMatchmaking;
    std::vector<int32_t> allowablePremadeSizes;
    bool isCustom;
    std::string chatRoomKey;
    bool autoFillProtectedForPromos;
    int32_t mapId;
    bool requiredPositionCoverageMet;
    uint32_t maximumParticipantListSize;
    std::vector<LolLobbyLobbyInvitation_t> invitations;
    std::vector<std::string> specifiablePositionPreferences;
    bool showPositionExcluder;
    bool wasKicked;
    bool autoFillEligible;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyLobby_t& v) {
    j["chatRoomId"] = v.chatRoomId;
    j["localMember"] = v.localMember;
    j["autoFillProtectedForStreaking"] = v.autoFillProtectedForStreaking;
    j["invitationId"] = v.invitationId;
    j["gameMode"] = v.gameMode;
    j["members"] = v.members;
    if(v.customGameLobby)
      j["customGameLobby"] = *v.customGameLobby;
    j["premadeSizeAllowed"] = v.premadeSizeAllowed;
    j["showPositionSelector"] = v.showPositionSelector;
    j["queueAvailability"] = v.queueAvailability;
    j["removalReason"] = v.removalReason;
    j["isTeamBuilderManaged"] = v.isTeamBuilderManaged;
    j["queueId"] = v.queueId;
    j["canStartMatchmaking"] = v.canStartMatchmaking;
    j["allowablePremadeSizes"] = v.allowablePremadeSizes;
    j["isCustom"] = v.isCustom;
    j["chatRoomKey"] = v.chatRoomKey;
    j["autoFillProtectedForPromos"] = v.autoFillProtectedForPromos;
    j["mapId"] = v.mapId;
    j["requiredPositionCoverageMet"] = v.requiredPositionCoverageMet;
    j["maximumParticipantListSize"] = v.maximumParticipantListSize;
    j["invitations"] = v.invitations;
    j["specifiablePositionPreferences"] = v.specifiablePositionPreferences;
    j["showPositionExcluder"] = v.showPositionExcluder;
    j["wasKicked"] = v.wasKicked;
    j["autoFillEligible"] = v.autoFillEligible;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyLobby_t& v) {
    v.chatRoomId = j.at("chatRoomId").get<std::string>();
    v.localMember = j.at("localMember").get<LolLobbyLobbyMember_t>();
    v.autoFillProtectedForStreaking = j.at("autoFillProtectedForStreaking").get<bool>();
    v.invitationId = j.at("invitationId").get<std::string>();
    v.gameMode = j.at("gameMode").get<std::string>();
    v.members = j.at("members").get<std::vector<LolLobbyLobbyMember_t>>();
    if(auto it = j.find("customGameLobby"); it != j.end() !it->is_null())
      v.customGameLobby = it->get<LolLobbyLobbyCustomGameLobby_t>();
    v.premadeSizeAllowed = j.at("premadeSizeAllowed").get<bool>();
    v.showPositionSelector = j.at("showPositionSelector").get<bool>();
    v.queueAvailability = j.at("queueAvailability").get<LolLobbyQueueAvailability_t>();
    v.removalReason = j.at("removalReason").get<LolLobbyLobbyRemovedFromGameReason_t>();
    v.isTeamBuilderManaged = j.at("isTeamBuilderManaged").get<bool>();
    v.queueId = j.at("queueId").get<int32_t>();
    v.canStartMatchmaking = j.at("canStartMatchmaking").get<bool>();
    v.allowablePremadeSizes = j.at("allowablePremadeSizes").get<std::vector<int32_t>>();
    v.isCustom = j.at("isCustom").get<bool>();
    v.chatRoomKey = j.at("chatRoomKey").get<std::string>();
    v.autoFillProtectedForPromos = j.at("autoFillProtectedForPromos").get<bool>();
    v.mapId = j.at("mapId").get<int32_t>();
    v.requiredPositionCoverageMet = j.at("requiredPositionCoverageMet").get<bool>();
    v.maximumParticipantListSize = j.at("maximumParticipantListSize").get<uint32_t>();
    v.invitations = j.at("invitations").get<std::vector<LolLobbyLobbyInvitation_t>>();
    v.specifiablePositionPreferences = j.at("specifiablePositionPreferences").get<std::vector<std::string>>();
    v.showPositionExcluder = j.at("showPositionExcluder").get<bool>();
    v.wasKicked = j.at("wasKicked").get<bool>();
    v.autoFillEligible = j.at("autoFillEligible").get<bool>();
  }
}
