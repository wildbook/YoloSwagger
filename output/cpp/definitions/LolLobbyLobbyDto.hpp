#ifndef SWAGGER_TYPES_LolLobbyLobbyDto_HPP
#define SWAGGER_TYPES_LolLobbyLobbyDto_HPP
#include <json.hpp>
#include "LolLobbyLobbyGameConfigDto.hpp"
#include "LolLobbyLobbyParticipantDto.hpp"
#include "LolLobbyLobbyInvitationDto.hpp"
#include "LolLobbyEligibilityRestriction.hpp"
namespace leagueapi {
  // 
  struct LolLobbyLobbyDto {
    // 
    std::vector<LolLobbyEligibilityRestriction> restrictions;
    // 
    std::string chatRoomKey;
    // 
    LolLobbyLobbyGameConfigDto gameConfig;
    // 
    std::vector<LolLobbyLobbyInvitationDto> invitations;
    // 
    std::string chatRoomId;
    // 
    std::string partyId;
    // 
    std::vector<LolLobbyLobbyParticipantDto> members;
    // 
    LolLobbyLobbyParticipantDto localMember;
    // 
    bool canStartActivity;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyLobbyDto& v) {
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

  inline void from_json(const nlohmann::json& j, LolLobbyLobbyDto& v) {
    v.restrictions = j.at("restrictions").get<std::vector<LolLobbyEligibilityRestriction>>;
    v.chatRoomKey = j.at("chatRoomKey").get<std::string>;
    v.gameConfig = j.at("gameConfig").get<LolLobbyLobbyGameConfigDto>;
    v.invitations = j.at("invitations").get<std::vector<LolLobbyLobbyInvitationDto>>;
    v.chatRoomId = j.at("chatRoomId").get<std::string>;
    v.partyId = j.at("partyId").get<std::string>;
    v.members = j.at("members").get<std::vector<LolLobbyLobbyParticipantDto>>;
    v.localMember = j.at("localMember").get<LolLobbyLobbyParticipantDto>;
    v.canStartActivity = j.at("canStartActivity").get<bool>;
  }

}
#endif // SWAGGER_TYPES_LolLobbyLobbyDto_HPP
