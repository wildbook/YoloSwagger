#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyTeamBuilderLobbyRemovedFromGameReason.hpp"
#include "LolLobbyTeamBuilderLobbyMember.hpp"
#include "LolLobbyTeamBuilderLobbyInvitation.hpp"
namespace leagueapi {
  struct LolLobbyTeamBuilderLobby_t {
    std::string chatRoomId;
    bool requiredPositionCoverageMet;
    bool showPositionExcluder;
    std::vector<LolLobbyTeamBuilderLobbyInvitation_t> invitations;
    bool isTeamBuilderManaged;
    bool autoFillEligible;
    LolLobbyTeamBuilderLobbyMember_t localMember;
    bool wasKicked;
    std::vector<int32_t> allowablePremadeSizes;
    bool showPositionSelector;
    bool premadeSizeAllowed;
    int32_t queueId;
    bool autoFillProtectedForStreaking;
    std::string invitationId;
    LolLobbyTeamBuilderLobbyRemovedFromGameReason_t removalReason;
    std::vector<std::string> specifiablePositionPreferences;
    bool autoFillProtectedForPromos;
    std::vector<LolLobbyTeamBuilderLobbyMember_t> members;
    bool canStartMatchmaking;
    std::string chatRoomKey;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderLobby_t& v) {
    j["chatRoomId"] = v.chatRoomId;
    j["requiredPositionCoverageMet"] = v.requiredPositionCoverageMet;
    j["showPositionExcluder"] = v.showPositionExcluder;
    j["invitations"] = v.invitations;
    j["isTeamBuilderManaged"] = v.isTeamBuilderManaged;
    j["autoFillEligible"] = v.autoFillEligible;
    j["localMember"] = v.localMember;
    j["wasKicked"] = v.wasKicked;
    j["allowablePremadeSizes"] = v.allowablePremadeSizes;
    j["showPositionSelector"] = v.showPositionSelector;
    j["premadeSizeAllowed"] = v.premadeSizeAllowed;
    j["queueId"] = v.queueId;
    j["autoFillProtectedForStreaking"] = v.autoFillProtectedForStreaking;
    j["invitationId"] = v.invitationId;
    j["removalReason"] = v.removalReason;
    j["specifiablePositionPreferences"] = v.specifiablePositionPreferences;
    j["autoFillProtectedForPromos"] = v.autoFillProtectedForPromos;
    j["members"] = v.members;
    j["canStartMatchmaking"] = v.canStartMatchmaking;
    j["chatRoomKey"] = v.chatRoomKey;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderLobby_t& v) {
    v.chatRoomId = j.at("chatRoomId").get<std::string>();
    v.requiredPositionCoverageMet = j.at("requiredPositionCoverageMet").get<bool>();
    v.showPositionExcluder = j.at("showPositionExcluder").get<bool>();
    v.invitations = j.at("invitations").get<std::vector<LolLobbyTeamBuilderLobbyInvitation_t>>();
    v.isTeamBuilderManaged = j.at("isTeamBuilderManaged").get<bool>();
    v.autoFillEligible = j.at("autoFillEligible").get<bool>();
    v.localMember = j.at("localMember").get<LolLobbyTeamBuilderLobbyMember_t>();
    v.wasKicked = j.at("wasKicked").get<bool>();
    v.allowablePremadeSizes = j.at("allowablePremadeSizes").get<std::vector<int32_t>>();
    v.showPositionSelector = j.at("showPositionSelector").get<bool>();
    v.premadeSizeAllowed = j.at("premadeSizeAllowed").get<bool>();
    v.queueId = j.at("queueId").get<int32_t>();
    v.autoFillProtectedForStreaking = j.at("autoFillProtectedForStreaking").get<bool>();
    v.invitationId = j.at("invitationId").get<std::string>();
    v.removalReason = j.at("removalReason").get<LolLobbyTeamBuilderLobbyRemovedFromGameReason_t>();
    v.specifiablePositionPreferences = j.at("specifiablePositionPreferences").get<std::vector<std::string>>();
    v.autoFillProtectedForPromos = j.at("autoFillProtectedForPromos").get<bool>();
    v.members = j.at("members").get<std::vector<LolLobbyTeamBuilderLobbyMember_t>>();
    v.canStartMatchmaking = j.at("canStartMatchmaking").get<bool>();
    v.chatRoomKey = j.at("chatRoomKey").get<std::string>();
  }
  inline std::string to_string(const LolLobbyTeamBuilderLobby_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
