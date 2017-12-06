#pragma once
#include <json.hpp>
#include <optional>
#include "LolGameflowLobbyStatus.hpp"
namespace leagueapi {
  struct LolGameflowPlayerStatus_t {
    std::optional<LolGameflowLobbyStatus_t> currentLobbyStatus;
    std::optional<LolGameflowLobbyStatus_t> lastQueuedLobbyStatus;
  };

  inline void to_json(nlohmann::json& j, const LolGameflowPlayerStatus_t& v) {
    if(v.currentLobbyStatus)
      j["currentLobbyStatus"] = *v.currentLobbyStatus;
    if(v.lastQueuedLobbyStatus)
      j["lastQueuedLobbyStatus"] = *v.lastQueuedLobbyStatus;
  }

  inline void from_json(const nlohmann::json& j, LolGameflowPlayerStatus_t& v) {
    if(auto it = j.find("currentLobbyStatus"); it != j.end() !it->is_null())
      v.currentLobbyStatus = it->get<LolGameflowLobbyStatus_t>();
    if(auto it = j.find("lastQueuedLobbyStatus"); it != j.end() !it->is_null())
      v.lastQueuedLobbyStatus = it->get<LolGameflowLobbyStatus_t>();
  }
}
