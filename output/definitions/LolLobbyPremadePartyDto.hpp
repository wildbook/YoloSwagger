#ifndef SWAGGER_TYPES_LolLobbyPremadePartyDto_HPP
#define SWAGGER_TYPES_LolLobbyPremadePartyDto_HPP
#include <json.hpp>
#include "LolLobbyPremadeMemberDto.hpp"
namespace leagueapi {
  // 
  struct LolLobbyPremadePartyDto {
    // 
    std::string partyId;
    // 
    std::vector<LolLobbyPremadeMemberDto> players;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyPremadePartyDto& v) {
    j["partyId"] = v.partyId;
    j["players"] = v.players;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyPremadePartyDto& v) {
    v.partyId = j.at("partyId").get<std::string>;
    v.players = j.at("players").get<std::vector<LolLobbyPremadeMemberDto>>;
  }

}
#endif // SWAGGER_TYPES_LolLobbyPremadePartyDto_HPP
