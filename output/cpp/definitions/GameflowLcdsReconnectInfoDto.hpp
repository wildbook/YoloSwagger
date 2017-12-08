#pragma once
#include <json.hpp>
#include <optional>
#include "GameflowLcdsGameDTO.hpp"
#include "GameflowLcdsPlayerCredentialsDto.hpp"
namespace leagueapi {
  struct GameflowLcdsReconnectInfoDto_t {
    GameflowLcdsGameDTO_t game;
    GameflowLcdsPlayerCredentialsDto_t playerCredentials;
    uint32_t reconnectDelay;
  };

  inline void to_json(nlohmann::json& j, const GameflowLcdsReconnectInfoDto_t& v) {
    j["game"] = v.game;
    j["playerCredentials"] = v.playerCredentials;
    j["reconnectDelay"] = v.reconnectDelay;
  }

  inline void from_json(const nlohmann::json& j, GameflowLcdsReconnectInfoDto_t& v) {
    v.game = j.at("game").get<GameflowLcdsGameDTO_t>();
    v.playerCredentials = j.at("playerCredentials").get<GameflowLcdsPlayerCredentialsDto_t>();
    v.reconnectDelay = j.at("reconnectDelay").get<uint32_t>();
  }
  inline std::string to_string(const GameflowLcdsReconnectInfoDto_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
