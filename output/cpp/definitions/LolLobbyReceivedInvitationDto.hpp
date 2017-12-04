#ifndef SWAGGER_TYPES_LolLobbyReceivedInvitationDto_HPP
#define SWAGGER_TYPES_LolLobbyReceivedInvitationDto_HPP
#include <json.hpp>
#include "LolLobbyReceivedInvitationGameConfigDto.hpp"
#include "LolLobbyEligibilityRestriction.hpp"
#include "LolLobbyLobbyInvitationState.hpp"
namespace leagueapi {
  // 
  struct LolLobbyReceivedInvitationDto {
    // 
    std::vector<LolLobbyEligibilityRestriction> restrictions;
    // 
    bool canAcceptInvitation;
    // 
    std::string timestamp;
    // 
    LolLobbyLobbyInvitationState state;
    // 
    LolLobbyReceivedInvitationGameConfigDto gameConfig;
    // 
    std::string invitationId;
    // 
    std::string fromSummonerName;
    // 
    uint64_t fromSummonerId;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyReceivedInvitationDto& v) {
    j["restrictions"] = v.restrictions;
    j["canAcceptInvitation"] = v.canAcceptInvitation;
    j["timestamp"] = v.timestamp;
    j["state"] = v.state;
    j["gameConfig"] = v.gameConfig;
    j["invitationId"] = v.invitationId;
    j["fromSummonerName"] = v.fromSummonerName;
    j["fromSummonerId"] = v.fromSummonerId;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyReceivedInvitationDto& v) {
    v.restrictions = j.at("restrictions").get<std::vector<LolLobbyEligibilityRestriction>>;
    v.canAcceptInvitation = j.at("canAcceptInvitation").get<bool>;
    v.timestamp = j.at("timestamp").get<std::string>;
    v.state = j.at("state").get<LolLobbyLobbyInvitationState>;
    v.gameConfig = j.at("gameConfig").get<LolLobbyReceivedInvitationGameConfigDto>;
    v.invitationId = j.at("invitationId").get<std::string>;
    v.fromSummonerName = j.at("fromSummonerName").get<std::string>;
    v.fromSummonerId = j.at("fromSummonerId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LolLobbyReceivedInvitationDto_HPP
