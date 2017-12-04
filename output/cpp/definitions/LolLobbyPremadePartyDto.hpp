#ifndef SWAGGER_TYPES_LolLobbyPremadePartyDto_HPP
#define SWAGGER_TYPES_LolLobbyPremadePartyDto_HPP
#include <json.hpp>
#include "LolLobbyPremadeMemberDto.hpp"
namespace leagueapi {
  // 
  struct LolLobbyPremadePartyDto {
    // 
    std::vector<LolLobbyPremadeMemberDto> players;
    // 
    std::string partyId;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyPremadePartyDto& v) {
    j["players"] = v.players;
    j["partyId"] = v.partyId;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyPremadePartyDto& v) {
    v.players = j.at("players").get<std::vector<LolLobbyPremadeMemberDto>>;
    v.partyId = j.at("partyId").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolLobbyPremadePartyDto_HPP
