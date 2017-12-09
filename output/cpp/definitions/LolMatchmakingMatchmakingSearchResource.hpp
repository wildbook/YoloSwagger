#pragma once
#include <json.hpp>
#include <optional>
#include "LolMatchmakingMatchmakingReadyCheckResource.hpp"
#include "LolMatchmakingMatchmakingLowPriorityData.hpp"
#include "LolMatchmakingMatchmakingSearchState.hpp"
#include "LolMatchmakingMatchmakingDodgeData.hpp"
#include "LolMatchmakingMatchmakingSearchErrorResource.hpp"
namespace leagueapi {
  struct LolMatchmakingMatchmakingSearchResource_t {
    LolMatchmakingMatchmakingReadyCheckResource_t readyCheck;
    std::vector<LolMatchmakingMatchmakingSearchErrorResource_t> errors;
    LolMatchmakingMatchmakingDodgeData_t dodgeData;
    std::string lobbyId;
    LolMatchmakingMatchmakingSearchState_t searchState;
    float timeInQueue;
    LolMatchmakingMatchmakingLowPriorityData_t lowPriorityData;
    int32_t queueId;
    float estimatedQueueTime;
    bool isCurrentlyInQueue;
  };

  inline void to_json(nlohmann::json& j, const LolMatchmakingMatchmakingSearchResource_t& v) {
    j["readyCheck"] = v.readyCheck;
    j["errors"] = v.errors;
    j["dodgeData"] = v.dodgeData;
    j["lobbyId"] = v.lobbyId;
    j["searchState"] = v.searchState;
    j["timeInQueue"] = v.timeInQueue;
    j["lowPriorityData"] = v.lowPriorityData;
    j["queueId"] = v.queueId;
    j["estimatedQueueTime"] = v.estimatedQueueTime;
    j["isCurrentlyInQueue"] = v.isCurrentlyInQueue;
  }

  inline void from_json(const nlohmann::json& j, LolMatchmakingMatchmakingSearchResource_t& v) {
    v.readyCheck = j.at("readyCheck").get<LolMatchmakingMatchmakingReadyCheckResource_t>();
    v.errors = j.at("errors").get<std::vector<LolMatchmakingMatchmakingSearchErrorResource_t>>();
    v.dodgeData = j.at("dodgeData").get<LolMatchmakingMatchmakingDodgeData_t>();
    v.lobbyId = j.at("lobbyId").get<std::string>();
    v.searchState = j.at("searchState").get<LolMatchmakingMatchmakingSearchState_t>();
    v.timeInQueue = j.at("timeInQueue").get<float>();
    v.lowPriorityData = j.at("lowPriorityData").get<LolMatchmakingMatchmakingLowPriorityData_t>();
    v.queueId = j.at("queueId").get<int32_t>();
    v.estimatedQueueTime = j.at("estimatedQueueTime").get<float>();
    v.isCurrentlyInQueue = j.at("isCurrentlyInQueue").get<bool>();
  }
  inline std::string to_string(const LolMatchmakingMatchmakingSearchResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
