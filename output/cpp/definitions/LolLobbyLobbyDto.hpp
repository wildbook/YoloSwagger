#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyLobbyGameConfigDto.hpp"
#include "LolLobbyLobbyParticipantDto.hpp"
#include "LolLobbyLobbyInvitationDto.hpp"
#include "LolLobbyEligibilityRestriction.hpp"
namespace leagueapi {
  struct LolLobbyLobbyDto_t {
    std::vector<LolLobbyEligibilityRestriction_t> restrictions;
    std::string chatRoomKey;
    LolLobbyLobbyGameConfigDto_t gameConfig;
    std::vector<LolLobbyLobbyInvitationDto_t> invitations;
    std::string chatRoomId;
    std::string partyId;
    std::vector<LolLobbyLobbyParticipantDto_t> members;
    LolLobbyLobbyParticipantDto_t localMember;
    bool canStartActivity;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyLobbyDto_t& v) {
    j["restrictions"] = v.restrictions;
    j["chatRoomKey"] = v.chatRoomKey;
    j["gameConfig"] = v.gameConfig;
    j["invitations"] = v.invitations;
    j["chatRoomId"] = v.chatRoomId;
    j["partyId"] = v.partyId;
    j["members"] = v.members;
    j["localMember"] = v.localMember;
    j["canStartActivity"] = v.canStartActivity;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyLobbyDto_t& v) {
    v.restrictions = j.at("restrictions").get<std::vector<LolLobbyEligibilityRestriction_t>>();
    v.chatRoomKey = j.at("chatRoomKey").get<std::string>();
    v.gameConfig = j.at("gameConfig").get<LolLobbyLobbyGameConfigDto_t>();
    v.invitations = j.at("invitations").get<std::vector<LolLobbyLobbyInvitationDto_t>>();
    v.chatRoomId = j.at("chatRoomId").get<std::string>();
    v.partyId = j.at("partyId").get<std::string>();
    v.members = j.at("members").get<std::vector<LolLobbyLobbyParticipantDto_t>>();
    v.localMember = j.at("localMember").get<LolLobbyLobbyParticipantDto_t>();
    v.canStartActivity = j.at("canStartActivity").get<bool>();
  }
  inline std::string to_string(const LolLobbyLobbyDto_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
