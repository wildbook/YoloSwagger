#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyLobbyInvitation.hpp"
#include "LolLobbyLobbyCustomGameLobby.hpp"
#include "LolLobbyLobbyMember.hpp"
#include "LolLobbyQueueAvailability.hpp"
#include "LolLobbyLobbyRemovedFromGameReason.hpp"
namespace leagueapi {
  struct LolLobbyLobby_t {
    std::optional<LolLobbyLobbyCustomGameLobby_t> customGameLobby;
    std::vector<LolLobbyLobbyInvitation_t> invitations;
    std::string invitationId;
    bool showPositionSelector;
    bool wasKicked;
    bool isCustom;
    LolLobbyQueueAvailability_t queueAvailability;
    bool isTeamBuilderManaged;
    bool showPositionExcluder;
    bool canStartMatchmaking;
    uint32_t maximumParticipantListSize;
    LolLobbyLobbyRemovedFromGameReason_t removalReason;
    std::string chatRoomId;
    bool premadeSizeAllowed;
    LolLobbyLobbyMember_t localMember;
    bool autoFillProtectedForPromos;
    int32_t mapId;
    bool requiredPositionCoverageMet;
    bool autoFillProtectedForStreaking;
    bool autoFillEligible;
    std::string gameMode;
    std::vector<LolLobbyLobbyMember_t> members;
    std::vector<std::string> specifiablePositionPreferences;
    std::vector<int32_t> allowablePremadeSizes;
    int32_t queueId;
    std::string chatRoomKey;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyLobby_t& v) {
    if(v.customGameLobby)
      j["customGameLobby"] = *v.customGameLobby;
    j["invitations"] = v.invitations;
    j["invitationId"] = v.invitationId;
    j["showPositionSelector"] = v.showPositionSelector;
    j["wasKicked"] = v.wasKicked;
    j["isCustom"] = v.isCustom;
    j["queueAvailability"] = v.queueAvailability;
    j["isTeamBuilderManaged"] = v.isTeamBuilderManaged;
    j["showPositionExcluder"] = v.showPositionExcluder;
    j["canStartMatchmaking"] = v.canStartMatchmaking;
    j["maximumParticipantListSize"] = v.maximumParticipantListSize;
    j["removalReason"] = v.removalReason;
    j["chatRoomId"] = v.chatRoomId;
    j["premadeSizeAllowed"] = v.premadeSizeAllowed;
    j["localMember"] = v.localMember;
    j["autoFillProtectedForPromos"] = v.autoFillProtectedForPromos;
    j["mapId"] = v.mapId;
    j["requiredPositionCoverageMet"] = v.requiredPositionCoverageMet;
    j["autoFillProtectedForStreaking"] = v.autoFillProtectedForStreaking;
    j["autoFillEligible"] = v.autoFillEligible;
    j["gameMode"] = v.gameMode;
    j["members"] = v.members;
    j["specifiablePositionPreferences"] = v.specifiablePositionPreferences;
    j["allowablePremadeSizes"] = v.allowablePremadeSizes;
    j["queueId"] = v.queueId;
    j["chatRoomKey"] = v.chatRoomKey;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyLobby_t& v) {
    if(auto it = j.find("customGameLobby"); it != j.end() && !it->is_null())
      v.customGameLobby = it->get<LolLobbyLobbyCustomGameLobby_t>();
    v.invitations = j.at("invitations").get<std::vector<LolLobbyLobbyInvitation_t>>();
    v.invitationId = j.at("invitationId").get<std::string>();
    v.showPositionSelector = j.at("showPositionSelector").get<bool>();
    v.wasKicked = j.at("wasKicked").get<bool>();
    v.isCustom = j.at("isCustom").get<bool>();
    v.queueAvailability = j.at("queueAvailability").get<LolLobbyQueueAvailability_t>();
    v.isTeamBuilderManaged = j.at("isTeamBuilderManaged").get<bool>();
    v.showPositionExcluder = j.at("showPositionExcluder").get<bool>();
    v.canStartMatchmaking = j.at("canStartMatchmaking").get<bool>();
    v.maximumParticipantListSize = j.at("maximumParticipantListSize").get<uint32_t>();
    v.removalReason = j.at("removalReason").get<LolLobbyLobbyRemovedFromGameReason_t>();
    v.chatRoomId = j.at("chatRoomId").get<std::string>();
    v.premadeSizeAllowed = j.at("premadeSizeAllowed").get<bool>();
    v.localMember = j.at("localMember").get<LolLobbyLobbyMember_t>();
    v.autoFillProtectedForPromos = j.at("autoFillProtectedForPromos").get<bool>();
    v.mapId = j.at("mapId").get<int32_t>();
    v.requiredPositionCoverageMet = j.at("requiredPositionCoverageMet").get<bool>();
    v.autoFillProtectedForStreaking = j.at("autoFillProtectedForStreaking").get<bool>();
    v.autoFillEligible = j.at("autoFillEligible").get<bool>();
    v.gameMode = j.at("gameMode").get<std::string>();
    v.members = j.at("members").get<std::vector<LolLobbyLobbyMember_t>>();
    v.specifiablePositionPreferences = j.at("specifiablePositionPreferences").get<std::vector<std::string>>();
    v.allowablePremadeSizes = j.at("allowablePremadeSizes").get<std::vector<int32_t>>();
    v.queueId = j.at("queueId").get<int32_t>();
    v.chatRoomKey = j.at("chatRoomKey").get<std::string>();
  }
  inline std::string to_string(const LolLobbyLobby_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
