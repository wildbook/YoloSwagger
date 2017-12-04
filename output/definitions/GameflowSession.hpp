#ifndef SWAGGER_TYPES_GameflowSession_HPP
#define SWAGGER_TYPES_GameflowSession_HPP
#include <json.hpp>
#include "GameflowGameData.hpp"
namespace test {
  // 
  struct GameflowSession {
'    // 
    GameflowGameData gameData;
  };

  void to_json(nlohmann::json& j, const GameflowSession& v) {
    j["gameData"] = v.gameData;
  }

  void from_json(const nlohmann::json& j, GameflowSession& v) {
    v.gameData = j.at("gameData").get<GameflowGameData>;
  }

}
#endif // SWAGGER_TYPES_GameflowSession_HPP
