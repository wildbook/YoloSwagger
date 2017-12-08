#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyTeamBuilderLobbyRemovedFromGameReason.hpp"
#include "LolLobbyTeamBuilderLobbyMember.hpp"
#include "LolLobbyTeamBuilderLobbyInvitation.hpp"
namespace leagueapi {
  struct LolLobbyTeamBuilderLobby_t {
    bool wasKicked;
    int32_t queueId;
    bool premadeSizeAllowed;
    bool requiredPositionCoverageMet;
    bool autoFillProtectedForPromos;
    std::vector<int32_t> allowablePremadeSizes;
    bool autoFillEligible;
    std::string chatRoomKey;
    bool autoFillProtectedForStreaking;
    std::string invitationId;
    bool showPositionExcluder;
    std::vector<LolLobbyTeamBuilderLobbyInvitation_t> invitations;
    LolLobbyTeamBuilderLobbyRemovedFromGameReason_t removalReason;
    std::string chatRoomId;
    std::vector<LolLobbyTeamBuilderLobbyMember_t> members;
    bool showPositionSelector;
    LolLobbyTeamBuilderLobbyMember_t localMember;
    bool isTeamBuilderManaged;
    std::vector<std::string> specifiablePositionPreferences;
    bool canStartMatchmaking;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderLobby_t& v) {
    j["wasKicked"] = v.wasKicked;
    j["queueId"] = v.queueId;
    j["premadeSizeAllowed"] = v.premadeSizeAllowed;
    j["requiredPositionCoverageMet"] = v.requiredPositionCoverageMet;
    j["autoFillProtectedForPromos"] = v.autoFillProtectedForPromos;
    j["allowablePremadeSizes"] = v.allowablePremadeSizes;
    j["autoFillEligible"] = v.autoFillEligible;
    j["chatRoomKey"] = v.chatRoomKey;
    j["autoFillProtectedForStreaking"] = v.autoFillProtectedForStreaking;
    j["invitationId"] = v.invitationId;
    j["showPositionExcluder"] = v.showPositionExcluder;
    j["invitations"] = v.invitations;
    j["removalReason"] = v.removalReason;
    j["chatRoomId"] = v.chatRoomId;
    j["members"] = v.members;
    j["showPositionSelector"] = v.showPositionSelector;
    j["localMember"] = v.localMember;
    j["isTeamBuilderManaged"] = v.isTeamBuilderManaged;
    j["specifiablePositionPreferences"] = v.specifiablePositionPreferences;
    j["canStartMatchmaking"] = v.canStartMatchmaking;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderLobby_t& v) {
    v.wasKicked = j.at("wasKicked").get<bool>();
    v.queueId = j.at("queueId").get<int32_t>();
    v.premadeSizeAllowed = j.at("premadeSizeAllowed").get<bool>();
    v.requiredPositionCoverageMet = j.at("requiredPositionCoverageMet").get<bool>();
    v.autoFillProtectedForPromos = j.at("autoFillProtectedForPromos").get<bool>();
    v.allowablePremadeSizes = j.at("allowablePremadeSizes").get<std::vector<int32_t>>();
    v.autoFillEligible = j.at("autoFillEligible").get<bool>();
    v.chatRoomKey = j.at("chatRoomKey").get<std::string>();
    v.autoFillProtectedForStreaking = j.at("autoFillProtectedForStreaking").get<bool>();
    v.invitationId = j.at("invitationId").get<std::string>();
    v.showPositionExcluder = j.at("showPositionExcluder").get<bool>();
    v.invitations = j.at("invitations").get<std::vector<LolLobbyTeamBuilderLobbyInvitation_t>>();
    v.removalReason = j.at("removalReason").get<LolLobbyTeamBuilderLobbyRemovedFromGameReason_t>();
    v.chatRoomId = j.at("chatRoomId").get<std::string>();
    v.members = j.at("members").get<std::vector<LolLobbyTeamBuilderLobbyMember_t>>();
    v.showPositionSelector = j.at("showPositionSelector").get<bool>();
    v.localMember = j.at("localMember").get<LolLobbyTeamBuilderLobbyMember_t>();
    v.isTeamBuilderManaged = j.at("isTeamBuilderManaged").get<bool>();
    v.specifiablePositionPreferences = j.at("specifiablePositionPreferences").get<std::vector<std::string>>();
    v.canStartMatchmaking = j.at("canStartMatchmaking").get<bool>();
  }
  inline std::string to_string(const LolLobbyTeamBuilderLobby_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
