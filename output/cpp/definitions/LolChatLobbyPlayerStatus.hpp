#pragma once
#include <json.hpp>
#include <optional>
#include "LolChatLobbyStatus.hpp"
namespace leagueapi {
  struct LolChatLobbyPlayerStatus_t {
    std::optional<LolChatLobbyStatus_t> currentLobbyStatus;
    std::optional<LolChatLobbyStatus_t> lastQueuedLobbyStatus;
  };

  inline void to_json(nlohmann::json& j, const LolChatLobbyPlayerStatus_t& v) {
    if(v.currentLobbyStatus)
      j["currentLobbyStatus"] = *v.currentLobbyStatus;
    if(v.lastQueuedLobbyStatus)
      j["lastQueuedLobbyStatus"] = *v.lastQueuedLobbyStatus;
  }

  inline void from_json(const nlohmann::json& j, LolChatLobbyPlayerStatus_t& v) {
    if(auto it = j.find("currentLobbyStatus"); it != j.end() && !it->is_null())
      v.currentLobbyStatus = it->get<LolChatLobbyStatus_t>();
    if(auto it = j.find("lastQueuedLobbyStatus"); it != j.end() && !it->is_null())
      v.lastQueuedLobbyStatus = it->get<LolChatLobbyStatus_t>();
  }
  inline std::string to_string(const LolChatLobbyPlayerStatus_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
