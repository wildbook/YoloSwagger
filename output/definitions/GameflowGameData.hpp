#ifndef SWAGGER_TYPES_GameflowGameData_HPP
#define SWAGGER_TYPES_GameflowGameData_HPP
#include <json.hpp>
#include "Queue.hpp"
namespace test {
  // 
  struct GameflowGameData {
'    // 
    Queue queue;
  };

  void to_json(nlohmann::json& j, const GameflowGameData& v) {
    j["queue"] = v.queue;
  }

  void from_json(const nlohmann::json& j, GameflowGameData& v) {
    v.queue = j.at("queue").get<Queue>;
  }

}
#endif // SWAGGER_TYPES_GameflowGameData_HPP
