#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyTeamBuilderMatchmakingSearchState.hpp"
#include "LolLobbyTeamBuilderMatchmakingReadyCheckResource.hpp"
#include "LolLobbyTeamBuilderMatchmakingDodgeData.hpp"
#include "LolLobbyTeamBuilderMatchmakingSearchErrorResource.hpp"
#include "LolLobbyTeamBuilderMatchmakingLowPriorityData.hpp"
namespace leagueapi {
  struct LolLobbyTeamBuilderMatchmakingSearchResource_t {
    int32_t queueId;
    bool isCurrentlyInQueue;
    LolLobbyTeamBuilderMatchmakingReadyCheckResource_t readyCheck;
    LolLobbyTeamBuilderMatchmakingDodgeData_t dodgeData;
    std::vector<LolLobbyTeamBuilderMatchmakingSearchErrorResource_t> errors;
    float estimatedQueueTime;
    std::string lobbyId;
    LolLobbyTeamBuilderMatchmakingSearchState_t searchState;
    LolLobbyTeamBuilderMatchmakingLowPriorityData_t lowPriorityData;
    float timeInQueue;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderMatchmakingSearchResource_t& v) {
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

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderMatchmakingSearchResource_t& v) {
    v.queueId = j.at("queueId").get<int32_t>();
    v.isCurrentlyInQueue = j.at("isCurrentlyInQueue").get<bool>();
    v.readyCheck = j.at("readyCheck").get<LolLobbyTeamBuilderMatchmakingReadyCheckResource_t>();
    v.dodgeData = j.at("dodgeData").get<LolLobbyTeamBuilderMatchmakingDodgeData_t>();
    v.errors = j.at("errors").get<std::vector<LolLobbyTeamBuilderMatchmakingSearchErrorResource_t>>();
    v.estimatedQueueTime = j.at("estimatedQueueTime").get<float>();
    v.lobbyId = j.at("lobbyId").get<std::string>();
    v.searchState = j.at("searchState").get<LolLobbyTeamBuilderMatchmakingSearchState_t>();
    v.lowPriorityData = j.at("lowPriorityData").get<LolLobbyTeamBuilderMatchmakingLowPriorityData_t>();
    v.timeInQueue = j.at("timeInQueue").get<float>();
  }
}
