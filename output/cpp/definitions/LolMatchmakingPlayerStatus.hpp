#pragma once
#include <json.hpp>
#include <optional>
#include "LolMatchmakingLobbyStatus.hpp"
namespace leagueapi {
  struct LolMatchmakingPlayerStatus_t {
    std::optional<LolMatchmakingLobbyStatus_t> currentLobbyStatus;
    std::optional<LolMatchmakingLobbyStatus_t> lastQueuedLobbyStatus;
  };

  inline void to_json(nlohmann::json& j, const LolMatchmakingPlayerStatus_t& v) {
    if(v.currentLobbyStatus)
      j["currentLobbyStatus"] = *v.currentLobbyStatus;
    if(v.lastQueuedLobbyStatus)
      j["lastQueuedLobbyStatus"] = *v.lastQueuedLobbyStatus;
  }

  inline void from_json(const nlohmann::json& j, LolMatchmakingPlayerStatus_t& v) {
    if(auto it = j.find("currentLobbyStatus"); it != j.end() !it->is_null())
      v.currentLobbyStatus = it->get<LolMatchmakingLobbyStatus_t>();
    if(auto it = j.find("lastQueuedLobbyStatus"); it != j.end() !it->is_null())
      v.lastQueuedLobbyStatus = it->get<LolMatchmakingLobbyStatus_t>();
  }
}
