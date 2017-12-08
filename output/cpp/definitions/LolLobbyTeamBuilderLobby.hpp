#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyTeamBuilderLobbyRemovedFromGameReason.hpp"
#include "LolLobbyTeamBuilderLobbyMember.hpp"
#include "LolLobbyTeamBuilderLobbyInvitation.hpp"
namespace leagueapi {
  struct LolLobbyTeamBuilderLobby_t {
    bool_t wasKicked;
    int32_t_t queueId;
    bool_t premadeSizeAllowed;
    bool_t requiredPositionCoverageMet;
    bool_t autoFillProtectedForPromos;
    std::vector<int32_t> allowablePremadeSizes;
    bool_t autoFillEligible;
    std::string_t chatRoomKey;
    bool_t autoFillProtectedForStreaking;
    std::string_t invitationId;
    bool_t showPositionExcluder;
    std::vector<LolLobbyTeamBuilderLobbyInvitation_t> invitations;
    LolLobbyTeamBuilderLobbyRemovedFromGameReason_t removalReason;
    std::string_t chatRoomId;
    std::vector<LolLobbyTeamBuilderLobbyMember_t> members;
    bool_t showPositionSelector;
    LolLobbyTeamBuilderLobbyMember_t localMember;
    bool_t isTeamBuilderManaged;
    std::vector<std::string> specifiablePositionPreferences;
    bool_t canStartMatchmaking;
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
    v.wasKicked = j.at("wasKicked").get<bool_t>();
    v.queueId = j.at("queueId").get<int32_t_t>();
    v.premadeSizeAllowed = j.at("premadeSizeAllowed").get<bool_t>();
    v.requiredPositionCoverageMet = j.at("requiredPositionCoverageMet").get<bool_t>();
    v.autoFillProtectedForPromos = j.at("autoFillProtectedForPromos").get<bool_t>();
    v.allowablePremadeSizes = j.at("allowablePremadeSizes").get<std::vector<int32_t>>();
    v.autoFillEligible = j.at("autoFillEligible").get<bool_t>();
    v.chatRoomKey = j.at("chatRoomKey").get<std::string_t>();
    v.autoFillProtectedForStreaking = j.at("autoFillProtectedForStreaking").get<bool_t>();
    v.invitationId = j.at("invitationId").get<std::string_t>();
    v.showPositionExcluder = j.at("showPositionExcluder").get<bool_t>();
    v.invitations = j.at("invitations").get<std::vector<LolLobbyTeamBuilderLobbyInvitation_t>>();
    v.removalReason = j.at("removalReason").get<LolLobbyTeamBuilderLobbyRemovedFromGameReason_t>();
    v.chatRoomId = j.at("chatRoomId").get<std::string_t>();
    v.members = j.at("members").get<std::vector<LolLobbyTeamBuilderLobbyMember_t>>();
    v.showPositionSelector = j.at("showPositionSelector").get<bool_t>();
    v.localMember = j.at("localMember").get<LolLobbyTeamBuilderLobbyMember_t>();
    v.isTeamBuilderManaged = j.at("isTeamBuilderManaged").get<bool_t>();
    v.specifiablePositionPreferences = j.at("specifiablePositionPreferences").get<std::vector<std::string>>();
    v.canStartMatchmaking = j.at("canStartMatchmaking").get<bool_t>();
  }
  inline std::string to_string(const LolLobbyTeamBuilderLobby_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
