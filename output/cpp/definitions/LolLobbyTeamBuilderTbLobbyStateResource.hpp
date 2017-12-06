#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyTeamBuilderTBDMatchmakingState.hpp"
#include "LolLobbyTeamBuilderTbLobbyPremadeStateResource.hpp"
#include "LolLobbyTeamBuilderAfkCheckStateV1.hpp"
#include "LolLobbyTeamBuilderChampionSelectStateV1.hpp"
namespace leagueapi {
  struct LolLobbyTeamBuilderTbLobbyStateResource_t {
    std::optional<LolLobbyTeamBuilderAfkCheckStateV1_t> afkCheckState;
    std::optional<LolLobbyTeamBuilderChampionSelectStateV1_t> championSelectState;
    int32_t counter;
    std::optional<LolLobbyTeamBuilderTBDMatchmakingState_t> matchmakingState;
    std::string phaseName;
    std::optional<LolLobbyTeamBuilderTbLobbyPremadeStateResource_t> premadeState;
    int32_t queueId;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderTbLobbyStateResource_t& v) {
    if(v.afkCheckState)
      j["afkCheckState"] = *v.afkCheckState;
    if(v.championSelectState)
      j["championSelectState"] = *v.championSelectState;
    j["counter"] = v.counter;
    if(v.matchmakingState)
      j["matchmakingState"] = *v.matchmakingState;
    j["phaseName"] = v.phaseName;
    if(v.premadeState)
      j["premadeState"] = *v.premadeState;
    j["queueId"] = v.queueId;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderTbLobbyStateResource_t& v) {
    if(auto it = j.find("afkCheckState"); it != j.end() !it->is_null())
      v.afkCheckState = it->get<LolLobbyTeamBuilderAfkCheckStateV1_t>();
    if(auto it = j.find("championSelectState"); it != j.end() !it->is_null())
      v.championSelectState = it->get<LolLobbyTeamBuilderChampionSelectStateV1_t>();
    v.counter = j.at("counter").get<int32_t>();
    if(auto it = j.find("matchmakingState"); it != j.end() !it->is_null())
      v.matchmakingState = it->get<LolLobbyTeamBuilderTBDMatchmakingState_t>();
    v.phaseName = j.at("phaseName").get<std::string>();
    if(auto it = j.find("premadeState"); it != j.end() !it->is_null())
      v.premadeState = it->get<LolLobbyTeamBuilderTbLobbyPremadeStateResource_t>();
    v.queueId = j.at("queueId").get<int32_t>();
  }
}
