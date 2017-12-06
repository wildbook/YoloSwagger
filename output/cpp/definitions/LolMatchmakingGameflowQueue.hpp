#pragma once
#include <json.hpp>
#include <optional>
#include "LolMatchmakingGameflowGameTypeConfig.hpp"
namespace leagueapi {
  struct LolMatchmakingGameflowQueue_t {
    LolMatchmakingGameflowGameTypeConfig_t gameTypeConfig;
  };

  inline void to_json(nlohmann::json& j, const LolMatchmakingGameflowQueue_t& v) {
    j["gameTypeConfig"] = v.gameTypeConfig;
  }

  inline void from_json(const nlohmann::json& j, LolMatchmakingGameflowQueue_t& v) {
    v.gameTypeConfig = j.at("gameTypeConfig").get<LolMatchmakingGameflowGameTypeConfig_t>();
  }
}
