#ifndef SWAGGER_TYPES_LolLobbyGameflowGameClient_HPP
#define SWAGGER_TYPES_LolLobbyGameflowGameClient_HPP
#include <json.hpp>
namespace test {
  // 
  struct LolLobbyGameflowGameClient {
'    // 
    bool running;
  };

  void to_json(nlohmann::json& j, const LolLobbyGameflowGameClient& v) {
    j["running"] = v.running;
  }

  void from_json(const nlohmann::json& j, LolLobbyGameflowGameClient& v) {
    v.running = j.at("running").get<bool>;
  }

}
#endif // SWAGGER_TYPES_LolLobbyGameflowGameClient_HPP
