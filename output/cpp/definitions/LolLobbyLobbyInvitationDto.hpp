#ifndef SWAGGER_TYPES_LolLobbyLobbyInvitationDto_HPP
#define SWAGGER_TYPES_LolLobbyLobbyInvitationDto_HPP
#include <json.hpp>
#include "LolLobbyLobbyInvitationState.hpp"
namespace leagueapi {
  // 
  struct LolLobbyLobbyInvitationDto {
    // 
    uint64_t toSummonerId;
    // 
    std::string timestamp;
    // 
    std::string invitationId;
    // 
    LolLobbyLobbyInvitationState state;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyLobbyInvitationDto& v) {
    j["toSummonerId"] = v.toSummonerId;
    j["timestamp"] = v.timestamp;
    j["invitationId"] = v.invitationId;
    j["state"] = v.state;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyLobbyInvitationDto& v) {
    v.toSummonerId = j.at("toSummonerId").get<uint64_t>;
    v.timestamp = j.at("timestamp").get<std::string>;
    v.invitationId = j.at("invitationId").get<std::string>;
    v.state = j.at("state").get<LolLobbyLobbyInvitationState>;
  }

}
#endif // SWAGGER_TYPES_LolLobbyLobbyInvitationDto_HPP
