#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyLobbyMember.hpp"
#include "LolLobbyLobbyInvitation.hpp"
#include "LolLobbyLobbyCustomGameLobby.hpp"
#include "LolLobbyQueueAvailability.hpp"
#include "LolLobbyLobbyRemovedFromGameReason.hpp"
namespace leagueapi {
  struct LolLobbyLobby_t {
    std::string gameMode;
    LolLobbyQueueAvailability_t queueAvailability;
    bool requiredPositionCoverageMet;
    std::optional<LolLobbyLobbyCustomGameLobby_t> customGameLobby;
    int32_t mapId;
    bool autoFillEligible;
    LolLobbyLobbyMember_t localMember;
    std::vector<int32_t> allowablePremadeSizes;
    bool showPositionSelector;
    bool premadeSizeAllowed;
    int32_t queueId;
    bool wasKicked;
    std::string invitationId;
    std::vector<std::string> specifiablePositionPreferences;
    bool autoFillProtectedForPromos;
    uint32_t maximumParticipantListSize;
    bool isCustom;
    std::string chatRoomId;
    std::vector<LolLobbyLobbyInvitation_t> invitations;
    bool isTeamBuilderManaged;
    bool showPositionExcluder;
    bool autoFillProtectedForStreaking;
    LolLobbyLobbyRemovedFromGameReason_t removalReason;
    std::vector<LolLobbyLobbyMember_t> members;
    bool canStartMatchmaking;
    std::string chatRoomKey;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyLobby_t& v) {
    j["gameMode"] = v.gameMode;
    j["queueAvailability"] = v.queueAvailability;
    j["requiredPositionCoverageMet"] = v.requiredPositionCoverageMet;
    if(v.customGameLobby)
      j["customGameLobby"] = *v.customGameLobby;
    j["mapId"] = v.mapId;
    j["autoFillEligible"] = v.autoFillEligible;
    j["localMember"] = v.localMember;
    j["allowablePremadeSizes"] = v.allowablePremadeSizes;
    j["showPositionSelector"] = v.showPositionSelector;
    j["premadeSizeAllowed"] = v.premadeSizeAllowed;
    j["queueId"] = v.queueId;
    j["wasKicked"] = v.wasKicked;
    j["invitationId"] = v.invitationId;
    j["specifiablePositionPreferences"] = v.specifiablePositionPreferences;
    j["autoFillProtectedForPromos"] = v.autoFillProtectedForPromos;
    j["maximumParticipantListSize"] = v.maximumParticipantListSize;
    j["isCustom"] = v.isCustom;
    j["chatRoomId"] = v.chatRoomId;
    j["invitations"] = v.invitations;
    j["isTeamBuilderManaged"] = v.isTeamBuilderManaged;
    j["showPositionExcluder"] = v.showPositionExcluder;
    j["autoFillProtectedForStreaking"] = v.autoFillProtectedForStreaking;
    j["removalReason"] = v.removalReason;
    j["members"] = v.members;
    j["canStartMatchmaking"] = v.canStartMatchmaking;
    j["chatRoomKey"] = v.chatRoomKey;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyLobby_t& v) {
    v.gameMode = j.at("gameMode").get<std::string>();
    v.queueAvailability = j.at("queueAvailability").get<LolLobbyQueueAvailability_t>();
    v.requiredPositionCoverageMet = j.at("requiredPositionCoverageMet").get<bool>();
    if(auto it = j.find("customGameLobby"); it != j.end() && !it->is_null())
      v.customGameLobby = it->get<LolLobbyLobbyCustomGameLobby_t>();
    v.mapId = j.at("mapId").get<int32_t>();
    v.autoFillEligible = j.at("autoFillEligible").get<bool>();
    v.localMember = j.at("localMember").get<LolLobbyLobbyMember_t>();
    v.allowablePremadeSizes = j.at("allowablePremadeSizes").get<std::vector<int32_t>>();
    v.showPositionSelector = j.at("showPositionSelector").get<bool>();
    v.premadeSizeAllowed = j.at("premadeSizeAllowed").get<bool>();
    v.queueId = j.at("queueId").get<int32_t>();
    v.wasKicked = j.at("wasKicked").get<bool>();
    v.invitationId = j.at("invitationId").get<std::string>();
    v.specifiablePositionPreferences = j.at("specifiablePositionPreferences").get<std::vector<std::string>>();
    v.autoFillProtectedForPromos = j.at("autoFillProtectedForPromos").get<bool>();
    v.maximumParticipantListSize = j.at("maximumParticipantListSize").get<uint32_t>();
    v.isCustom = j.at("isCustom").get<bool>();
    v.chatRoomId = j.at("chatRoomId").get<std::string>();
    v.invitations = j.at("invitations").get<std::vector<LolLobbyLobbyInvitation_t>>();
    v.isTeamBuilderManaged = j.at("isTeamBuilderManaged").get<bool>();
    v.showPositionExcluder = j.at("showPositionExcluder").get<bool>();
    v.autoFillProtectedForStreaking = j.at("autoFillProtectedForStreaking").get<bool>();
    v.removalReason = j.at("removalReason").get<LolLobbyLobbyRemovedFromGameReason_t>();
    v.members = j.at("members").get<std::vector<LolLobbyLobbyMember_t>>();
    v.canStartMatchmaking = j.at("canStartMatchmaking").get<bool>();
    v.chatRoomKey = j.at("chatRoomKey").get<std::string>();
  }
  inline std::string to_string(const LolLobbyLobby_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
