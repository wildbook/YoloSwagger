#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLobbyGameflowGameClient_t {
    bool running;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyGameflowGameClient_t& v) {
    j["running"] = v.running;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyGameflowGameClient_t& v) {
    v.running = j.at("running").get<bool>();
  }
}
