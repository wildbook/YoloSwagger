#pragma once
#include <json.hpp>
#include <optional>
#include "LolMatchmakingMatchmakingSearchState.hpp"
#include "LolMatchmakingMatchmakingSearchErrorResource.hpp"
#include "LolMatchmakingMatchmakingDodgeData.hpp"
#include "LolMatchmakingMatchmakingLowPriorityData.hpp"
#include "LolMatchmakingMatchmakingReadyCheckResource.hpp"
namespace leagueapi {
  struct LolMatchmakingMatchmakingSearchResource_t {
    std::string lobbyId;
    LolMatchmakingMatchmakingReadyCheckResource_t readyCheck;
    float estimatedQueueTime;
    LolMatchmakingMatchmakingLowPriorityData_t lowPriorityData;
    LolMatchmakingMatchmakingSearchState_t searchState;
    int32_t queueId;
    float timeInQueue;
    LolMatchmakingMatchmakingDodgeData_t dodgeData;
    bool isCurrentlyInQueue;
    std::vector<LolMatchmakingMatchmakingSearchErrorResource_t> errors;
  };

  inline void to_json(nlohmann::json& j, const LolMatchmakingMatchmakingSearchResource_t& v) {
    j["lobbyId"] = v.lobbyId;
    j["readyCheck"] = v.readyCheck;
    j["estimatedQueueTime"] = v.estimatedQueueTime;
    j["lowPriorityData"] = v.lowPriorityData;
    j["searchState"] = v.searchState;
    j["queueId"] = v.queueId;
    j["timeInQueue"] = v.timeInQueue;
    j["dodgeData"] = v.dodgeData;
    j["isCurrentlyInQueue"] = v.isCurrentlyInQueue;
    j["errors"] = v.errors;
  }

  inline void from_json(const nlohmann::json& j, LolMatchmakingMatchmakingSearchResource_t& v) {
    v.lobbyId = j.at("lobbyId").get<std::string>();
    v.readyCheck = j.at("readyCheck").get<LolMatchmakingMatchmakingReadyCheckResource_t>();
    v.estimatedQueueTime = j.at("estimatedQueueTime").get<float>();
    v.lowPriorityData = j.at("lowPriorityData").get<LolMatchmakingMatchmakingLowPriorityData_t>();
    v.searchState = j.at("searchState").get<LolMatchmakingMatchmakingSearchState_t>();
    v.queueId = j.at("queueId").get<int32_t>();
    v.timeInQueue = j.at("timeInQueue").get<float>();
    v.dodgeData = j.at("dodgeData").get<LolMatchmakingMatchmakingDodgeData_t>();
    v.isCurrentlyInQueue = j.at("isCurrentlyInQueue").get<bool>();
    v.errors = j.at("errors").get<std::vector<LolMatchmakingMatchmakingSearchErrorResource_t>>();
  }
  inline std::string to_string(const LolMatchmakingMatchmakingSearchResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
