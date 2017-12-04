#ifndef SWAGGER_TYPES_LolMatchmakingPlayerStatus_HPP
#define SWAGGER_TYPES_LolMatchmakingPlayerStatus_HPP
#include <json.hpp>
#include "LolMatchmakingLobbyStatus.hpp"
namespace leagueapi {
  // 
  struct LolMatchmakingPlayerStatus {
    // 
    LolMatchmakingLobbyStatus currentLobbyStatus;
    // 
    LolMatchmakingLobbyStatus lastQueuedLobbyStatus;
  };

  inline void to_json(nlohmann::json& j, const LolMatchmakingPlayerStatus& v) {
    j["currentLobbyStatus"] = v.currentLobbyStatus;
    j["lastQueuedLobbyStatus"] = v.lastQueuedLobbyStatus;
  }

  inline void from_json(const nlohmann::json& j, LolMatchmakingPlayerStatus& v) {
    v.currentLobbyStatus = j.at("currentLobbyStatus").get<LolMatchmakingLobbyStatus>;
    v.lastQueuedLobbyStatus = j.at("lastQueuedLobbyStatus").get<LolMatchmakingLobbyStatus>;
  }

}
#endif // SWAGGER_TYPES_LolMatchmakingPlayerStatus_HPP
