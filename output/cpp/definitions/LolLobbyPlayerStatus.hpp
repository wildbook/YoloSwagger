#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyLobbyStatus.hpp"
namespace leagueapi {
  struct LolLobbyPlayerStatus_t {
    std::optional<LolLobbyLobbyStatus_t> lastQueuedLobbyStatus;
    std::optional<LolLobbyLobbyStatus_t> currentLobbyStatus;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyPlayerStatus_t& v) {
    if(v.lastQueuedLobbyStatus)
      j["lastQueuedLobbyStatus"] = *v.lastQueuedLobbyStatus;
    if(v.currentLobbyStatus)
      j["currentLobbyStatus"] = *v.currentLobbyStatus;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyPlayerStatus_t& v) {
    if(auto it = j.find("lastQueuedLobbyStatus"); it != j.end() && !it->is_null())
      v.lastQueuedLobbyStatus = it->get<LolLobbyLobbyStatus_t>();
    if(auto it = j.find("currentLobbyStatus"); it != j.end() && !it->is_null())
      v.currentLobbyStatus = it->get<LolLobbyLobbyStatus_t>();
  }
  inline std::string to_string(const LolLobbyPlayerStatus_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
