#pragma once
#include <json.hpp>
#include <optional>
#include "LolPerksQueue.hpp"
namespace leagueapi {
  struct LolPerksGameflowGameData_t {
    LolPerksQueue_t queue;
    bool isCustomGame;
  };

  inline void to_json(nlohmann::json& j, const LolPerksGameflowGameData_t& v) {
    j["queue"] = v.queue;
    j["isCustomGame"] = v.isCustomGame;
  }

  inline void from_json(const nlohmann::json& j, LolPerksGameflowGameData_t& v) {
    v.queue = j.at("queue").get<LolPerksQueue_t>();
    v.isCustomGame = j.at("isCustomGame").get<bool>();
  }
  inline std::string to_string(const LolPerksGameflowGameData_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
