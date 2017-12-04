#ifndef SWAGGER_TYPES_LolLobbyPlayerStatus_HPP
#define SWAGGER_TYPES_LolLobbyPlayerStatus_HPP
#include <json.hpp>
#include "LolLobbyLobbyStatus.hpp"
namespace test {
  // 
  struct LolLobbyPlayerStatus {
'    // 
    LolLobbyLobbyStatus currentLobbyStatus;
    // 
    LolLobbyLobbyStatus lastQueuedLobbyStatus;
  };

  void to_json(nlohmann::json& j, const LolLobbyPlayerStatus& v) {
    j["currentLobbyStatus"] = v.currentLobbyStatus;
    j["lastQueuedLobbyStatus"] = v.lastQueuedLobbyStatus;
  }

  void from_json(const nlohmann::json& j, LolLobbyPlayerStatus& v) {
    v.currentLobbyStatus = j.at("currentLobbyStatus").get<LolLobbyLobbyStatus>;
    v.lastQueuedLobbyStatus = j.at("lastQueuedLobbyStatus").get<LolLobbyLobbyStatus>;
  }

}
#endif // SWAGGER_TYPES_LolLobbyPlayerStatus_HPP
