#ifndef SWAGGER_TYPES_LolLobbyLobbyCustomChampSelectStartResponse_HPP
#define SWAGGER_TYPES_LolLobbyLobbyCustomChampSelectStartResponse_HPP
#include <json.hpp>
#include "LolLobbyLobbyCustomFailedPlayer.hpp"
namespace test {
  // 
  struct LolLobbyLobbyCustomChampSelectStartResponse {
'    // 
    std::vector<LolLobbyLobbyCustomFailedPlayer> failedPlayers;
    // 
    bool success;
  };

  void to_json(nlohmann::json& j, const LolLobbyLobbyCustomChampSelectStartResponse& v) {
    j["failedPlayers"] = v.failedPlayers;
    j["success"] = v.success;
  }

  void from_json(const nlohmann::json& j, LolLobbyLobbyCustomChampSelectStartResponse& v) {
    v.failedPlayers = j.at("failedPlayers").get<std::vector<LolLobbyLobbyCustomFailedPlayer>>;
    v.success = j.at("success").get<bool>;
  }

}
#endif // SWAGGER_TYPES_LolLobbyLobbyCustomChampSelectStartResponse_HPP
