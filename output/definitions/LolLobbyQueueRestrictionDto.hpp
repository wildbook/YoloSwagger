#ifndef SWAGGER_TYPES_LolLobbyQueueRestrictionDto_HPP
#define SWAGGER_TYPES_LolLobbyQueueRestrictionDto_HPP
#include <json.hpp>
#include "LolLobbyGatekeeperRestrictionDto.hpp"
namespace leagueapi {
  // 
  struct LolLobbyQueueRestrictionDto {
    // 
    std::vector<LolLobbyGatekeeperRestrictionDto> gatekeeperRestrictions;
  };

  void to_json(nlohmann::json& j, const LolLobbyQueueRestrictionDto& v) {
    j["gatekeeperRestrictions"] = v.gatekeeperRestrictions;
  }

  void from_json(const nlohmann::json& j, LolLobbyQueueRestrictionDto& v) {
    v.gatekeeperRestrictions = j.at("gatekeeperRestrictions").get<std::vector<LolLobbyGatekeeperRestrictionDto>>;
  }

}
#endif // SWAGGER_TYPES_LolLobbyQueueRestrictionDto_HPP
