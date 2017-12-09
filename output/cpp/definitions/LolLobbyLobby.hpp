#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyLobbyInvitation.hpp"
#include "LolLobbyQueueAvailability.hpp"
#include "LolLobbyLobbyCustomGameLobby.hpp"
#include "LolLobbyLobbyRemovedFromGameReason.hpp"
#include "LolLobbyLobbyMember.hpp"
namespace leagueapi {
  struct LolLobbyLobby_t {
    std::vector<int32_t> allowablePremadeSizes;
    int32_t mapId;
    std::vector<LolLobbyLobbyInvitation_t> invitations;
    bool autoFillProtectedForPromos;
    bool isTeamBuilderManaged;
    LolLobbyLobbyMember_t localMember;
    LolLobbyQueueAvailability_t queueAvailability;
    std::string gameMode;
    std::string chatRoomId;
    bool isCustom;
    bool wasKicked;
    bool requiredPositionCoverageMet;
    uint32_t maximumParticipantListSize;
    std::vector<LolLobbyLobbyMember_t> members;
    bool canStartMatchmaking;
    std::string invitationId;
    std::string chatRoomKey;
    bool showPositionExcluder;
    int32_t queueId;
    bool autoFillProtectedForStreaking;
    std::vector<std::string> specifiablePositionPreferences;
    bool autoFillEligible;
    bool showPositionSelector;
    bool premadeSizeAllowed;
    LolLobbyLobbyRemovedFromGameReason_t removalReason;
    std::optional<LolLobbyLobbyCustomGameLobby_t> customGameLobby;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyLobby_t& v) {
    j["allowablePremadeSizes"] = v.allowablePremadeSizes;
    j["mapId"] = v.mapId;
    j["invitations"] = v.invitations;
    j["autoFillProtectedForPromos"] = v.autoFillProtectedForPromos;
    j["isTeamBuilderManaged"] = v.isTeamBuilderManaged;
    j["localMember"] = v.localMember;
    j["queueAvailability"] = v.queueAvailability;
    j["gameMode"] = v.gameMode;
    j["chatRoomId"] = v.chatRoomId;
    j["isCustom"] = v.isCustom;
    j["wasKicked"] = v.wasKicked;
    j["requiredPositionCoverageMet"] = v.requiredPositionCoverageMet;
    j["maximumParticipantListSize"] = v.maximumParticipantListSize;
    j["members"] = v.members;
    j["canStartMatchmaking"] = v.canStartMatchmaking;
    j["invitationId"] = v.invitationId;
    j["chatRoomKey"] = v.chatRoomKey;
    j["showPositionExcluder"] = v.showPositionExcluder;
    j["queueId"] = v.queueId;
    j["autoFillProtectedForStreaking"] = v.autoFillProtectedForStreaking;
    j["specifiablePositionPreferences"] = v.specifiablePositionPreferences;
    j["autoFillEligible"] = v.autoFillEligible;
    j["showPositionSelector"] = v.showPositionSelector;
    j["premadeSizeAllowed"] = v.premadeSizeAllowed;
    j["removalReason"] = v.removalReason;
    if(v.customGameLobby)
      j["customGameLobby"] = *v.customGameLobby;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyLobby_t& v) {
    v.allowablePremadeSizes = j.at("allowablePremadeSizes").get<std::vector<int32_t>>();
    v.mapId = j.at("mapId").get<int32_t>();
    v.invitations = j.at("invitations").get<std::vector<LolLobbyLobbyInvitation_t>>();
    v.autoFillProtectedForPromos = j.at("autoFillProtectedForPromos").get<bool>();
    v.isTeamBuilderManaged = j.at("isTeamBuilderManaged").get<bool>();
    v.localMember = j.at("localMember").get<LolLobbyLobbyMember_t>();
    v.queueAvailability = j.at("queueAvailability").get<LolLobbyQueueAvailability_t>();
    v.gameMode = j.at("gameMode").get<std::string>();
    v.chatRoomId = j.at("chatRoomId").get<std::string>();
    v.isCustom = j.at("isCustom").get<bool>();
    v.wasKicked = j.at("wasKicked").get<bool>();
    v.requiredPositionCoverageMet = j.at("requiredPositionCoverageMet").get<bool>();
    v.maximumParticipantListSize = j.at("maximumParticipantListSize").get<uint32_t>();
    v.members = j.at("members").get<std::vector<LolLobbyLobbyMember_t>>();
    v.canStartMatchmaking = j.at("canStartMatchmaking").get<bool>();
    v.invitationId = j.at("invitationId").get<std::string>();
    v.chatRoomKey = j.at("chatRoomKey").get<std::string>();
    v.showPositionExcluder = j.at("showPositionExcluder").get<bool>();
    v.queueId = j.at("queueId").get<int32_t>();
    v.autoFillProtectedForStreaking = j.at("autoFillProtectedForStreaking").get<bool>();
    v.specifiablePositionPreferences = j.at("specifiablePositionPreferences").get<std::vector<std::string>>();
    v.autoFillEligible = j.at("autoFillEligible").get<bool>();
    v.showPositionSelector = j.at("showPositionSelector").get<bool>();
    v.premadeSizeAllowed = j.at("premadeSizeAllowed").get<bool>();
    v.removalReason = j.at("removalReason").get<LolLobbyLobbyRemovedFromGameReason_t>();
    if(auto it = j.find("customGameLobby"); it != j.end() && !it->is_null())
      v.customGameLobby = it->get<LolLobbyLobbyCustomGameLobby_t>();
  }
  inline std::string to_string(const LolLobbyLobby_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
