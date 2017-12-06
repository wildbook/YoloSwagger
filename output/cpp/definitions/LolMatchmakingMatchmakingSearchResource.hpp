#pragma once
#include <json.hpp>
#include <optional>
#include "LolMatchmakingMatchmakingDodgeData.hpp"
#include "LolMatchmakingMatchmakingReadyCheckResource.hpp"
#include "LolMatchmakingMatchmakingSearchErrorResource.hpp"
#include "LolMatchmakingMatchmakingLowPriorityData.hpp"
#include "LolMatchmakingMatchmakingSearchState.hpp"
namespace leagueapi {
  struct LolMatchmakingMatchmakingSearchResource_t {
    int32_t queueId;
    bool isCurrentlyInQueue;
    LolMatchmakingMatchmakingReadyCheckResource_t readyCheck;
    LolMatchmakingMatchmakingDodgeData_t dodgeData;
    std::vector<LolMatchmakingMatchmakingSearchErrorResource_t> errors;
    float estimatedQueueTime;
    std::string lobbyId;
    LolMatchmakingMatchmakingSearchState_t searchState;
    LolMatchmakingMatchmakingLowPriorityData_t lowPriorityData;
    float timeInQueue;
  };

  inline void to_json(nlohmann::json& j, const LolMatchmakingMatchmakingSearchResource_t& v) {
    j["queueId"] = v.queueId;
    j["isCurrentlyInQueue"] = v.isCurrentlyInQueue;
    j["readyCheck"] = v.readyCheck;
    j["dodgeData"] = v.dodgeData;
    j["errors"] = v.errors;
    j["estimatedQueueTime"] = v.estimatedQueueTime;
    j["lobbyId"] = v.lobbyId;
    j["searchState"] = v.searchState;
    j["lowPriorityData"] = v.lowPriorityData;
    j["timeInQueue"] = v.timeInQueue;
  }

  inline void from_json(const nlohmann::json& j, LolMatchmakingMatchmakingSearchResource_t& v) {
    v.queueId = j.at("queueId").get<int32_t>();
    v.isCurrentlyInQueue = j.at("isCurrentlyInQueue").get<bool>();
    v.readyCheck = j.at("readyCheck").get<LolMatchmakingMatchmakingReadyCheckResource_t>();
    v.dodgeData = j.at("dodgeData").get<LolMatchmakingMatchmakingDodgeData_t>();
    v.errors = j.at("errors").get<std::vector<LolMatchmakingMatchmakingSearchErrorResource_t>>();
    v.estimatedQueueTime = j.at("estimatedQueueTime").get<float>();
    v.lobbyId = j.at("lobbyId").get<std::string>();
    v.searchState = j.at("searchState").get<LolMatchmakingMatchmakingSearchState_t>();
    v.lowPriorityData = j.at("lowPriorityData").get<LolMatchmakingMatchmakingLowPriorityData_t>();
    v.timeInQueue = j.at("timeInQueue").get<float>();
  }
}
