#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyEligibilityRestriction.hpp"
#include "LolLobbyLobbyGameConfigDto.hpp"
#include "LolLobbyLobbyInvitationDto.hpp"
#include "LolLobbyLobbyParticipantDto.hpp"
namespace leagueapi {
  struct LolLobbyLobbyDto_t {
    std::vector<LolLobbyEligibilityRestriction_t> restrictions;
    std::string partyId;
    std::vector<LolLobbyLobbyInvitationDto_t> invitations;
    std::vector<LolLobbyLobbyParticipantDto_t> members;
    std::string chatRoomId;
    std::string chatRoomKey;
    LolLobbyLobbyParticipantDto_t localMember;
    LolLobbyLobbyGameConfigDto_t gameConfig;
    bool canStartActivity;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyLobbyDto_t& v) {
    j["restrictions"] = v.restrictions;
    j["partyId"] = v.partyId;
    j["invitations"] = v.invitations;
    j["members"] = v.members;
    j["chatRoomId"] = v.chatRoomId;
    j["chatRoomKey"] = v.chatRoomKey;
    j["localMember"] = v.localMember;
    j["gameConfig"] = v.gameConfig;
    j["canStartActivity"] = v.canStartActivity;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyLobbyDto_t& v) {
    v.restrictions = j.at("restrictions").get<std::vector<LolLobbyEligibilityRestriction_t>>();
    v.partyId = j.at("partyId").get<std::string>();
    v.invitations = j.at("invitations").get<std::vector<LolLobbyLobbyInvitationDto_t>>();
    v.members = j.at("members").get<std::vector<LolLobbyLobbyParticipantDto_t>>();
    v.chatRoomId = j.at("chatRoomId").get<std::string>();
    v.chatRoomKey = j.at("chatRoomKey").get<std::string>();
    v.localMember = j.at("localMember").get<LolLobbyLobbyParticipantDto_t>();
    v.gameConfig = j.at("gameConfig").get<LolLobbyLobbyGameConfigDto_t>();
    v.canStartActivity = j.at("canStartActivity").get<bool>();
  }
  inline std::string to_string(const LolLobbyLobbyDto_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
