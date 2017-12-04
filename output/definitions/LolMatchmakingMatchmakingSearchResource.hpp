#ifndef SWAGGER_TYPES_LolMatchmakingMatchmakingSearchResource_HPP
#define SWAGGER_TYPES_LolMatchmakingMatchmakingSearchResource_HPP
#include <json.hpp>
#include "LolMatchmakingMatchmakingSearchState.hpp"
#include "LolMatchmakingMatchmakingLowPriorityData.hpp"
#include "LolMatchmakingMatchmakingReadyCheckResource.hpp"
#include "LolMatchmakingMatchmakingDodgeData.hpp"
#include "LolMatchmakingMatchmakingSearchErrorResource.hpp"
namespace leagueapi {
  // 
  struct LolMatchmakingMatchmakingSearchResource {
    // 
    LolMatchmakingMatchmakingDodgeData dodgeData;
    // 
    std::vector<LolMatchmakingMatchmakingSearchErrorResource> errors;
    // 
    float estimatedQueueTime;
    // 
    bool isCurrentlyInQueue;
    // 
    std::string lobbyId;
    // 
    LolMatchmakingMatchmakingLowPriorityData lowPriorityData;
    // 
    int32_t queueId;
    // 
    LolMatchmakingMatchmakingReadyCheckResource readyCheck;
    // 
    LolMatchmakingMatchmakingSearchState searchState;
    // 
    float timeInQueue;
  };

  inline void to_json(nlohmann::json& j, const LolMatchmakingMatchmakingSearchResource& v) {
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

  inline void from_json(const nlohmann::json& j, LolMatchmakingMatchmakingSearchResource& v) {
    v.dodgeData = j.at("dodgeData").get<LolMatchmakingMatchmakingDodgeData>;
    v.errors = j.at("errors").get<std::vector<LolMatchmakingMatchmakingSearchErrorResource>>;
    v.estimatedQueueTime = j.at("estimatedQueueTime").get<float>;
    v.isCurrentlyInQueue = j.at("isCurrentlyInQueue").get<bool>;
    v.lobbyId = j.at("lobbyId").get<std::string>;
    v.lowPriorityData = j.at("lowPriorityData").get<LolMatchmakingMatchmakingLowPriorityData>;
    v.queueId = j.at("queueId").get<int32_t>;
    v.readyCheck = j.at("readyCheck").get<LolMatchmakingMatchmakingReadyCheckResource>;
    v.searchState = j.at("searchState").get<LolMatchmakingMatchmakingSearchState>;
    v.timeInQueue = j.at("timeInQueue").get<float>;
  }

}
#endif // SWAGGER_TYPES_LolMatchmakingMatchmakingSearchResource_HPP
