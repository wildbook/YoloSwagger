#ifndef SWAGGER_TYPES_LolChatLobbyPlayerStatus_HPP
#define SWAGGER_TYPES_LolChatLobbyPlayerStatus_HPP
#include <json.hpp>
#include "LolChatLobbyStatus.hpp"
namespace test {
  // 
  struct LolChatLobbyPlayerStatus {
'    // 
    LolChatLobbyStatus currentLobbyStatus;
    // 
    LolChatLobbyStatus lastQueuedLobbyStatus;
  };

  void to_json(nlohmann::json& j, const LolChatLobbyPlayerStatus& v) {
    j["currentLobbyStatus"] = v.currentLobbyStatus;
    j["lastQueuedLobbyStatus"] = v.lastQueuedLobbyStatus;
  }

  void from_json(const nlohmann::json& j, LolChatLobbyPlayerStatus& v) {
    v.currentLobbyStatus = j.at("currentLobbyStatus").get<LolChatLobbyStatus>;
    v.lastQueuedLobbyStatus = j.at("lastQueuedLobbyStatus").get<LolChatLobbyStatus>;
  }

}
#endif // SWAGGER_TYPES_LolChatLobbyPlayerStatus_HPP
