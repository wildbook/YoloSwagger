#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLobbyGameflowGameClient_t {
    bool_t running;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyGameflowGameClient_t& v) {
    j["running"] = v.running;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyGameflowGameClient_t& v) {
    v.running = j.at("running").get<bool_t>();
  }
  inline std::string to_string(const LolLobbyGameflowGameClient_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
