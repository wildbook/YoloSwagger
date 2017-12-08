#pragma once
#include <json.hpp>
#include <optional>
#include "LolMatchmakingGameflowQueue.hpp"
namespace leagueapi {
  struct LolMatchmakingGameflowGameData_t {
    LolMatchmakingGameflowQueue_t queue;
  };

  inline void to_json(nlohmann::json& j, const LolMatchmakingGameflowGameData_t& v) {
    j["queue"] = v.queue;
  }

  inline void from_json(const nlohmann::json& j, LolMatchmakingGameflowGameData_t& v) {
    v.queue = j.at("queue").get<LolMatchmakingGameflowQueue_t>();
  }
  inline std::string to_string(const LolMatchmakingGameflowGameData_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
