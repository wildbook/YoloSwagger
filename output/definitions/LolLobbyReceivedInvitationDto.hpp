#ifndef SWAGGER_TYPES_LolLobbyReceivedInvitationDto_HPP
#define SWAGGER_TYPES_LolLobbyReceivedInvitationDto_HPP
#include <json.hpp>
#include "LolLobbyLobbyInvitationState.hpp"
#include "LolLobbyEligibilityRestriction.hpp"
#include "LolLobbyReceivedInvitationGameConfigDto.hpp"
namespace leagueapi {
  // 
  struct LolLobbyReceivedInvitationDto {
    // 
    bool canAcceptInvitation;
    // 
    uint64_t fromSummonerId;
    // 
    std::string fromSummonerName;
    // 
    LolLobbyReceivedInvitationGameConfigDto gameConfig;
    // 
    std::string invitationId;
    // 
    std::vector<LolLobbyEligibilityRestriction> restrictions;
    // 
    LolLobbyLobbyInvitationState state;
    // 
    std::string timestamp;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyReceivedInvitationDto& v) {
    j["canAcceptInvitation"] = v.canAcceptInvitation;
    j["fromSummonerId"] = v.fromSummonerId;
    j["fromSummonerName"] = v.fromSummonerName;
    j["gameConfig"] = v.gameConfig;
    j["invitationId"] = v.invitationId;
    j["restrictions"] = v.restrictions;
    j["state"] = v.state;
    j["timestamp"] = v.timestamp;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyReceivedInvitationDto& v) {
    v.canAcceptInvitation = j.at("canAcceptInvitation").get<bool>;
    v.fromSummonerId = j.at("fromSummonerId").get<uint64_t>;
    v.fromSummonerName = j.at("fromSummonerName").get<std::string>;
    v.gameConfig = j.at("gameConfig").get<LolLobbyReceivedInvitationGameConfigDto>;
    v.invitationId = j.at("invitationId").get<std::string>;
    v.restrictions = j.at("restrictions").get<std::vector<LolLobbyEligibilityRestriction>>;
    v.state = j.at("state").get<LolLobbyLobbyInvitationState>;
    v.timestamp = j.at("timestamp").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolLobbyReceivedInvitationDto_HPP
