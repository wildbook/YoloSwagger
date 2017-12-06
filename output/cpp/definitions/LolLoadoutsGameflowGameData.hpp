#pragma once
#include <json.hpp>
#include <optional>
#include "LolLoadoutsQueue.hpp"
namespace leagueapi {
  struct LolLoadoutsGameflowGameData_t {
    LolLoadoutsQueue_t queue;
  };

  inline void to_json(nlohmann::json& j, const LolLoadoutsGameflowGameData_t& v) {
    j["queue"] = v.queue;
  }

  inline void from_json(const nlohmann::json& j, LolLoadoutsGameflowGameData_t& v) {
    v.queue = j.at("queue").get<LolLoadoutsQueue_t>();
  }
}
