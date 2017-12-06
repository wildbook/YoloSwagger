#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyTeamBuilderMatchmakingDodgeData.hpp"
#include "LolLobbyTeamBuilderMatchmakingSearchErrorResource.hpp"
#include "LolLobbyTeamBuilderMatchmakingLowPriorityData.hpp"
#include "LolLobbyTeamBuilderMatchmakingReadyCheckResource.hpp"
#include "LolLobbyTeamBuilderMatchmakingSearchState.hpp"
namespace leagueapi {
  struct LolLobbyTeamBuilderMatchmakingSearchResource_t {
    LolLobbyTeamBuilderMatchmakingDodgeData_t dodgeData;
    std::vector<LolLobbyTeamBuilderMatchmakingSearchErrorResource_t> errors;
    float estimatedQueueTime;
    bool isCurrentlyInQueue;
    std::string lobbyId;
    LolLobbyTeamBuilderMatchmakingLowPriorityData_t lowPriorityData;
    int32_t queueId;
    LolLobbyTeamBuilderMatchmakingReadyCheckResource_t readyCheck;
    LolLobbyTeamBuilderMatchmakingSearchState_t searchState;
    float timeInQueue;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderMatchmakingSearchResource_t& v) {
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

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderMatchmakingSearchResource_t& v) {
    v.dodgeData = j.at("dodgeData").get<LolLobbyTeamBuilderMatchmakingDodgeData_t>();
    v.errors = j.at("errors").get<std::vector<LolLobbyTeamBuilderMatchmakingSearchErrorResource_t>>();
    v.estimatedQueueTime = j.at("estimatedQueueTime").get<float>();
    v.isCurrentlyInQueue = j.at("isCurrentlyInQueue").get<bool>();
    v.lobbyId = j.at("lobbyId").get<std::string>();
    v.lowPriorityData = j.at("lowPriorityData").get<LolLobbyTeamBuilderMatchmakingLowPriorityData_t>();
    v.queueId = j.at("queueId").get<int32_t>();
    v.readyCheck = j.at("readyCheck").get<LolLobbyTeamBuilderMatchmakingReadyCheckResource_t>();
    v.searchState = j.at("searchState").get<LolLobbyTeamBuilderMatchmakingSearchState_t>();
    v.timeInQueue = j.at("timeInQueue").get<float>();
  }
}
