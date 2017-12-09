#pragma once
#include <json.hpp>
#include <optional>
#include "LolMatchmakingMatchmakingSearchErrorResource.hpp"
#include "LolMatchmakingMatchmakingReadyCheckResource.hpp"
#include "LolMatchmakingMatchmakingSearchState.hpp"
#include "LolMatchmakingMatchmakingLowPriorityData.hpp"
#include "LolMatchmakingMatchmakingDodgeData.hpp"
namespace leagueapi {
  struct LolMatchmakingMatchmakingSearchResource_t {
    float estimatedQueueTime;
    LolMatchmakingMatchmakingReadyCheckResource_t readyCheck;
    bool isCurrentlyInQueue;
    int32_t queueId;
    LolMatchmakingMatchmakingSearchState_t searchState;
    float timeInQueue;
    LolMatchmakingMatchmakingDodgeData_t dodgeData;
    std::string lobbyId;
    std::vector<LolMatchmakingMatchmakingSearchErrorResource_t> errors;
    LolMatchmakingMatchmakingLowPriorityData_t lowPriorityData;
  };

  inline void to_json(nlohmann::json& j, const LolMatchmakingMatchmakingSearchResource_t& v) {
    j["estimatedQueueTime"] = v.estimatedQueueTime;
    j["readyCheck"] = v.readyCheck;
    j["isCurrentlyInQueue"] = v.isCurrentlyInQueue;
    j["queueId"] = v.queueId;
    j["searchState"] = v.searchState;
    j["timeInQueue"] = v.timeInQueue;
    j["dodgeData"] = v.dodgeData;
    j["lobbyId"] = v.lobbyId;
    j["errors"] = v.errors;
    j["lowPriorityData"] = v.lowPriorityData;
  }

  inline void from_json(const nlohmann::json& j, LolMatchmakingMatchmakingSearchResource_t& v) {
    v.estimatedQueueTime = j.at("estimatedQueueTime").get<float>();
    v.readyCheck = j.at("readyCheck").get<LolMatchmakingMatchmakingReadyCheckResource_t>();
    v.isCurrentlyInQueue = j.at("isCurrentlyInQueue").get<bool>();
    v.queueId = j.at("queueId").get<int32_t>();
    v.searchState = j.at("searchState").get<LolMatchmakingMatchmakingSearchState_t>();
    v.timeInQueue = j.at("timeInQueue").get<float>();
    v.dodgeData = j.at("dodgeData").get<LolMatchmakingMatchmakingDodgeData_t>();
    v.lobbyId = j.at("lobbyId").get<std::string>();
    v.errors = j.at("errors").get<std::vector<LolMatchmakingMatchmakingSearchErrorResource_t>>();
    v.lowPriorityData = j.at("lowPriorityData").get<LolMatchmakingMatchmakingLowPriorityData_t>();
  }
  inline std::string to_string(const LolMatchmakingMatchmakingSearchResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
