#ifndef SWAGGER_TYPES_LolLobbyTeamBuilderLobby_HPP
#define SWAGGER_TYPES_LolLobbyTeamBuilderLobby_HPP
#include <json.hpp>
#include "LolLobbyTeamBuilderLobbyMember.hpp"
#include "LolLobbyTeamBuilderLobbyRemovedFromGameReason.hpp"
#include "LolLobbyTeamBuilderLobbyInvitation.hpp"
namespace test {
  // 
  struct LolLobbyTeamBuilderLobby {
'    // 
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
    std::string invitationId;
    // 
    std::vector<LolLobbyTeamBuilderLobbyInvitation> invitations;
    // 
    bool isTeamBuilderManaged;
    // 
    LolLobbyTeamBuilderLobbyMember localMember;
    // 
    std::vector<LolLobbyTeamBuilderLobbyMember> members;
    // 
    bool premadeSizeAllowed;
    // 
    int32_t queueId;
    // 
    LolLobbyTeamBuilderLobbyRemovedFromGameReason removalReason;
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

  void to_json(nlohmann::json& j, const LolLobbyTeamBuilderLobby& v) {
    j["allowablePremadeSizes"] = v.allowablePremadeSizes;
    j["autoFillEligible"] = v.autoFillEligible;
    j["autoFillProtectedForPromos"] = v.autoFillProtectedForPromos;
    j["autoFillProtectedForStreaking"] = v.autoFillProtectedForStreaking;
    j["canStartMatchmaking"] = v.canStartMatchmaking;
    j["chatRoomId"] = v.chatRoomId;
    j["chatRoomKey"] = v.chatRoomKey;
    j["invitationId"] = v.invitationId;
    j["invitations"] = v.invitations;
    j["isTeamBuilderManaged"] = v.isTeamBuilderManaged;
    j["localMember"] = v.localMember;
    j["members"] = v.members;
    j["premadeSizeAllowed"] = v.premadeSizeAllowed;
    j["queueId"] = v.queueId;
    j["removalReason"] = v.removalReason;
    j["requiredPositionCoverageMet"] = v.requiredPositionCoverageMet;
    j["showPositionExcluder"] = v.showPositionExcluder;
    j["showPositionSelector"] = v.showPositionSelector;
    j["specifiablePositionPreferences"] = v.specifiablePositionPreferences;
    j["wasKicked"] = v.wasKicked;
  }

  void from_json(const nlohmann::json& j, LolLobbyTeamBuilderLobby& v) {
    v.allowablePremadeSizes = j.at("allowablePremadeSizes").get<std::vector<int32_t>>;
    v.autoFillEligible = j.at("autoFillEligible").get<bool>;
    v.autoFillProtectedForPromos = j.at("autoFillProtectedForPromos").get<bool>;
    v.autoFillProtectedForStreaking = j.at("autoFillProtectedForStreaking").get<bool>;
    v.canStartMatchmaking = j.at("canStartMatchmaking").get<bool>;
    v.chatRoomId = j.at("chatRoomId").get<std::string>;
    v.chatRoomKey = j.at("chatRoomKey").get<std::string>;
    v.invitationId = j.at("invitationId").get<std::string>;
    v.invitations = j.at("invitations").get<std::vector<LolLobbyTeamBuilderLobbyInvitation>>;
    v.isTeamBuilderManaged = j.at("isTeamBuilderManaged").get<bool>;
    v.localMember = j.at("localMember").get<LolLobbyTeamBuilderLobbyMember>;
    v.members = j.at("members").get<std::vector<LolLobbyTeamBuilderLobbyMember>>;
    v.premadeSizeAllowed = j.at("premadeSizeAllowed").get<bool>;
    v.queueId = j.at("queueId").get<int32_t>;
    v.removalReason = j.at("removalReason").get<LolLobbyTeamBuilderLobbyRemovedFromGameReason>;
    v.requiredPositionCoverageMet = j.at("requiredPositionCoverageMet").get<bool>;
    v.showPositionExcluder = j.at("showPositionExcluder").get<bool>;
    v.showPositionSelector = j.at("showPositionSelector").get<bool>;
    v.specifiablePositionPreferences = j.at("specifiablePositionPreferences").get<std::vector<std::string>>;
    v.wasKicked = j.at("wasKicked").get<bool>;
  }

}
#endif // SWAGGER_TYPES_LolLobbyTeamBuilderLobby_HPP
