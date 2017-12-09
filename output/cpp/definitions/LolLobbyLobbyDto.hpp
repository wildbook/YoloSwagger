#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyLobbyGameConfigDto.hpp"
#include "LolLobbyEligibilityRestriction.hpp"
#include "LolLobbyLobbyParticipantDto.hpp"
#include "LolLobbyLobbyInvitationDto.hpp"
namespace leagueapi {
  struct LolLobbyLobbyDto_t {
    std::string chatRoomId;
    LolLobbyLobbyParticipantDto_t localMember;
    bool canStartActivity;
    std::vector<LolLobbyLobbyInvitationDto_t> invitations;
    std::string partyId;
    std::vector<LolLobbyLobbyParticipantDto_t> members;
    LolLobbyLobbyGameConfigDto_t gameConfig;
    std::vector<LolLobbyEligibilityRestriction_t> restrictions;
    std::string chatRoomKey;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyLobbyDto_t& v) {
    j["chatRoomId"] = v.chatRoomId;
    j["localMember"] = v.localMember;
    j["canStartActivity"] = v.canStartActivity;
    j["invitations"] = v.invitations;
    j["partyId"] = v.partyId;
    j["members"] = v.members;
    j["gameConfig"] = v.gameConfig;
    j["restrictions"] = v.restrictions;
    j["chatRoomKey"] = v.chatRoomKey;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyLobbyDto_t& v) {
    v.chatRoomId = j.at("chatRoomId").get<std::string>();
    v.localMember = j.at("localMember").get<LolLobbyLobbyParticipantDto_t>();
    v.canStartActivity = j.at("canStartActivity").get<bool>();
    v.invitations = j.at("invitations").get<std::vector<LolLobbyLobbyInvitationDto_t>>();
    v.partyId = j.at("partyId").get<std::string>();
    v.members = j.at("members").get<std::vector<LolLobbyLobbyParticipantDto_t>>();
    v.gameConfig = j.at("gameConfig").get<LolLobbyLobbyGameConfigDto_t>();
    v.restrictions = j.at("restrictions").get<std::vector<LolLobbyEligibilityRestriction_t>>();
    v.chatRoomKey = j.at("chatRoomKey").get<std::string>();
  }
  inline std::string to_string(const LolLobbyLobbyDto_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
