#ifndef SWAGGER_TYPES_LolMatchmakingMatchmakingSearchResource_HPP
#define SWAGGER_TYPES_LolMatchmakingMatchmakingSearchResource_HPP
#include <json.hpp>
#include "LolMatchmakingMatchmakingReadyCheckResource.hpp"
#include "LolMatchmakingMatchmakingDodgeData.hpp"
#include "LolMatchmakingMatchmakingSearchState.hpp"
#include "LolMatchmakingMatchmakingSearchErrorResource.hpp"
#include "LolMatchmakingMatchmakingLowPriorityData.hpp"
namespace leagueapi {
  // 
  struct LolMatchmakingMatchmakingSearchResource {
    // 
    std::string lobbyId;
    // 
    int32_t queueId;
    // 
    std::vector<LolMatchmakingMatchmakingSearchErrorResource> errors;
    // 
    float timeInQueue;
    // 
    LolMatchmakingMatchmakingLowPriorityData lowPriorityData;
    // 
    LolMatchmakingMatchmakingDodgeData dodgeData;
    // 
    bool isCurrentlyInQueue;
    // 
    LolMatchmakingMatchmakingReadyCheckResource readyCheck;
    // 
    float estimatedQueueTime;
    // 
    LolMatchmakingMatchmakingSearchState searchState;
  };

  inline void to_json(nlohmann::json& j, const LolMatchmakingMatchmakingSearchResource& v) {
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

  inline void from_json(const nlohmann::json& j, LolMatchmakingMatchmakingSearchResource& v) {
    v.lobbyId = j.at("lobbyId").get<std::string>;
    v.queueId = j.at("queueId").get<int32_t>;
    v.errors = j.at("errors").get<std::vector<LolMatchmakingMatchmakingSearchErrorResource>>;
    v.timeInQueue = j.at("timeInQueue").get<float>;
    v.lowPriorityData = j.at("lowPriorityData").get<LolMatchmakingMatchmakingLowPriorityData>;
    v.dodgeData = j.at("dodgeData").get<LolMatchmakingMatchmakingDodgeData>;
    v.isCurrentlyInQueue = j.at("isCurrentlyInQueue").get<bool>;
    v.readyCheck = j.at("readyCheck").get<LolMatchmakingMatchmakingReadyCheckResource>;
    v.estimatedQueueTime = j.at("estimatedQueueTime").get<float>;
    v.searchState = j.at("searchState").get<LolMatchmakingMatchmakingSearchState>;
  }

}
#endif // SWAGGER_TYPES_LolMatchmakingMatchmakingSearchResource_HPP
