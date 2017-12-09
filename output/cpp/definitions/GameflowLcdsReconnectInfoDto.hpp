#pragma once
#include <json.hpp>
#include <optional>
#include "GameflowLcdsGameDTO.hpp"
#include "GameflowLcdsPlayerCredentialsDto.hpp"
namespace leagueapi {
  struct GameflowLcdsReconnectInfoDto_t {
    uint32_t reconnectDelay;
    GameflowLcdsPlayerCredentialsDto_t playerCredentials;
    GameflowLcdsGameDTO_t game;
  };

  inline void to_json(nlohmann::json& j, const GameflowLcdsReconnectInfoDto_t& v) {
    j["reconnectDelay"] = v.reconnectDelay;
    j["playerCredentials"] = v.playerCredentials;
    j["game"] = v.game;
  }

  inline void from_json(const nlohmann::json& j, GameflowLcdsReconnectInfoDto_t& v) {
    v.reconnectDelay = j.at("reconnectDelay").get<uint32_t>();
    v.playerCredentials = j.at("playerCredentials").get<GameflowLcdsPlayerCredentialsDto_t>();
    v.game = j.at("game").get<GameflowLcdsGameDTO_t>();
  }
  inline std::string to_string(const GameflowLcdsReconnectInfoDto_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
