#ifndef SWAGGER_TYPES_GameflowLcdsReconnectInfoDto_HPP
#define SWAGGER_TYPES_GameflowLcdsReconnectInfoDto_HPP
#include <json.hpp>
#include "GameflowLcdsPlayerCredentialsDto.hpp"
#include "GameflowLcdsGameDTO.hpp"
namespace leagueapi {
  // 
  struct GameflowLcdsReconnectInfoDto {
    // 
    GameflowLcdsGameDTO game;
    // 
    GameflowLcdsPlayerCredentialsDto playerCredentials;
    // 
    uint32_t reconnectDelay;
  };

  inline void to_json(nlohmann::json& j, const GameflowLcdsReconnectInfoDto& v) {
    j["game"] = v.game;
    j["playerCredentials"] = v.playerCredentials;
    j["reconnectDelay"] = v.reconnectDelay;
  }

  inline void from_json(const nlohmann::json& j, GameflowLcdsReconnectInfoDto& v) {
    v.game = j.at("game").get<GameflowLcdsGameDTO>;
    v.playerCredentials = j.at("playerCredentials").get<GameflowLcdsPlayerCredentialsDto>;
    v.reconnectDelay = j.at("reconnectDelay").get<uint32_t>;
  }

}
#endif // SWAGGER_TYPES_GameflowLcdsReconnectInfoDto_HPP
