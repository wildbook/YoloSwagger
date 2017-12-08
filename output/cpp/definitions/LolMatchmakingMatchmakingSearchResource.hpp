#pragma once
#include <json.hpp>
#include <optional>
#include "LolMatchmakingMatchmakingLowPriorityData.hpp"
#include "LolMatchmakingMatchmakingSearchState.hpp"
#include "LolMatchmakingMatchmakingDodgeData.hpp"
#include "LolMatchmakingMatchmakingSearchErrorResource.hpp"
#include "LolMatchmakingMatchmakingReadyCheckResource.hpp"
namespace leagueapi {
  struct LolMatchmakingMatchmakingSearchResource_t {
    int32_t queueId;
    LolMatchmakingMatchmakingSearchState_t searchState;
    bool isCurrentlyInQueue;
    LolMatchmakingMatchmakingReadyCheckResource_t readyCheck;
    float timeInQueue;
    LolMatchmakingMatchmakingLowPriorityData_t lowPriorityData;
    float estimatedQueueTime;
    LolMatchmakingMatchmakingDodgeData_t dodgeData;
    std::vector<LolMatchmakingMatchmakingSearchErrorResource_t> errors;
    std::string lobbyId;
  };

  inline void to_json(nlohmann::json& j, const LolMatchmakingMatchmakingSearchResource_t& v) {
    j["queueId"] = v.queueId;
    j["searchState"] = v.searchState;
    j["isCurrentlyInQueue"] = v.isCurrentlyInQueue;
    j["readyCheck"] = v.readyCheck;
    j["timeInQueue"] = v.timeInQueue;
    j["lowPriorityData"] = v.lowPriorityData;
    j["estimatedQueueTime"] = v.estimatedQueueTime;
    j["dodgeData"] = v.dodgeData;
    j["errors"] = v.errors;
    j["lobbyId"] = v.lobbyId;
  }

  inline void from_json(const nlohmann::json& j, LolMatchmakingMatchmakingSearchResource_t& v) {
    v.queueId = j.at("queueId").get<int32_t>();
    v.searchState = j.at("searchState").get<LolMatchmakingMatchmakingSearchState_t>();
    v.isCurrentlyInQueue = j.at("isCurrentlyInQueue").get<bool>();
    v.readyCheck = j.at("readyCheck").get<LolMatchmakingMatchmakingReadyCheckResource_t>();
    v.timeInQueue = j.at("timeInQueue").get<float>();
    v.lowPriorityData = j.at("lowPriorityData").get<LolMatchmakingMatchmakingLowPriorityData_t>();
    v.estimatedQueueTime = j.at("estimatedQueueTime").get<float>();
    v.dodgeData = j.at("dodgeData").get<LolMatchmakingMatchmakingDodgeData_t>();
    v.errors = j.at("errors").get<std::vector<LolMatchmakingMatchmakingSearchErrorResource_t>>();
    v.lobbyId = j.at("lobbyId").get<std::string>();
  }
  inline std::string to_string(const LolMatchmakingMatchmakingSearchResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
