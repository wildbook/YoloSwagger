#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyTeamBuilderGameflowGameClient.hpp"
namespace leagueapi {
  struct LolLobbyTeamBuilderGameflowSession_t {
    LolLobbyTeamBuilderGameflowGameClient_t gameClient;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderGameflowSession_t& v) {
    j["gameClient"] = v.gameClient;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderGameflowSession_t& v) {
    v.gameClient = j.at("gameClient").get<LolLobbyTeamBuilderGameflowGameClient_t>();
  }
  inline std::string to_string(const LolLobbyTeamBuilderGameflowSession_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
