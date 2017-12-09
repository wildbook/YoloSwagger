#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyTeamBuilderLobbyInvitation.hpp"
#include "LolLobbyTeamBuilderLobbyRemovedFromGameReason.hpp"
#include "LolLobbyTeamBuilderLobbyMember.hpp"
namespace leagueapi {
  struct LolLobbyTeamBuilderLobby_t {
    std::vector<int32_t> allowablePremadeSizes;
    std::string invitationId;
    int32_t queueId;
    std::vector<LolLobbyTeamBuilderLobbyInvitation_t> invitations;
    bool autoFillProtectedForPromos;
    bool isTeamBuilderManaged;
    bool showPositionExcluder;
    std::string chatRoomKey;
    LolLobbyTeamBuilderLobbyMember_t localMember;
    bool autoFillProtectedForStreaking;
    std::vector<std::string> specifiablePositionPreferences;
    std::string chatRoomId;
    bool autoFillEligible;
    bool showPositionSelector;
    bool premadeSizeAllowed;
    LolLobbyTeamBuilderLobbyRemovedFromGameReason_t removalReason;
    bool requiredPositionCoverageMet;
    std::vector<LolLobbyTeamBuilderLobbyMember_t> members;
    bool canStartMatchmaking;
    bool wasKicked;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderLobby_t& v) {
    j["allowablePremadeSizes"] = v.allowablePremadeSizes;
    j["invitationId"] = v.invitationId;
    j["queueId"] = v.queueId;
    j["invitations"] = v.invitations;
    j["autoFillProtectedForPromos"] = v.autoFillProtectedForPromos;
    j["isTeamBuilderManaged"] = v.isTeamBuilderManaged;
    j["showPositionExcluder"] = v.showPositionExcluder;
    j["chatRoomKey"] = v.chatRoomKey;
    j["localMember"] = v.localMember;
    j["autoFillProtectedForStreaking"] = v.autoFillProtectedForStreaking;
    j["specifiablePositionPreferences"] = v.specifiablePositionPreferences;
    j["chatRoomId"] = v.chatRoomId;
    j["autoFillEligible"] = v.autoFillEligible;
    j["showPositionSelector"] = v.showPositionSelector;
    j["premadeSizeAllowed"] = v.premadeSizeAllowed;
    j["removalReason"] = v.removalReason;
    j["requiredPositionCoverageMet"] = v.requiredPositionCoverageMet;
    j["members"] = v.members;
    j["canStartMatchmaking"] = v.canStartMatchmaking;
    j["wasKicked"] = v.wasKicked;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderLobby_t& v) {
    v.allowablePremadeSizes = j.at("allowablePremadeSizes").get<std::vector<int32_t>>();
    v.invitationId = j.at("invitationId").get<std::string>();
    v.queueId = j.at("queueId").get<int32_t>();
    v.invitations = j.at("invitations").get<std::vector<LolLobbyTeamBuilderLobbyInvitation_t>>();
    v.autoFillProtectedForPromos = j.at("autoFillProtectedForPromos").get<bool>();
    v.isTeamBuilderManaged = j.at("isTeamBuilderManaged").get<bool>();
    v.showPositionExcluder = j.at("showPositionExcluder").get<bool>();
    v.chatRoomKey = j.at("chatRoomKey").get<std::string>();
    v.localMember = j.at("localMember").get<LolLobbyTeamBuilderLobbyMember_t>();
    v.autoFillProtectedForStreaking = j.at("autoFillProtectedForStreaking").get<bool>();
    v.specifiablePositionPreferences = j.at("specifiablePositionPreferences").get<std::vector<std::string>>();
    v.chatRoomId = j.at("chatRoomId").get<std::string>();
    v.autoFillEligible = j.at("autoFillEligible").get<bool>();
    v.showPositionSelector = j.at("showPositionSelector").get<bool>();
    v.premadeSizeAllowed = j.at("premadeSizeAllowed").get<bool>();
    v.removalReason = j.at("removalReason").get<LolLobbyTeamBuilderLobbyRemovedFromGameReason_t>();
    v.requiredPositionCoverageMet = j.at("requiredPositionCoverageMet").get<bool>();
    v.members = j.at("members").get<std::vector<LolLobbyTeamBuilderLobbyMember_t>>();
    v.canStartMatchmaking = j.at("canStartMatchmaking").get<bool>();
    v.wasKicked = j.at("wasKicked").get<bool>();
  }
  inline std::string to_string(const LolLobbyTeamBuilderLobby_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
