#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyLobbyParticipantDto.hpp"
#include "LolLobbyLobbyInvitationDto.hpp"
#include "LolLobbyEligibilityRestriction.hpp"
#include "LolLobbyLobbyGameConfigDto.hpp"
namespace leagueapi {
  struct LolLobbyLobbyDto_t {
    LolLobbyLobbyGameConfigDto_t gameConfig;
    std::string chatRoomId;
    std::vector<LolLobbyLobbyParticipantDto_t> members;
    bool canStartActivity;
    std::vector<LolLobbyLobbyInvitationDto_t> invitations;
    std::vector<LolLobbyEligibilityRestriction_t> restrictions;
    std::string partyId;
    std::string chatRoomKey;
    LolLobbyLobbyParticipantDto_t localMember;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyLobbyDto_t& v) {
    j["gameConfig"] = v.gameConfig;
    j["chatRoomId"] = v.chatRoomId;
    j["members"] = v.members;
    j["canStartActivity"] = v.canStartActivity;
    j["invitations"] = v.invitations;
    j["restrictions"] = v.restrictions;
    j["partyId"] = v.partyId;
    j["chatRoomKey"] = v.chatRoomKey;
    j["localMember"] = v.localMember;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyLobbyDto_t& v) {
    v.gameConfig = j.at("gameConfig").get<LolLobbyLobbyGameConfigDto_t>();
    v.chatRoomId = j.at("chatRoomId").get<std::string>();
    v.members = j.at("members").get<std::vector<LolLobbyLobbyParticipantDto_t>>();
    v.canStartActivity = j.at("canStartActivity").get<bool>();
    v.invitations = j.at("invitations").get<std::vector<LolLobbyLobbyInvitationDto_t>>();
    v.restrictions = j.at("restrictions").get<std::vector<LolLobbyEligibilityRestriction_t>>();
    v.partyId = j.at("partyId").get<std::string>();
    v.chatRoomKey = j.at("chatRoomKey").get<std::string>();
    v.localMember = j.at("localMember").get<LolLobbyLobbyParticipantDto_t>();
  }
}
