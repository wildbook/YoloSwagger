#ifndef SWAGGER_TYPES_LolLobbyTeamBuilderMatchmakingSearchResource_HPP
#define SWAGGER_TYPES_LolLobbyTeamBuilderMatchmakingSearchResource_HPP
#include <json.hpp>
#include "LolLobbyTeamBuilderMatchmakingDodgeData.hpp"
#include "LolLobbyTeamBuilderMatchmakingSearchErrorResource.hpp"
#include "LolLobbyTeamBuilderMatchmakingLowPriorityData.hpp"
#include "LolLobbyTeamBuilderMatchmakingReadyCheckResource.hpp"
#include "LolLobbyTeamBuilderMatchmakingSearchState.hpp"
namespace leagueapi {
  // 
  struct LolLobbyTeamBuilderMatchmakingSearchResource {
    // 
    LolLobbyTeamBuilderMatchmakingDodgeData dodgeData;
    // 
    std::vector<LolLobbyTeamBuilderMatchmakingSearchErrorResource> errors;
    // 
    float estimatedQueueTime;
    // 
    bool isCurrentlyInQueue;
    // 
    std::string lobbyId;
    // 
    LolLobbyTeamBuilderMatchmakingLowPriorityData lowPriorityData;
    // 
    int32_t queueId;
    // 
    LolLobbyTeamBuilderMatchmakingReadyCheckResource readyCheck;
    // 
    LolLobbyTeamBuilderMatchmakingSearchState searchState;
    // 
    float timeInQueue;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderMatchmakingSearchResource& v) {
    j["dodgeData"] = v.dodgeData;
    j["errors"] = v.errors;
    j["estimatedQueueTime"] = v.estimatedQueueTime;
    j["isCurrentlyInQueue"] = v.isCurrentlyInQueue;
    j["lobbyId"] = v.lobbyId;
    j["lowPriorityData"] = v.lowPriorityData;
    j["queueId"] = v.queueId;
    j["readyCheck"] = v.readyCheck;
    j["searchState"] = v.searchState;
    j["timeInQueue"] = v.timeInQueue;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderMatchmakingSearchResource& v) {
    v.dodgeData = j.at("dodgeData").get<LolLobbyTeamBuilderMatchmakingDodgeData>;
    v.errors = j.at("errors").get<std::vector<LolLobbyTeamBuilderMatchmakingSearchErrorResource>>;
    v.estimatedQueueTime = j.at("estimatedQueueTime").get<float>;
    v.isCurrentlyInQueue = j.at("isCurrentlyInQueue").get<bool>;
    v.lobbyId = j.at("lobbyId").get<std::string>;
    v.lowPriorityData = j.at("lowPriorityData").get<LolLobbyTeamBuilderMatchmakingLowPriorityData>;
    v.queueId = j.at("queueId").get<int32_t>;
    v.readyCheck = j.at("readyCheck").get<LolLobbyTeamBuilderMatchmakingReadyCheckResource>;
    v.searchState = j.at("searchState").get<LolLobbyTeamBuilderMatchmakingSearchState>;
    v.timeInQueue = j.at("timeInQueue").get<float>;
  }

}
#endif // SWAGGER_TYPES_LolLobbyTeamBuilderMatchmakingSearchResource_HPP
