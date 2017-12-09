#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyTeamBuilderLobbyInvitation.hpp"
#include "LolLobbyTeamBuilderLobbyRemovedFromGameReason.hpp"
#include "LolLobbyTeamBuilderLobbyMember.hpp"
namespace leagueapi {
  struct LolLobbyTeamBuilderLobby_t {
    bool autoFillEligible;
    std::vector<int32_t> allowablePremadeSizes;
    bool canStartMatchmaking;
    bool wasKicked;
    bool isTeamBuilderManaged;
    std::vector<LolLobbyTeamBuilderLobbyInvitation_t> invitations;
    LolLobbyTeamBuilderLobbyMember_t localMember;
    bool showPositionSelector;
    std::vector<std::string> specifiablePositionPreferences;
    LolLobbyTeamBuilderLobbyRemovedFromGameReason_t removalReason;
    int32_t queueId;
    bool autoFillProtectedForPromos;
    bool premadeSizeAllowed;
    std::vector<LolLobbyTeamBuilderLobbyMember_t> members;
    bool requiredPositionCoverageMet;
    std::string chatRoomId;
    std::string chatRoomKey;
    std::string invitationId;
    bool showPositionExcluder;
    bool autoFillProtectedForStreaking;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderLobby_t& v) {
    j["autoFillEligible"] = v.autoFillEligible;
    j["allowablePremadeSizes"] = v.allowablePremadeSizes;
    j["canStartMatchmaking"] = v.canStartMatchmaking;
    j["wasKicked"] = v.wasKicked;
    j["isTeamBuilderManaged"] = v.isTeamBuilderManaged;
    j["invitations"] = v.invitations;
    j["localMember"] = v.localMember;
    j["showPositionSelector"] = v.showPositionSelector;
    j["specifiablePositionPreferences"] = v.specifiablePositionPreferences;
    j["removalReason"] = v.removalReason;
    j["queueId"] = v.queueId;
    j["autoFillProtectedForPromos"] = v.autoFillProtectedForPromos;
    j["premadeSizeAllowed"] = v.premadeSizeAllowed;
    j["members"] = v.members;
    j["requiredPositionCoverageMet"] = v.requiredPositionCoverageMet;
    j["chatRoomId"] = v.chatRoomId;
    j["chatRoomKey"] = v.chatRoomKey;
    j["invitationId"] = v.invitationId;
    j["showPositionExcluder"] = v.showPositionExcluder;
    j["autoFillProtectedForStreaking"] = v.autoFillProtectedForStreaking;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderLobby_t& v) {
    v.autoFillEligible = j.at("autoFillEligible").get<bool>();
    v.allowablePremadeSizes = j.at("allowablePremadeSizes").get<std::vector<int32_t>>();
    v.canStartMatchmaking = j.at("canStartMatchmaking").get<bool>();
    v.wasKicked = j.at("wasKicked").get<bool>();
    v.isTeamBuilderManaged = j.at("isTeamBuilderManaged").get<bool>();
    v.invitations = j.at("invitations").get<std::vector<LolLobbyTeamBuilderLobbyInvitation_t>>();
    v.localMember = j.at("localMember").get<LolLobbyTeamBuilderLobbyMember_t>();
    v.showPositionSelector = j.at("showPositionSelector").get<bool>();
    v.specifiablePositionPreferences = j.at("specifiablePositionPreferences").get<std::vector<std::string>>();
    v.removalReason = j.at("removalReason").get<LolLobbyTeamBuilderLobbyRemovedFromGameReason_t>();
    v.queueId = j.at("queueId").get<int32_t>();
    v.autoFillProtectedForPromos = j.at("autoFillProtectedForPromos").get<bool>();
    v.premadeSizeAllowed = j.at("premadeSizeAllowed").get<bool>();
    v.members = j.at("members").get<std::vector<LolLobbyTeamBuilderLobbyMember_t>>();
    v.requiredPositionCoverageMet = j.at("requiredPositionCoverageMet").get<bool>();
    v.chatRoomId = j.at("chatRoomId").get<std::string>();
    v.chatRoomKey = j.at("chatRoomKey").get<std::string>();
    v.invitationId = j.at("invitationId").get<std::string>();
    v.showPositionExcluder = j.at("showPositionExcluder").get<bool>();
    v.autoFillProtectedForStreaking = j.at("autoFillProtectedForStreaking").get<bool>();
  }
  inline std::string to_string(const LolLobbyTeamBuilderLobby_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
