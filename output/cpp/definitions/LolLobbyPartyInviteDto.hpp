#ifndef SWAGGER_TYPES_LolLobbyPartyInviteDto_HPP
#define SWAGGER_TYPES_LolLobbyPartyInviteDto_HPP
#include <json.hpp>
#include "LolLobbyGameModeDto.hpp"
namespace leagueapi {
  // 
  struct LolLobbyPartyInviteDto {
    // 
    int32_t partyVersion;
    // 
    std::string state;
    // 
    LolLobbyGameModeDto gameMode;
    // 
    std::string partyId;
    // 
    std::string invitedByPuuid;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyPartyInviteDto& v) {
    j["partyVersion"] = v.partyVersion;
    j["state"] = v.state;
    j["gameMode"] = v.gameMode;
    j["partyId"] = v.partyId;
    j["invitedByPuuid"] = v.invitedByPuuid;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyPartyInviteDto& v) {
    v.partyVersion = j.at("partyVersion").get<int32_t>;
    v.state = j.at("state").get<std::string>;
    v.gameMode = j.at("gameMode").get<LolLobbyGameModeDto>;
    v.partyId = j.at("partyId").get<std::string>;
    v.invitedByPuuid = j.at("invitedByPuuid").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolLobbyPartyInviteDto_HPP
