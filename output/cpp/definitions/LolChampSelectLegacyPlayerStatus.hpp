#pragma once
#include <json.hpp>
#include <optional>
#include "LolChampSelectLegacyLobbyStatus.hpp"
namespace leagueapi {
  struct LolChampSelectLegacyPlayerStatus_t {
    std::optional<LolChampSelectLegacyLobbyStatus_t> lastQueuedLobbyStatus;
    std::optional<LolChampSelectLegacyLobbyStatus_t> currentLobbyStatus;
  };

  inline void to_json(nlohmann::json& j, const LolChampSelectLegacyPlayerStatus_t& v) {
    if(v.lastQueuedLobbyStatus)
      j["lastQueuedLobbyStatus"] = *v.lastQueuedLobbyStatus;
    if(v.currentLobbyStatus)
      j["currentLobbyStatus"] = *v.currentLobbyStatus;
  }

  inline void from_json(const nlohmann::json& j, LolChampSelectLegacyPlayerStatus_t& v) {
    if(auto it = j.find("lastQueuedLobbyStatus"); it != j.end() && !it->is_null())
      v.lastQueuedLobbyStatus = it->get<LolChampSelectLegacyLobbyStatus_t>();
    if(auto it = j.find("currentLobbyStatus"); it != j.end() && !it->is_null())
      v.currentLobbyStatus = it->get<LolChampSelectLegacyLobbyStatus_t>();
  }
  inline std::string to_string(const LolChampSelectLegacyPlayerStatus_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
