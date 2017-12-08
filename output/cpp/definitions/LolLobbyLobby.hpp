#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyQueueAvailability.hpp"
#include "LolLobbyLobbyCustomGameLobby.hpp"
#include "LolLobbyLobbyInvitation.hpp"
#include "LolLobbyLobbyRemovedFromGameReason.hpp"
#include "LolLobbyLobbyMember.hpp"
namespace leagueapi {
  struct LolLobbyLobby_t {
    LolLobbyQueueAvailability_t queueAvailability;
    bool_t requiredPositionCoverageMet;
    bool_t autoFillEligible;
    std::string_t gameMode;
    int32_t_t mapId;
    std::string_t invitationId;
    std::vector<std::string> specifiablePositionPreferences;
    bool_t canStartMatchmaking;
    bool_t autoFillProtectedForPromos;
    std::optional<LolLobbyLobbyCustomGameLobby_t> customGameLobby;
    LolLobbyLobbyRemovedFromGameReason_t removalReason;
    uint32_t_t maximumParticipantListSize;
    bool_t wasKicked;
    bool_t premadeSizeAllowed;
    std::string_t chatRoomKey;
    bool_t autoFillProtectedForStreaking;
    bool_t showPositionExcluder;
    std::vector<LolLobbyLobbyInvitation_t> invitations;
    std::string_t chatRoomId;
    std::vector<LolLobbyLobbyMember_t> members;
    bool_t isCustom;
    int32_t_t queueId;
    std::vector<int32_t> allowablePremadeSizes;
    bool_t showPositionSelector;
    LolLobbyLobbyMember_t localMember;
    bool_t isTeamBuilderManaged;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyLobby_t& v) {
    j["queueAvailability"] = v.queueAvailability;
    j["requiredPositionCoverageMet"] = v.requiredPositionCoverageMet;
    j["autoFillEligible"] = v.autoFillEligible;
    j["gameMode"] = v.gameMode;
    j["mapId"] = v.mapId;
    j["invitationId"] = v.invitationId;
    j["specifiablePositionPreferences"] = v.specifiablePositionPreferences;
    j["canStartMatchmaking"] = v.canStartMatchmaking;
    j["autoFillProtectedForPromos"] = v.autoFillProtectedForPromos;
    if(v.customGameLobby)
      j["customGameLobby"] = *v.customGameLobby;
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

  inline void from_json(const nlohmann::json& j, LolLobbyLobby_t& v) {
    v.queueAvailability = j.at("queueAvailability").get<LolLobbyQueueAvailability_t>();
    v.requiredPositionCoverageMet = j.at("requiredPositionCoverageMet").get<bool_t>();
    v.autoFillEligible = j.at("autoFillEligible").get<bool_t>();
    v.gameMode = j.at("gameMode").get<std::string_t>();
    v.mapId = j.at("mapId").get<int32_t_t>();
    v.invitationId = j.at("invitationId").get<std::string_t>();
    v.specifiablePositionPreferences = j.at("specifiablePositionPreferences").get<std::vector<std::string>>();
    v.canStartMatchmaking = j.at("canStartMatchmaking").get<bool_t>();
    v.autoFillProtectedForPromos = j.at("autoFillProtectedForPromos").get<bool_t>();
    if(auto it = j.find("customGameLobby"); it != j.end() && !it->is_null())
      v.customGameLobby = it->get<LolLobbyLobbyCustomGameLobby_t>();
    v.removalReason = j.at("removalReason").get<LolLobbyLobbyRemovedFromGameReason_t>();
    v.maximumParticipantListSize = j.at("maximumParticipantListSize").get<uint32_t_t>();
    v.wasKicked = j.at("wasKicked").get<bool_t>();
    v.premadeSizeAllowed = j.at("premadeSizeAllowed").get<bool_t>();
    v.chatRoomKey = j.at("chatRoomKey").get<std::string_t>();
    v.autoFillProtectedForStreaking = j.at("autoFillProtectedForStreaking").get<bool_t>();
    v.showPositionExcluder = j.at("showPositionExcluder").get<bool_t>();
    v.invitations = j.at("invitations").get<std::vector<LolLobbyLobbyInvitation_t>>();
    v.chatRoomId = j.at("chatRoomId").get<std::string_t>();
    v.members = j.at("members").get<std::vector<LolLobbyLobbyMember_t>>();
    v.isCustom = j.at("isCustom").get<bool_t>();
    v.queueId = j.at("queueId").get<int32_t_t>();
    v.allowablePremadeSizes = j.at("allowablePremadeSizes").get<std::vector<int32_t>>();
    v.showPositionSelector = j.at("showPositionSelector").get<bool_t>();
    v.localMember = j.at("localMember").get<LolLobbyLobbyMember_t>();
    v.isTeamBuilderManaged = j.at("isTeamBuilderManaged").get<bool_t>();
  }
  inline std::string to_string(const LolLobbyLobby_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
