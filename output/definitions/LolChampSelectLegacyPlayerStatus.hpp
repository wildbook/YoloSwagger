#ifndef SWAGGER_TYPES_LolChampSelectLegacyPlayerStatus_HPP
#define SWAGGER_TYPES_LolChampSelectLegacyPlayerStatus_HPP
#include <json.hpp>
#include "LolChampSelectLegacyLobbyStatus.hpp"
namespace leagueapi {
  // 
  struct LolChampSelectLegacyPlayerStatus {
    // 
    LolChampSelectLegacyLobbyStatus currentLobbyStatus;
    // 
    LolChampSelectLegacyLobbyStatus lastQueuedLobbyStatus;
  };

  void to_json(nlohmann::json& j, const LolChampSelectLegacyPlayerStatus& v) {
    j["currentLobbyStatus"] = v.currentLobbyStatus;
    j["lastQueuedLobbyStatus"] = v.lastQueuedLobbyStatus;
  }

  void from_json(const nlohmann::json& j, LolChampSelectLegacyPlayerStatus& v) {
    v.currentLobbyStatus = j.at("currentLobbyStatus").get<LolChampSelectLegacyLobbyStatus>;
    v.lastQueuedLobbyStatus = j.at("lastQueuedLobbyStatus").get<LolChampSelectLegacyLobbyStatus>;
  }

}
#endif // SWAGGER_TYPES_LolChampSelectLegacyPlayerStatus_HPP
