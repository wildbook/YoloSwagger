#ifndef SWAGGER_TYPES_LolLobbyLobby_HPP
#define SWAGGER_TYPES_LolLobbyLobby_HPP
#include <json.hpp>
#include "LolLobbyLobbyRemovedFromGameReason.hpp"
#include "LolLobbyLobbyCustomGameLobby.hpp"
#include "LolLobbyQueueAvailability.hpp"
#include "LolLobbyLobbyMember.hpp"
#include "LolLobbyLobbyInvitation.hpp"
namespace leagueapi {
  // 
  struct LolLobbyLobby {
    // 
    std::vector<int32_t> allowablePremadeSizes;
    // 
    bool autoFillEligible;
    // 
    bool autoFillProtectedForPromos;
    // 
    bool autoFillProtectedForStreaking;
    // 
    bool canStartMatchmaking;
    // 
    std::string chatRoomId;
    // 
    std::string chatRoomKey;
    // 
    LolLobbyLobbyCustomGameLobby customGameLobby;
    // 
    std::string gameMode;
    // 
    std::string invitationId;
    // 
    std::vector<LolLobbyLobbyInvitation> invitations;
    // 
    bool isCustom;
    // 
    bool isTeamBuilderManaged;
    // 
    LolLobbyLobbyMember localMember;
    // 
    int32_t mapId;
    // 
    uint32_t maximumParticipantListSize;
    // 
    std::vector<LolLobbyLobbyMember> members;
    // 
    bool premadeSizeAllowed;
    // 
    LolLobbyQueueAvailability queueAvailability;
    // 
    int32_t queueId;
    // 
    LolLobbyLobbyRemovedFromGameReason removalReason;
    // 
    bool requiredPositionCoverageMet;
    // 
    bool showPositionExcluder;
    // 
    bool showPositionSelector;
    // 
    std::vector<std::string> specifiablePositionPreferences;
    // 
    bool wasKicked;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyLobby& v) {
    j["allowablePremadeSizes"] = v.allowablePremadeSizes;
    j["autoFillEligible"] = v.autoFillEligible;
    j["autoFillProtectedForPromos"] = v.autoFillProtectedForPromos;
    j["autoFillProtectedForStreaking"] = v.autoFillProtectedForStreaking;
    j["canStartMatchmaking"] = v.canStartMatchmaking;
    j["chatRoomId"] = v.chatRoomId;
    j["chatRoomKey"] = v.chatRoomKey;
    j["customGameLobby"] = v.customGameLobby;
    j["gameMode"] = v.gameMode;
    j["invitationId"] = v.invitationId;
    j["invitations"] = v.invitations;
    j["isCustom"] = v.isCustom;
    j["isTeamBuilderManaged"] = v.isTeamBuilderManaged;
    j["localMember"] = v.localMember;
    j["mapId"] = v.mapId;
    j["maximumParticipantListSize"] = v.maximumParticipantListSize;
    j["members"] = v.members;
    j["premadeSizeAllowed"] = v.premadeSizeAllowed;
    j["queueAvailability"] = v.queueAvailability;
    j["queueId"] = v.queueId;
    j["removalReason"] = v.removalReason;
    j["requiredPositionCoverageMet"] = v.requiredPositionCoverageMet;
    j["showPositionExcluder"] = v.showPositionExcluder;
    j["showPositionSelector"] = v.showPositionSelector;
    j["specifiablePositionPreferences"] = v.specifiablePositionPreferences;
    j["wasKicked"] = v.wasKicked;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyLobby& v) {
    v.allowablePremadeSizes = j.at("allowablePremadeSizes").get<std::vector<int32_t>>;
    v.autoFillEligible = j.at("autoFillEligible").get<bool>;
    v.autoFillProtectedForPromos = j.at("autoFillProtectedForPromos").get<bool>;
    v.autoFillProtectedForStreaking = j.at("autoFillProtectedForStreaking").get<bool>;
    v.canStartMatchmaking = j.at("canStartMatchmaking").get<bool>;
    v.chatRoomId = j.at("chatRoomId").get<std::string>;
    v.chatRoomKey = j.at("chatRoomKey").get<std::string>;
    v.customGameLobby = j.at("customGameLobby").get<LolLobbyLobbyCustomGameLobby>;
    v.gameMode = j.at("gameMode").get<std::string>;
    v.invitationId = j.at("invitationId").get<std::string>;
    v.invitations = j.at("invitations").get<std::vector<LolLobbyLobbyInvitation>>;
    v.isCustom = j.at("isCustom").get<bool>;
    v.isTeamBuilderManaged = j.at("isTeamBuilderManaged").get<bool>;
    v.localMember = j.at("localMember").get<LolLobbyLobbyMember>;
    v.mapId = j.at("mapId").get<int32_t>;
    v.maximumParticipantListSize = j.at("maximumParticipantListSize").get<uint32_t>;
    v.members = j.at("members").get<std::vector<LolLobbyLobbyMember>>;
    v.premadeSizeAllowed = j.at("premadeSizeAllowed").get<bool>;
    v.queueAvailability = j.at("queueAvailability").get<LolLobbyQueueAvailability>;
    v.queueId = j.at("queueId").get<int32_t>;
    v.removalReason = j.at("removalReason").get<LolLobbyLobbyRemovedFromGameReason>;
    v.requiredPositionCoverageMet = j.at("requiredPositionCoverageMet").get<bool>;
    v.showPositionExcluder = j.at("showPositionExcluder").get<bool>;
    v.showPositionSelector = j.at("showPositionSelector").get<bool>;
    v.specifiablePositionPreferences = j.at("specifiablePositionPreferences").get<std::vector<std::string>>;
    v.wasKicked = j.at("wasKicked").get<bool>;
  }

}
#endif // SWAGGER_TYPES_LolLobbyLobby_HPP
