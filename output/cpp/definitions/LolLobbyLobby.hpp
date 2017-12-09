#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyLobbyInvitation.hpp"
#include "LolLobbyLobbyMember.hpp"
#include "LolLobbyLobbyRemovedFromGameReason.hpp"
#include "LolLobbyLobbyCustomGameLobby.hpp"
#include "LolLobbyQueueAvailability.hpp"
namespace leagueapi {
  struct LolLobbyLobby_t {
    std::vector<int32_t> allowablePremadeSizes;
    std::vector<LolLobbyLobbyInvitation_t> invitations;
    std::optional<LolLobbyLobbyCustomGameLobby_t> customGameLobby;
    bool requiredPositionCoverageMet;
    bool isTeamBuilderManaged;
    int32_t mapId;
    bool premadeSizeAllowed;
    std::string gameMode;
    bool showPositionSelector;
    int32_t queueId;
    std::vector<std::string> specifiablePositionPreferences;
    std::vector<LolLobbyLobbyMember_t> members;
    std::string invitationId;
    bool autoFillEligible;
    bool wasKicked;
    uint32_t maximumParticipantListSize;
    bool canStartMatchmaking;
    LolLobbyLobbyMember_t localMember;
    bool isCustom;
    LolLobbyLobbyRemovedFromGameReason_t removalReason;
    bool autoFillProtectedForPromos;
    LolLobbyQueueAvailability_t queueAvailability;
    std::string chatRoomId;
    std::string chatRoomKey;
    bool showPositionExcluder;
    bool autoFillProtectedForStreaking;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyLobby_t& v) {
    j["allowablePremadeSizes"] = v.allowablePremadeSizes;
    j["invitations"] = v.invitations;
    if(v.customGameLobby)
      j["customGameLobby"] = *v.customGameLobby;
    j["requiredPositionCoverageMet"] = v.requiredPositionCoverageMet;
    j["isTeamBuilderManaged"] = v.isTeamBuilderManaged;
    j["mapId"] = v.mapId;
    j["premadeSizeAllowed"] = v.premadeSizeAllowed;
    j["gameMode"] = v.gameMode;
    j["showPositionSelector"] = v.showPositionSelector;
    j["queueId"] = v.queueId;
    j["specifiablePositionPreferences"] = v.specifiablePositionPreferences;
    j["members"] = v.members;
    j["invitationId"] = v.invitationId;
    j["autoFillEligible"] = v.autoFillEligible;
    j["wasKicked"] = v.wasKicked;
    j["maximumParticipantListSize"] = v.maximumParticipantListSize;
    j["canStartMatchmaking"] = v.canStartMatchmaking;
    j["localMember"] = v.localMember;
    j["isCustom"] = v.isCustom;
    j["removalReason"] = v.removalReason;
    j["autoFillProtectedForPromos"] = v.autoFillProtectedForPromos;
    j["queueAvailability"] = v.queueAvailability;
    j["chatRoomId"] = v.chatRoomId;
    j["chatRoomKey"] = v.chatRoomKey;
    j["showPositionExcluder"] = v.showPositionExcluder;
    j["autoFillProtectedForStreaking"] = v.autoFillProtectedForStreaking;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyLobby_t& v) {
    v.allowablePremadeSizes = j.at("allowablePremadeSizes").get<std::vector<int32_t>>();
    v.invitations = j.at("invitations").get<std::vector<LolLobbyLobbyInvitation_t>>();
    if(auto it = j.find("customGameLobby"); it != j.end() && !it->is_null())
      v.customGameLobby = it->get<LolLobbyLobbyCustomGameLobby_t>();
    v.requiredPositionCoverageMet = j.at("requiredPositionCoverageMet").get<bool>();
    v.isTeamBuilderManaged = j.at("isTeamBuilderManaged").get<bool>();
    v.mapId = j.at("mapId").get<int32_t>();
    v.premadeSizeAllowed = j.at("premadeSizeAllowed").get<bool>();
    v.gameMode = j.at("gameMode").get<std::string>();
    v.showPositionSelector = j.at("showPositionSelector").get<bool>();
    v.queueId = j.at("queueId").get<int32_t>();
    v.specifiablePositionPreferences = j.at("specifiablePositionPreferences").get<std::vector<std::string>>();
    v.members = j.at("members").get<std::vector<LolLobbyLobbyMember_t>>();
    v.invitationId = j.at("invitationId").get<std::string>();
    v.autoFillEligible = j.at("autoFillEligible").get<bool>();
    v.wasKicked = j.at("wasKicked").get<bool>();
    v.maximumParticipantListSize = j.at("maximumParticipantListSize").get<uint32_t>();
    v.canStartMatchmaking = j.at("canStartMatchmaking").get<bool>();
    v.localMember = j.at("localMember").get<LolLobbyLobbyMember_t>();
    v.isCustom = j.at("isCustom").get<bool>();
    v.removalReason = j.at("removalReason").get<LolLobbyLobbyRemovedFromGameReason_t>();
    v.autoFillProtectedForPromos = j.at("autoFillProtectedForPromos").get<bool>();
    v.queueAvailability = j.at("queueAvailability").get<LolLobbyQueueAvailability_t>();
    v.chatRoomId = j.at("chatRoomId").get<std::string>();
    v.chatRoomKey = j.at("chatRoomKey").get<std::string>();
    v.showPositionExcluder = j.at("showPositionExcluder").get<bool>();
    v.autoFillProtectedForStreaking = j.at("autoFillProtectedForStreaking").get<bool>();
  }
  inline std::string to_string(const LolLobbyLobby_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
