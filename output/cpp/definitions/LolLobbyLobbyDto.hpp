#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyLobbyGameConfigDto.hpp"
#include "LolLobbyEligibilityRestriction.hpp"
#include "LolLobbyLobbyInvitationDto.hpp"
#include "LolLobbyLobbyParticipantDto.hpp"
namespace leagueapi {
  struct LolLobbyLobbyDto_t {
    bool canStartActivity;
    std::string chatRoomId;
    std::string chatRoomKey;
    LolLobbyLobbyGameConfigDto_t gameConfig;
    std::vector<LolLobbyLobbyInvitationDto_t> invitations;
    LolLobbyLobbyParticipantDto_t localMember;
    std::vector<LolLobbyLobbyParticipantDto_t> members;
    std::string partyId;
    std::vector<LolLobbyEligibilityRestriction_t> restrictions;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyLobbyDto_t& v) {
    j["canStartActivity"] = v.canStartActivity;
    j["chatRoomId"] = v.chatRoomId;
    j["chatRoomKey"] = v.chatRoomKey;
    j["gameConfig"] = v.gameConfig;
    j["invitations"] = v.invitations;
    j["localMember"] = v.localMember;
    j["members"] = v.members;
    j["partyId"] = v.partyId;
    j["restrictions"] = v.restrictions;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyLobbyDto_t& v) {
    v.canStartActivity = j.at("canStartActivity").get<bool>();
    v.chatRoomId = j.at("chatRoomId").get<std::string>();
    v.chatRoomKey = j.at("chatRoomKey").get<std::string>();
    v.gameConfig = j.at("gameConfig").get<LolLobbyLobbyGameConfigDto_t>();
    v.invitations = j.at("invitations").get<std::vector<LolLobbyLobbyInvitationDto_t>>();
    v.localMember = j.at("localMember").get<LolLobbyLobbyParticipantDto_t>();
    v.members = j.at("members").get<std::vector<LolLobbyLobbyParticipantDto_t>>();
    v.partyId = j.at("partyId").get<std::string>();
    v.restrictions = j.at("restrictions").get<std::vector<LolLobbyEligibilityRestriction_t>>();
  }
}
