#ifndef SWAGGER_TYPES_LolSuggestedPlayersSuggestedPlayersPlayerStatus_HPP
#define SWAGGER_TYPES_LolSuggestedPlayersSuggestedPlayersPlayerStatus_HPP
#include <json.hpp>
#include "LolSuggestedPlayersSuggestedPlayersLobbyStatus.hpp"
namespace test {
  // 
  struct LolSuggestedPlayersSuggestedPlayersPlayerStatus {
'    // 
    LolSuggestedPlayersSuggestedPlayersLobbyStatus currentLobbyStatus;
    // 
    LolSuggestedPlayersSuggestedPlayersLobbyStatus lastQueuedLobbyStatus;
  };

  void to_json(nlohmann::json& j, const LolSuggestedPlayersSuggestedPlayersPlayerStatus& v) {
    j["currentLobbyStatus"] = v.currentLobbyStatus;
    j["lastQueuedLobbyStatus"] = v.lastQueuedLobbyStatus;
  }

  void from_json(const nlohmann::json& j, LolSuggestedPlayersSuggestedPlayersPlayerStatus& v) {
    v.currentLobbyStatus = j.at("currentLobbyStatus").get<LolSuggestedPlayersSuggestedPlayersLobbyStatus>;
    v.lastQueuedLobbyStatus = j.at("lastQueuedLobbyStatus").get<LolSuggestedPlayersSuggestedPlayersLobbyStatus>;
  }

}
#endif // SWAGGER_TYPES_LolSuggestedPlayersSuggestedPlayersPlayerStatus_HPP
