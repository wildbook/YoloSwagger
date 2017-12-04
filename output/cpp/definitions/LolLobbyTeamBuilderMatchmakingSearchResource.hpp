#ifndef SWAGGER_TYPES_LolLobbyTeamBuilderMatchmakingSearchResource_HPP
#define SWAGGER_TYPES_LolLobbyTeamBuilderMatchmakingSearchResource_HPP
#include <json.hpp>
#include "LolLobbyTeamBuilderMatchmakingSearchErrorResource.hpp"
#include "LolLobbyTeamBuilderMatchmakingLowPriorityData.hpp"
#include "LolLobbyTeamBuilderMatchmakingDodgeData.hpp"
#include "LolLobbyTeamBuilderMatchmakingReadyCheckResource.hpp"
#include "LolLobbyTeamBuilderMatchmakingSearchState.hpp"
namespace leagueapi {
  // 
  struct LolLobbyTeamBuilderMatchmakingSearchResource {
    // 
    std::string lobbyId;
    // 
    int32_t queueId;
    // 
    std::vector<LolLobbyTeamBuilderMatchmakingSearchErrorResource> errors;
    // 
    float timeInQueue;
    // 
    LolLobbyTeamBuilderMatchmakingLowPriorityData lowPriorityData;
    // 
    LolLobbyTeamBuilderMatchmakingDodgeData dodgeData;
    // 
    bool isCurrentlyInQueue;
    // 
    LolLobbyTeamBuilderMatchmakingReadyCheckResource readyCheck;
    // 
    float estimatedQueueTime;
    // 
    LolLobbyTeamBuilderMatchmakingSearchState searchState;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderMatchmakingSearchResource& v) {
    j["lobbyId"] = v.lobbyId;
    j["queueId"] = v.queueId;
    j["errors"] = v.errors;
    j["timeInQueue"] = v.timeInQueue;
    j["lowPriorityData"] = v.lowPriorityData;
    j["dodgeData"] = v.dodgeData;
    j["isCurrentlyInQueue"] = v.isCurrentlyInQueue;
    j["readyCheck"] = v.readyCheck;
    j["estimatedQueueTime"] = v.estimatedQueueTime;
    j["searchState"] = v.searchState;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderMatchmakingSearchResource& v) {
    v.lobbyId = j.at("lobbyId").get<std::string>;
    v.queueId = j.at("queueId").get<int32_t>;
    v.errors = j.at("errors").get<std::vector<LolLobbyTeamBuilderMatchmakingSearchErrorResource>>;
    v.timeInQueue = j.at("timeInQueue").get<float>;
    v.lowPriorityData = j.at("lowPriorityData").get<LolLobbyTeamBuilderMatchmakingLowPriorityData>;
    v.dodgeData = j.at("dodgeData").get<LolLobbyTeamBuilderMatchmakingDodgeData>;
    v.isCurrentlyInQueue = j.at("isCurrentlyInQueue").get<bool>;
    v.readyCheck = j.at("readyCheck").get<LolLobbyTeamBuilderMatchmakingReadyCheckResource>;
    v.estimatedQueueTime = j.at("estimatedQueueTime").get<float>;
    v.searchState = j.at("searchState").get<LolLobbyTeamBuilderMatchmakingSearchState>;
  }

}
#endif // SWAGGER_TYPES_LolLobbyTeamBuilderMatchmakingSearchResource_HPP
