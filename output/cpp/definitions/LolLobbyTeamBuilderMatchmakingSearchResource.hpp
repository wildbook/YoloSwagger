#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyTeamBuilderMatchmakingSearchState.hpp"
#include "LolLobbyTeamBuilderMatchmakingReadyCheckResource.hpp"
#include "LolLobbyTeamBuilderMatchmakingSearchErrorResource.hpp"
#include "LolLobbyTeamBuilderMatchmakingLowPriorityData.hpp"
#include "LolLobbyTeamBuilderMatchmakingDodgeData.hpp"
namespace leagueapi {
  struct LolLobbyTeamBuilderMatchmakingSearchResource_t {
    float estimatedQueueTime;
    LolLobbyTeamBuilderMatchmakingReadyCheckResource_t readyCheck;
    bool isCurrentlyInQueue;
    int32_t queueId;
    LolLobbyTeamBuilderMatchmakingSearchState_t searchState;
    float timeInQueue;
    LolLobbyTeamBuilderMatchmakingDodgeData_t dodgeData;
    std::string lobbyId;
    std::vector<LolLobbyTeamBuilderMatchmakingSearchErrorResource_t> errors;
    LolLobbyTeamBuilderMatchmakingLowPriorityData_t lowPriorityData;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderMatchmakingSearchResource_t& v) {
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

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderMatchmakingSearchResource_t& v) {
    v.estimatedQueueTime = j.at("estimatedQueueTime").get<float>();
    v.readyCheck = j.at("readyCheck").get<LolLobbyTeamBuilderMatchmakingReadyCheckResource_t>();
    v.isCurrentlyInQueue = j.at("isCurrentlyInQueue").get<bool>();
    v.queueId = j.at("queueId").get<int32_t>();
    v.searchState = j.at("searchState").get<LolLobbyTeamBuilderMatchmakingSearchState_t>();
    v.timeInQueue = j.at("timeInQueue").get<float>();
    v.dodgeData = j.at("dodgeData").get<LolLobbyTeamBuilderMatchmakingDodgeData_t>();
    v.lobbyId = j.at("lobbyId").get<std::string>();
    v.errors = j.at("errors").get<std::vector<LolLobbyTeamBuilderMatchmakingSearchErrorResource_t>>();
    v.lowPriorityData = j.at("lowPriorityData").get<LolLobbyTeamBuilderMatchmakingLowPriorityData_t>();
  }
  inline std::string to_string(const LolLobbyTeamBuilderMatchmakingSearchResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
