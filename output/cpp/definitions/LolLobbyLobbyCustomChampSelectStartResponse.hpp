#ifndef SWAGGER_TYPES_LolLobbyLobbyCustomChampSelectStartResponse_HPP
#define SWAGGER_TYPES_LolLobbyLobbyCustomChampSelectStartResponse_HPP
#include <json.hpp>
#include "LolLobbyLobbyCustomFailedPlayer.hpp"
namespace leagueapi {
  // 
  struct LolLobbyLobbyCustomChampSelectStartResponse {
    // 
    bool success;
    // 
    std::vector<LolLobbyLobbyCustomFailedPlayer> failedPlayers;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyLobbyCustomChampSelectStartResponse& v) {
    j["success"] = v.success;
    j["failedPlayers"] = v.failedPlayers;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyLobbyCustomChampSelectStartResponse& v) {
    v.success = j.at("success").get<bool>;
    v.failedPlayers = j.at("failedPlayers").get<std::vector<LolLobbyLobbyCustomFailedPlayer>>;
  }

}
#endif // SWAGGER_TYPES_LolLobbyLobbyCustomChampSelectStartResponse_HPP
