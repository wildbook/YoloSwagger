#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLobbyTeamBuilderGameflowGameClient_t {
    bool running;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderGameflowGameClient_t& v) {
    j["running"] = v.running;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderGameflowGameClient_t& v) {
    v.running = j.at("running").get<bool>();
  }
  inline std::string to_string(const LolLobbyTeamBuilderGameflowGameClient_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
