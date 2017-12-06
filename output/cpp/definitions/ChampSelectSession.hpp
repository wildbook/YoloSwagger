#pragma once
#include <json.hpp>
#include <optional>
#include "ChampSelectTimer.hpp"
namespace leagueapi {
  struct ChampSelectSession_t {
    ChampSelectTimer_t timer;
  };

  inline void to_json(nlohmann::json& j, const ChampSelectSession_t& v) {
    j["timer"] = v.timer;
  }

  inline void from_json(const nlohmann::json& j, ChampSelectSession_t& v) {
    v.timer = j.at("timer").get<ChampSelectTimer_t>();
  }
}
