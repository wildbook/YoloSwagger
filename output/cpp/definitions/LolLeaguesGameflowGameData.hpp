#pragma once
#include <json.hpp>
#include <optional>
#include "LolLeaguesQueue.hpp"
namespace leagueapi {
  struct LolLeaguesGameflowGameData_t {
    LolLeaguesQueue_t queue;
  };

  inline void to_json(nlohmann::json& j, const LolLeaguesGameflowGameData_t& v) {
    j["queue"] = v.queue;
  }

  inline void from_json(const nlohmann::json& j, LolLeaguesGameflowGameData_t& v) {
    v.queue = j.at("queue").get<LolLeaguesQueue_t>();
  }
}
