#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyTeamBuilderLobbyRemovedFromGameReason.hpp"
#include "LolLobbyTeamBuilderLobbyInvitation.hpp"
#include "LolLobbyTeamBuilderLobbyMember.hpp"
namespace leagueapi {
  struct LolLobbyTeamBuilderLobby_t {
    std::string chatRoomId;
    LolLobbyTeamBuilderLobbyMember_t localMember;
    bool canStartMatchmaking;
    std::vector<int32_t> allowablePremadeSizes;
    std::string invitationId;
    int32_t queueId;
    std::string chatRoomKey;
    bool autoFillProtectedForPromos;
    std::vector<LolLobbyTeamBuilderLobbyMember_t> members;
    bool premadeSizeAllowed;
    bool requiredPositionCoverageMet;
    bool showPositionExcluder;
    std::vector<LolLobbyTeamBuilderLobbyInvitation_t> invitations;
    bool showPositionSelector;
    std::vector<std::string> specifiablePositionPreferences;
    bool autoFillProtectedForStreaking;
    LolLobbyTeamBuilderLobbyRemovedFromGameReason_t removalReason;
    bool wasKicked;
    bool autoFillEligible;
    bool isTeamBuilderManaged;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderLobby_t& v) {
    j["chatRoomId"] = v.chatRoomId;
    j["localMember"] = v.localMember;
    j["canStartMatchmaking"] = v.canStartMatchmaking;
    j["allowablePremadeSizes"] = v.allowablePremadeSizes;
    j["invitationId"] = v.invitationId;
    j["queueId"] = v.queueId;
    j["chatRoomKey"] = v.chatRoomKey;
    j["autoFillProtectedForPromos"] = v.autoFillProtectedForPromos;
    j["members"] = v.members;
    j["premadeSizeAllowed"] = v.premadeSizeAllowed;
    j["requiredPositionCoverageMet"] = v.requiredPositionCoverageMet;
    j["showPositionExcluder"] = v.showPositionExcluder;
    j["invitations"] = v.invitations;
    j["showPositionSelector"] = v.showPositionSelector;
    j["specifiablePositionPreferences"] = v.specifiablePositionPreferences;
    j["autoFillProtectedForStreaking"] = v.autoFillProtectedForStreaking;
    j["removalReason"] = v.removalReason;
    j["wasKicked"] = v.wasKicked;
    j["autoFillEligible"] = v.autoFillEligible;
    j["isTeamBuilderManaged"] = v.isTeamBuilderManaged;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderLobby_t& v) {
    v.chatRoomId = j.at("chatRoomId").get<std::string>();
    v.localMember = j.at("localMember").get<LolLobbyTeamBuilderLobbyMember_t>();
    v.canStartMatchmaking = j.at("canStartMatchmaking").get<bool>();
    v.allowablePremadeSizes = j.at("allowablePremadeSizes").get<std::vector<int32_t>>();
    v.invitationId = j.at("invitationId").get<std::string>();
    v.queueId = j.at("queueId").get<int32_t>();
    v.chatRoomKey = j.at("chatRoomKey").get<std::string>();
    v.autoFillProtectedForPromos = j.at("autoFillProtectedForPromos").get<bool>();
    v.members = j.at("members").get<std::vector<LolLobbyTeamBuilderLobbyMember_t>>();
    v.premadeSizeAllowed = j.at("premadeSizeAllowed").get<bool>();
    v.requiredPositionCoverageMet = j.at("requiredPositionCoverageMet").get<bool>();
    v.showPositionExcluder = j.at("showPositionExcluder").get<bool>();
    v.invitations = j.at("invitations").get<std::vector<LolLobbyTeamBuilderLobbyInvitation_t>>();
    v.showPositionSelector = j.at("showPositionSelector").get<bool>();
    v.specifiablePositionPreferences = j.at("specifiablePositionPreferences").get<std::vector<std::string>>();
    v.autoFillProtectedForStreaking = j.at("autoFillProtectedForStreaking").get<bool>();
    v.removalReason = j.at("removalReason").get<LolLobbyTeamBuilderLobbyRemovedFromGameReason_t>();
    v.wasKicked = j.at("wasKicked").get<bool>();
    v.autoFillEligible = j.at("autoFillEligible").get<bool>();
    v.isTeamBuilderManaged = j.at("isTeamBuilderManaged").get<bool>();
  }
}
