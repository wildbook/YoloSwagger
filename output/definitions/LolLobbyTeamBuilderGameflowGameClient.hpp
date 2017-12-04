#ifndef SWAGGER_TYPES_LolLobbyTeamBuilderGameflowGameClient_HPP
#define SWAGGER_TYPES_LolLobbyTeamBuilderGameflowGameClient_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolLobbyTeamBuilderGameflowGameClient {
    // 
    bool running;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderGameflowGameClient& v) {
    j["running"] = v.running;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderGameflowGameClient& v) {
    v.running = j.at("running").get<bool>;
  }

}
#endif // SWAGGER_TYPES_LolLobbyTeamBuilderGameflowGameClient_HPP
