#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyTeamBuilderMatchmakingLowPriorityData.hpp"
#include "LolLobbyTeamBuilderMatchmakingSearchState.hpp"
#include "LolLobbyTeamBuilderMatchmakingDodgeData.hpp"
#include "LolLobbyTeamBuilderMatchmakingSearchErrorResource.hpp"
#include "LolLobbyTeamBuilderMatchmakingReadyCheckResource.hpp"
namespace leagueapi {
  struct LolLobbyTeamBuilderMatchmakingSearchResource_t {
    int32_t queueId;
    LolLobbyTeamBuilderMatchmakingSearchState_t searchState;
    bool isCurrentlyInQueue;
    LolLobbyTeamBuilderMatchmakingReadyCheckResource_t readyCheck;
    float timeInQueue;
    LolLobbyTeamBuilderMatchmakingLowPriorityData_t lowPriorityData;
    float estimatedQueueTime;
    LolLobbyTeamBuilderMatchmakingDodgeData_t dodgeData;
    std::vector<LolLobbyTeamBuilderMatchmakingSearchErrorResource_t> errors;
    std::string lobbyId;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderMatchmakingSearchResource_t& v) {
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

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderMatchmakingSearchResource_t& v) {
    v.queueId = j.at("queueId").get<int32_t>();
    v.searchState = j.at("searchState").get<LolLobbyTeamBuilderMatchmakingSearchState_t>();
    v.isCurrentlyInQueue = j.at("isCurrentlyInQueue").get<bool>();
    v.readyCheck = j.at("readyCheck").get<LolLobbyTeamBuilderMatchmakingReadyCheckResource_t>();
    v.timeInQueue = j.at("timeInQueue").get<float>();
    v.lowPriorityData = j.at("lowPriorityData").get<LolLobbyTeamBuilderMatchmakingLowPriorityData_t>();
    v.estimatedQueueTime = j.at("estimatedQueueTime").get<float>();
    v.dodgeData = j.at("dodgeData").get<LolLobbyTeamBuilderMatchmakingDodgeData_t>();
    v.errors = j.at("errors").get<std::vector<LolLobbyTeamBuilderMatchmakingSearchErrorResource_t>>();
    v.lobbyId = j.at("lobbyId").get<std::string>();
  }
  inline std::string to_string(const LolLobbyTeamBuilderMatchmakingSearchResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
