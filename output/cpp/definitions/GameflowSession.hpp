#pragma once
#include <json.hpp>
#include <optional>
#include "GameflowGameData.hpp"
namespace leagueapi {
  struct GameflowSession_t {
    GameflowGameData_t gameData;
  };

  inline void to_json(nlohmann::json& j, const GameflowSession_t& v) {
    j["gameData"] = v.gameData;
  }

  inline void from_json(const nlohmann::json& j, GameflowSession_t& v) {
    v.gameData = j.at("gameData").get<GameflowGameData_t>();
  }
}
