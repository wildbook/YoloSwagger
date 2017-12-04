#ifndef SWAGGER_TYPES_LolGameflowPlayerStatus_HPP
#define SWAGGER_TYPES_LolGameflowPlayerStatus_HPP
#include <json.hpp>
#include "LolGameflowLobbyStatus.hpp"
namespace test {
  // 
  struct LolGameflowPlayerStatus {
'    // 
    LolGameflowLobbyStatus currentLobbyStatus;
    // 
    LolGameflowLobbyStatus lastQueuedLobbyStatus;
  };

  void to_json(nlohmann::json& j, const LolGameflowPlayerStatus& v) {
    j["currentLobbyStatus"] = v.currentLobbyStatus;
    j["lastQueuedLobbyStatus"] = v.lastQueuedLobbyStatus;
  }

  void from_json(const nlohmann::json& j, LolGameflowPlayerStatus& v) {
    v.currentLobbyStatus = j.at("currentLobbyStatus").get<LolGameflowLobbyStatus>;
    v.lastQueuedLobbyStatus = j.at("lastQueuedLobbyStatus").get<LolGameflowLobbyStatus>;
  }

}
#endif // SWAGGER_TYPES_LolGameflowPlayerStatus_HPP
