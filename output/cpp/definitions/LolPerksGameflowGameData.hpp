#pragma once
#include <json.hpp>
#include <optional>
#include "LolPerksQueue.hpp"
namespace leagueapi {
  struct LolPerksGameflowGameData_t {
    bool isCustomGame;
    LolPerksQueue_t queue;
  };

  inline void to_json(nlohmann::json& j, const LolPerksGameflowGameData_t& v) {
    j["isCustomGame"] = v.isCustomGame;
    j["queue"] = v.queue;
  }

  inline void from_json(const nlohmann::json& j, LolPerksGameflowGameData_t& v) {
    v.isCustomGame = j.at("isCustomGame").get<bool>();
    v.queue = j.at("queue").get<LolPerksQueue_t>();
  }
}
