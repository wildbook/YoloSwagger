#ifndef SWAGGER_TYPES_LolLobbyPlayerCollectionDto_HPP
#define SWAGGER_TYPES_LolLobbyPlayerCollectionDto_HPP
#include <json.hpp>
#include "LolLobbyPlayerDto.hpp"
namespace leagueapi {
  // 
  struct LolLobbyPlayerCollectionDto {
    // 
    std::vector<LolLobbyPlayerDto> players;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyPlayerCollectionDto& v) {
    j["players"] = v.players;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyPlayerCollectionDto& v) {
    v.players = j.at("players").get<std::vector<LolLobbyPlayerDto>>;
  }

}
#endif // SWAGGER_TYPES_LolLobbyPlayerCollectionDto_HPP
