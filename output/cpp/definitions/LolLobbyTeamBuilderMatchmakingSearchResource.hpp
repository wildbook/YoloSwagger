#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyTeamBuilderMatchmakingReadyCheckResource.hpp"
#include "LolLobbyTeamBuilderMatchmakingLowPriorityData.hpp"
#include "LolLobbyTeamBuilderMatchmakingSearchState.hpp"
#include "LolLobbyTeamBuilderMatchmakingDodgeData.hpp"
#include "LolLobbyTeamBuilderMatchmakingSearchErrorResource.hpp"
namespace leagueapi {
  struct LolLobbyTeamBuilderMatchmakingSearchResource_t {
    std::string lobbyId;
    LolLobbyTeamBuilderMatchmakingReadyCheckResource_t readyCheck;
    float estimatedQueueTime;
    LolLobbyTeamBuilderMatchmakingLowPriorityData_t lowPriorityData;
    LolLobbyTeamBuilderMatchmakingSearchState_t searchState;
    int32_t queueId;
    float timeInQueue;
    LolLobbyTeamBuilderMatchmakingDodgeData_t dodgeData;
    bool isCurrentlyInQueue;
    std::vector<LolLobbyTeamBuilderMatchmakingSearchErrorResource_t> errors;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderMatchmakingSearchResource_t& v) {
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

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderMatchmakingSearchResource_t& v) {
    v.lobbyId = j.at("lobbyId").get<std::string>();
    v.readyCheck = j.at("readyCheck").get<LolLobbyTeamBuilderMatchmakingReadyCheckResource_t>();
    v.estimatedQueueTime = j.at("estimatedQueueTime").get<float>();
    v.lowPriorityData = j.at("lowPriorityData").get<LolLobbyTeamBuilderMatchmakingLowPriorityData_t>();
    v.searchState = j.at("searchState").get<LolLobbyTeamBuilderMatchmakingSearchState_t>();
    v.queueId = j.at("queueId").get<int32_t>();
    v.timeInQueue = j.at("timeInQueue").get<float>();
    v.dodgeData = j.at("dodgeData").get<LolLobbyTeamBuilderMatchmakingDodgeData_t>();
    v.isCurrentlyInQueue = j.at("isCurrentlyInQueue").get<bool>();
    v.errors = j.at("errors").get<std::vector<LolLobbyTeamBuilderMatchmakingSearchErrorResource_t>>();
  }
  inline std::string to_string(const LolLobbyTeamBuilderMatchmakingSearchResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
