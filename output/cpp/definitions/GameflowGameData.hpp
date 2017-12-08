#pragma once
#include <json.hpp>
#include <optional>
#include "Queue.hpp"
namespace leagueapi {
  struct GameflowGameData_t {
    Queue_t queue;
  };

  inline void to_json(nlohmann::json& j, const GameflowGameData_t& v) {
    j["queue"] = v.queue;
  }

  inline void from_json(const nlohmann::json& j, GameflowGameData_t& v) {
    v.queue = j.at("queue").get<Queue_t>();
  }
  inline std::string to_string(const GameflowGameData_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
