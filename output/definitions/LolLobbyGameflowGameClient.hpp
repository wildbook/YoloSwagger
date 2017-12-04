#ifndef SWAGGER_TYPES_LolLobbyGameflowGameClient_HPP
#define SWAGGER_TYPES_LolLobbyGameflowGameClient_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolLobbyGameflowGameClient {
    // 
    bool running;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyGameflowGameClient& v) {
    j["running"] = v.running;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyGameflowGameClient& v) {
    v.running = j.at("running").get<bool>;
  }

}
#endif // SWAGGER_TYPES_LolLobbyGameflowGameClient_HPP
