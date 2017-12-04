#ifndef SWAGGER_TYPES_LolLobbyLobbyDto_HPP
#define SWAGGER_TYPES_LolLobbyLobbyDto_HPP
#include <json.hpp>
#include "LolLobbyLobbyGameConfigDto.hpp"
#include "LolLobbyLobbyParticipantDto.hpp"
#include "LolLobbyEligibilityRestriction.hpp"
#include "LolLobbyLobbyInvitationDto.hpp"
namespace leagueapi {
  // 
  struct LolLobbyLobbyDto {
    // 
    bool canStartActivity;
    // 
    std::string chatRoomId;
    // 
    std::string chatRoomKey;
    // 
    LolLobbyLobbyGameConfigDto gameConfig;
    // 
    std::vector<LolLobbyLobbyInvitationDto> invitations;
    // 
    LolLobbyLobbyParticipantDto localMember;
    // 
    std::vector<LolLobbyLobbyParticipantDto> members;
    // 
    std::string partyId;
    // 
    std::vector<LolLobbyEligibilityRestriction> restrictions;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyLobbyDto& v) {
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

  inline void from_json(const nlohmann::json& j, LolLobbyLobbyDto& v) {
    v.canStartActivity = j.at("canStartActivity").get<bool>;
    v.chatRoomId = j.at("chatRoomId").get<std::string>;
    v.chatRoomKey = j.at("chatRoomKey").get<std::string>;
    v.gameConfig = j.at("gameConfig").get<LolLobbyLobbyGameConfigDto>;
    v.invitations = j.at("invitations").get<std::vector<LolLobbyLobbyInvitationDto>>;
    v.localMember = j.at("localMember").get<LolLobbyLobbyParticipantDto>;
    v.members = j.at("members").get<std::vector<LolLobbyLobbyParticipantDto>>;
    v.partyId = j.at("partyId").get<std::string>;
    v.restrictions = j.at("restrictions").get<std::vector<LolLobbyEligibilityRestriction>>;
  }

}
#endif // SWAGGER_TYPES_LolLobbyLobbyDto_HPP
