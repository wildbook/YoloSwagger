#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyTeamBuilderLobbyRemovedFromGameReason.hpp"
#include "LolLobbyTeamBuilderLobbyMember.hpp"
#include "LolLobbyTeamBuilderLobbyInvitation.hpp"
namespace leagueapi {
  struct LolLobbyTeamBuilderLobby_t {
    std::string chatRoomId;
    bool premadeSizeAllowed;
    LolLobbyTeamBuilderLobbyMember_t localMember;
    bool autoFillProtectedForPromos;
    std::vector<LolLobbyTeamBuilderLobbyInvitation_t> invitations;
    std::string invitationId;
    bool wasKicked;
    bool showPositionSelector;
    bool isTeamBuilderManaged;
    bool showPositionExcluder;
    bool requiredPositionCoverageMet;
    bool autoFillProtectedForStreaking;
    bool autoFillEligible;
    std::vector<std::string> specifiablePositionPreferences;
    bool canStartMatchmaking;
    std::vector<LolLobbyTeamBuilderLobbyMember_t> members;
    LolLobbyTeamBuilderLobbyRemovedFromGameReason_t removalReason;
    std::vector<int32_t> allowablePremadeSizes;
    int32_t queueId;
    std::string chatRoomKey;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderLobby_t& v) {
    j["chatRoomId"] = v.chatRoomId;
    j["premadeSizeAllowed"] = v.premadeSizeAllowed;
    j["localMember"] = v.localMember;
    j["autoFillProtectedForPromos"] = v.autoFillProtectedForPromos;
    j["invitations"] = v.invitations;
    j["invitationId"] = v.invitationId;
    j["wasKicked"] = v.wasKicked;
    j["showPositionSelector"] = v.showPositionSelector;
    j["isTeamBuilderManaged"] = v.isTeamBuilderManaged;
    j["showPositionExcluder"] = v.showPositionExcluder;
    j["requiredPositionCoverageMet"] = v.requiredPositionCoverageMet;
    j["autoFillProtectedForStreaking"] = v.autoFillProtectedForStreaking;
    j["autoFillEligible"] = v.autoFillEligible;
    j["specifiablePositionPreferences"] = v.specifiablePositionPreferences;
    j["canStartMatchmaking"] = v.canStartMatchmaking;
    j["members"] = v.members;
    j["removalReason"] = v.removalReason;
    j["allowablePremadeSizes"] = v.allowablePremadeSizes;
    j["queueId"] = v.queueId;
    j["chatRoomKey"] = v.chatRoomKey;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderLobby_t& v) {
    v.chatRoomId = j.at("chatRoomId").get<std::string>();
    v.premadeSizeAllowed = j.at("premadeSizeAllowed").get<bool>();
    v.localMember = j.at("localMember").get<LolLobbyTeamBuilderLobbyMember_t>();
    v.autoFillProtectedForPromos = j.at("autoFillProtectedForPromos").get<bool>();
    v.invitations = j.at("invitations").get<std::vector<LolLobbyTeamBuilderLobbyInvitation_t>>();
    v.invitationId = j.at("invitationId").get<std::string>();
    v.wasKicked = j.at("wasKicked").get<bool>();
    v.showPositionSelector = j.at("showPositionSelector").get<bool>();
    v.isTeamBuilderManaged = j.at("isTeamBuilderManaged").get<bool>();
    v.showPositionExcluder = j.at("showPositionExcluder").get<bool>();
    v.requiredPositionCoverageMet = j.at("requiredPositionCoverageMet").get<bool>();
    v.autoFillProtectedForStreaking = j.at("autoFillProtectedForStreaking").get<bool>();
    v.autoFillEligible = j.at("autoFillEligible").get<bool>();
    v.specifiablePositionPreferences = j.at("specifiablePositionPreferences").get<std::vector<std::string>>();
    v.canStartMatchmaking = j.at("canStartMatchmaking").get<bool>();
    v.members = j.at("members").get<std::vector<LolLobbyTeamBuilderLobbyMember_t>>();
    v.removalReason = j.at("removalReason").get<LolLobbyTeamBuilderLobbyRemovedFromGameReason_t>();
    v.allowablePremadeSizes = j.at("allowablePremadeSizes").get<std::vector<int32_t>>();
    v.queueId = j.at("queueId").get<int32_t>();
    v.chatRoomKey = j.at("chatRoomKey").get<std::string>();
  }
  inline std::string to_string(const LolLobbyTeamBuilderLobby_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
