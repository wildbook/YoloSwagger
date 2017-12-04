#ifndef SWAGGER_TYPES_LolLobbyLobby_HPP
#define SWAGGER_TYPES_LolLobbyLobby_HPP
#include <json.hpp>
#include "LolLobbyQueueAvailability.hpp"
#include "LolLobbyLobbyCustomGameLobby.hpp"
#include "LolLobbyLobbyInvitation.hpp"
#include "LolLobbyLobbyRemovedFromGameReason.hpp"
#include "LolLobbyLobbyMember.hpp"
namespace leagueapi {
  // 
  struct LolLobbyLobby {
    // 
    LolLobbyQueueAvailability queueAvailability;
    // 
    bool requiredPositionCoverageMet;
    // 
    bool autoFillEligible;
    // 
    std::string gameMode;
    // 
    int32_t mapId;
    // 
    std::string invitationId;
    // 
    std::vector<std::string> specifiablePositionPreferences;
    // 
    bool canStartMatchmaking;
    // 
    bool autoFillProtectedForPromos;
    // 
    LolLobbyLobbyCustomGameLobby customGameLobby;
    // 
    LolLobbyLobbyRemovedFromGameReason removalReason;
    // 
    uint32_t maximumParticipantListSize;
    // 
    bool wasKicked;
    // 
    bool premadeSizeAllowed;
    // 
    std::string chatRoomKey;
    // 
    bool autoFillProtectedForStreaking;
    // 
    bool showPositionExcluder;
    // 
    std::vector<LolLobbyLobbyInvitation> invitations;
    // 
    std::string chatRoomId;
    // 
    std::vector<LolLobbyLobbyMember> members;
    // 
    bool isCustom;
    // 
    int32_t queueId;
    // 
    std::vector<int32_t> allowablePremadeSizes;
    // 
    bool showPositionSelector;
    // 
    LolLobbyLobbyMember localMember;
    // 
    bool isTeamBuilderManaged;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyLobby& v) {
    j["queueAvailability"] = v.queueAvailability;
    j["requiredPositionCoverageMet"] = v.requiredPositionCoverageMet;
    j["autoFillEligible"] = v.autoFillEligible;
    j["gameMode"] = v.gameMode;
    j["mapId"] = v.mapId;
    j["invitationId"] = v.invitationId;
    j["specifiablePositionPreferences"] = v.specifiablePositionPreferences;
    j["canStartMatchmaking"] = v.canStartMatchmaking;
    j["autoFillProtectedForPromos"] = v.autoFillProtectedForPromos;
    j["customGameLobby"] = v.customGameLobby;
    j["removalReason"] = v.removalReason;
    j["maximumParticipantListSize"] = v.maximumParticipantListSize;
    j["wasKicked"] = v.wasKicked;
    j["premadeSizeAllowed"] = v.premadeSizeAllowed;
    j["chatRoomKey"] = v.chatRoomKey;
    j["autoFillProtectedForStreaking"] = v.autoFillProtectedForStreaking;
    j["showPositionExcluder"] = v.showPositionExcluder;
    j["invitations"] = v.invitations;
    j["chatRoomId"] = v.chatRoomId;
    j["members"] = v.members;
    j["isCustom"] = v.isCustom;
    j["queueId"] = v.queueId;
    j["allowablePremadeSizes"] = v.allowablePremadeSizes;
    j["showPositionSelector"] = v.showPositionSelector;
    j["localMember"] = v.localMember;
    j["isTeamBuilderManaged"] = v.isTeamBuilderManaged;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyLobby& v) {
    v.queueAvailability = j.at("queueAvailability").get<LolLobbyQueueAvailability>;
    v.requiredPositionCoverageMet = j.at("requiredPositionCoverageMet").get<bool>;
    v.autoFillEligible = j.at("autoFillEligible").get<bool>;
    v.gameMode = j.at("gameMode").get<std::string>;
    v.mapId = j.at("mapId").get<int32_t>;
    v.invitationId = j.at("invitationId").get<std::string>;
    v.specifiablePositionPreferences = j.at("specifiablePositionPreferences").get<std::vector<std::string>>;
    v.canStartMatchmaking = j.at("canStartMatchmaking").get<bool>;
    v.autoFillProtectedForPromos = j.at("autoFillProtectedForPromos").get<bool>;
    v.customGameLobby = j.at("customGameLobby").get<LolLobbyLobbyCustomGameLobby>;
    v.removalReason = j.at("removalReason").get<LolLobbyLobbyRemovedFromGameReason>;
    v.maximumParticipantListSize = j.at("maximumParticipantListSize").get<uint32_t>;
    v.wasKicked = j.at("wasKicked").get<bool>;
    v.premadeSizeAllowed = j.at("premadeSizeAllowed").get<bool>;
    v.chatRoomKey = j.at("chatRoomKey").get<std::string>;
    v.autoFillProtectedForStreaking = j.at("autoFillProtectedForStreaking").get<bool>;
    v.showPositionExcluder = j.at("showPositionExcluder").get<bool>;
    v.invitations = j.at("invitations").get<std::vector<LolLobbyLobbyInvitation>>;
    v.chatRoomId = j.at("chatRoomId").get<std::string>;
    v.members = j.at("members").get<std::vector<LolLobbyLobbyMember>>;
    v.isCustom = j.at("isCustom").get<bool>;
    v.queueId = j.at("queueId").get<int32_t>;
    v.allowablePremadeSizes = j.at("allowablePremadeSizes").get<std::vector<int32_t>>;
    v.showPositionSelector = j.at("showPositionSelector").get<bool>;
    v.localMember = j.at("localMember").get<LolLobbyLobbyMember>;
    v.isTeamBuilderManaged = j.at("isTeamBuilderManaged").get<bool>;
  }

}
#endif // SWAGGER_TYPES_LolLobbyLobby_HPP
