#pragma once
#include <json.hpp>
#include <optional>
#include "LolSuggestedPlayersSuggestedPlayersLobbyStatus.hpp"
namespace leagueapi {
  struct LolSuggestedPlayersSuggestedPlayersPlayerStatus_t {
    std::optional<LolSuggestedPlayersSuggestedPlayersLobbyStatus_t> lastQueuedLobbyStatus;
    std::optional<LolSuggestedPlayersSuggestedPlayersLobbyStatus_t> currentLobbyStatus;
  };

  inline void to_json(nlohmann::json& j, const LolSuggestedPlayersSuggestedPlayersPlayerStatus_t& v) {
    if(v.lastQueuedLobbyStatus)
      j["lastQueuedLobbyStatus"] = *v.lastQueuedLobbyStatus;
    if(v.currentLobbyStatus)
      j["currentLobbyStatus"] = *v.currentLobbyStatus;
  }

  inline void from_json(const nlohmann::json& j, LolSuggestedPlayersSuggestedPlayersPlayerStatus_t& v) {
    if(auto it = j.find("lastQueuedLobbyStatus"); it != j.end() && !it->is_null())
      v.lastQueuedLobbyStatus = it->get<LolSuggestedPlayersSuggestedPlayersLobbyStatus_t>();
    if(auto it = j.find("currentLobbyStatus"); it != j.end() && !it->is_null())
      v.currentLobbyStatus = it->get<LolSuggestedPlayersSuggestedPlayersLobbyStatus_t>();
  }
  inline std::string to_string(const LolSuggestedPlayersSuggestedPlayersPlayerStatus_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
