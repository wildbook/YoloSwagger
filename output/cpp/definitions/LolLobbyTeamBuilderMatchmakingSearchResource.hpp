#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyTeamBuilderMatchmakingLowPriorityData.hpp"
#include "LolLobbyTeamBuilderMatchmakingDodgeData.hpp"
#include "LolLobbyTeamBuilderMatchmakingReadyCheckResource.hpp"
#include "LolLobbyTeamBuilderMatchmakingSearchErrorResource.hpp"
#include "LolLobbyTeamBuilderMatchmakingSearchState.hpp"
namespace leagueapi {
  struct LolLobbyTeamBuilderMatchmakingSearchResource_t {
    LolLobbyTeamBuilderMatchmakingReadyCheckResource_t readyCheck;
    std::vector<LolLobbyTeamBuilderMatchmakingSearchErrorResource_t> errors;
    LolLobbyTeamBuilderMatchmakingDodgeData_t dodgeData;
    std::string lobbyId;
    LolLobbyTeamBuilderMatchmakingSearchState_t searchState;
    float timeInQueue;
    LolLobbyTeamBuilderMatchmakingLowPriorityData_t lowPriorityData;
    int32_t queueId;
    float estimatedQueueTime;
    bool isCurrentlyInQueue;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderMatchmakingSearchResource_t& v) {
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

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderMatchmakingSearchResource_t& v) {
    v.readyCheck = j.at("readyCheck").get<LolLobbyTeamBuilderMatchmakingReadyCheckResource_t>();
    v.errors = j.at("errors").get<std::vector<LolLobbyTeamBuilderMatchmakingSearchErrorResource_t>>();
    v.dodgeData = j.at("dodgeData").get<LolLobbyTeamBuilderMatchmakingDodgeData_t>();
    v.lobbyId = j.at("lobbyId").get<std::string>();
    v.searchState = j.at("searchState").get<LolLobbyTeamBuilderMatchmakingSearchState_t>();
    v.timeInQueue = j.at("timeInQueue").get<float>();
    v.lowPriorityData = j.at("lowPriorityData").get<LolLobbyTeamBuilderMatchmakingLowPriorityData_t>();
    v.queueId = j.at("queueId").get<int32_t>();
    v.estimatedQueueTime = j.at("estimatedQueueTime").get<float>();
    v.isCurrentlyInQueue = j.at("isCurrentlyInQueue").get<bool>();
  }
  inline std::string to_string(const LolLobbyTeamBuilderMatchmakingSearchResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
