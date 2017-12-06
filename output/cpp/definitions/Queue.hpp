#pragma once
#include <json.hpp>
#include <optional>
#include "QueueGameTypeConfig.hpp"
namespace leagueapi {
  struct Queue_t {
    QueueGameTypeConfig_t gameTypeConfig;
  };

  inline void to_json(nlohmann::json& j, const Queue_t& v) {
    j["gameTypeConfig"] = v.gameTypeConfig;
  }

  inline void from_json(const nlohmann::json& j, Queue_t& v) {
    v.gameTypeConfig = j.at("gameTypeConfig").get<QueueGameTypeConfig_t>();
  }
}
