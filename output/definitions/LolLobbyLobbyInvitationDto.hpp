#ifndef SWAGGER_TYPES_LolLobbyLobbyInvitationDto_HPP
#define SWAGGER_TYPES_LolLobbyLobbyInvitationDto_HPP
#include <json.hpp>
#include "LolLobbyLobbyInvitationState.hpp"
namespace leagueapi {
  // 
  struct LolLobbyLobbyInvitationDto {
    // 
    std::string invitationId;
    // 
    LolLobbyLobbyInvitationState state;
    // 
    std::string timestamp;
    // 
    uint64_t toSummonerId;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyLobbyInvitationDto& v) {
    j["invitationId"] = v.invitationId;
    j["state"] = v.state;
    j["timestamp"] = v.timestamp;
    j["toSummonerId"] = v.toSummonerId;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyLobbyInvitationDto& v) {
    v.invitationId = j.at("invitationId").get<std::string>;
    v.state = j.at("state").get<LolLobbyLobbyInvitationState>;
    v.timestamp = j.at("timestamp").get<std::string>;
    v.toSummonerId = j.at("toSummonerId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LolLobbyLobbyInvitationDto_HPP
