#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyTeamBuilderMatchmakingSearchErrorResource.hpp"
#include "LolLobbyTeamBuilderMatchmakingLowPriorityData.hpp"
#include "LolLobbyTeamBuilderMatchmakingDodgeData.hpp"
#include "LolLobbyTeamBuilderMatchmakingReadyCheckResource.hpp"
#include "LolLobbyTeamBuilderMatchmakingSearchState.hpp"
namespace leagueapi {
  struct LolLobbyTeamBuilderMatchmakingSearchResource_t {
    std::string_t lobbyId;
    int32_t_t queueId;
    std::vector<LolLobbyTeamBuilderMatchmakingSearchErrorResource_t> errors;
    float_t timeInQueue;
    LolLobbyTeamBuilderMatchmakingLowPriorityData_t lowPriorityData;
    LolLobbyTeamBuilderMatchmakingDodgeData_t dodgeData;
    bool_t isCurrentlyInQueue;
    LolLobbyTeamBuilderMatchmakingReadyCheckResource_t readyCheck;
    float_t estimatedQueueTime;
    LolLobbyTeamBuilderMatchmakingSearchState_t searchState;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderMatchmakingSearchResource_t& v) {
    j["lobbyId"] = v.lobbyId;
    j["queueId"] = v.queueId;
    j["errors"] = v.errors;
    j["timeInQueue"] = v.timeInQueue;
    j["lowPriorityData"] = v.lowPriorityData;
    j["dodgeData"] = v.dodgeData;
    j["isCurrentlyInQueue"] = v.isCurrentlyInQueue;
    j["readyCheck"] = v.readyCheck;
    j["estimatedQueueTime"] = v.estimatedQueueTime;
    j["searchState"] = v.searchState;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderMatchmakingSearchResource_t& v) {
    v.lobbyId = j.at("lobbyId").get<std::string_t>();
    v.queueId = j.at("queueId").get<int32_t_t>();
    v.errors = j.at("errors").get<std::vector<LolLobbyTeamBuilderMatchmakingSearchErrorResource_t>>();
    v.timeInQueue = j.at("timeInQueue").get<float_t>();
    v.lowPriorityData = j.at("lowPriorityData").get<LolLobbyTeamBuilderMatchmakingLowPriorityData_t>();
    v.dodgeData = j.at("dodgeData").get<LolLobbyTeamBuilderMatchmakingDodgeData_t>();
    v.isCurrentlyInQueue = j.at("isCurrentlyInQueue").get<bool_t>();
    v.readyCheck = j.at("readyCheck").get<LolLobbyTeamBuilderMatchmakingReadyCheckResource_t>();
    v.estimatedQueueTime = j.at("estimatedQueueTime").get<float_t>();
    v.searchState = j.at("searchState").get<LolLobbyTeamBuilderMatchmakingSearchState_t>();
  }
  inline std::string to_string(const LolLobbyTeamBuilderMatchmakingSearchResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
