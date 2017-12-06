#pragma once
#include <json.hpp>
#include <optional>
#include "LolMatchmakingMatchmakingSearchState.hpp"
#include "LolMatchmakingMatchmakingDodgeData.hpp"
#include "LolMatchmakingMatchmakingReadyCheckResource.hpp"
#include "LolMatchmakingMatchmakingLowPriorityData.hpp"
#include "LolMatchmakingMatchmakingSearchErrorResource.hpp"
namespace leagueapi {
  struct LolMatchmakingMatchmakingSearchResource_t {
    LolMatchmakingMatchmakingDodgeData_t dodgeData;
    std::vector<LolMatchmakingMatchmakingSearchErrorResource_t> errors;
    float estimatedQueueTime;
    bool isCurrentlyInQueue;
    std::string lobbyId;
    LolMatchmakingMatchmakingLowPriorityData_t lowPriorityData;
    int32_t queueId;
    LolMatchmakingMatchmakingReadyCheckResource_t readyCheck;
    LolMatchmakingMatchmakingSearchState_t searchState;
    float timeInQueue;
  };

  inline void to_json(nlohmann::json& j, const LolMatchmakingMatchmakingSearchResource_t& v) {
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

  inline void from_json(const nlohmann::json& j, LolMatchmakingMatchmakingSearchResource_t& v) {
    v.dodgeData = j.at("dodgeData").get<LolMatchmakingMatchmakingDodgeData_t>();
    v.errors = j.at("errors").get<std::vector<LolMatchmakingMatchmakingSearchErrorResource_t>>();
    v.estimatedQueueTime = j.at("estimatedQueueTime").get<float>();
    v.isCurrentlyInQueue = j.at("isCurrentlyInQueue").get<bool>();
    v.lobbyId = j.at("lobbyId").get<std::string>();
    v.lowPriorityData = j.at("lowPriorityData").get<LolMatchmakingMatchmakingLowPriorityData_t>();
    v.queueId = j.at("queueId").get<int32_t>();
    v.readyCheck = j.at("readyCheck").get<LolMatchmakingMatchmakingReadyCheckResource_t>();
    v.searchState = j.at("searchState").get<LolMatchmakingMatchmakingSearchState_t>();
    v.timeInQueue = j.at("timeInQueue").get<float>();
  }
}
