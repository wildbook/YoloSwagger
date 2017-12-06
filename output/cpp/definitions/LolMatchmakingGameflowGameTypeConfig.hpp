#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolMatchmakingGameflowGameTypeConfig_t {
    bool reroll;
  };

  inline void to_json(nlohmann::json& j, const LolMatchmakingGameflowGameTypeConfig_t& v) {
    j["reroll"] = v.reroll;
  }

  inline void from_json(const nlohmann::json& j, LolMatchmakingGameflowGameTypeConfig_t& v) {
    v.reroll = j.at("reroll").get<bool>();
  }
}
