#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyTeamBuilderAfkCheckStateV1.hpp"
#include "LolLobbyTeamBuilderTBDMatchmakingState.hpp"
#include "LolLobbyTeamBuilderChampionSelectStateV1.hpp"
#include "LolLobbyTeamBuilderTbLobbyPremadeStateResource.hpp"
namespace leagueapi {
  struct LolLobbyTeamBuilderTbLobbyStateResource_t {
    std::optional<LolLobbyTeamBuilderTbLobbyPremadeStateResource_t> premadeState;
    int32_t queueId;
    std::optional<LolLobbyTeamBuilderTBDMatchmakingState_t> matchmakingState;
    std::optional<LolLobbyTeamBuilderChampionSelectStateV1_t> championSelectState;
    int32_t counter;
    std::string phaseName;
    std::optional<LolLobbyTeamBuilderAfkCheckStateV1_t> afkCheckState;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderTbLobbyStateResource_t& v) {
    if(v.premadeState)
      j["premadeState"] = *v.premadeState;
    j["queueId"] = v.queueId;
    if(v.matchmakingState)
      j["matchmakingState"] = *v.matchmakingState;
    if(v.championSelectState)
      j["championSelectState"] = *v.championSelectState;
    j["counter"] = v.counter;
    j["phaseName"] = v.phaseName;
    if(v.afkCheckState)
      j["afkCheckState"] = *v.afkCheckState;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderTbLobbyStateResource_t& v) {
    if(auto it = j.find("premadeState"); it != j.end() && !it->is_null())
      v.premadeState = it->get<LolLobbyTeamBuilderTbLobbyPremadeStateResource_t>();
    v.queueId = j.at("queueId").get<int32_t>();
    if(auto it = j.find("matchmakingState"); it != j.end() && !it->is_null())
      v.matchmakingState = it->get<LolLobbyTeamBuilderTBDMatchmakingState_t>();
    if(auto it = j.find("championSelectState"); it != j.end() && !it->is_null())
      v.championSelectState = it->get<LolLobbyTeamBuilderChampionSelectStateV1_t>();
    v.counter = j.at("counter").get<int32_t>();
    v.phaseName = j.at("phaseName").get<std::string>();
    if(auto it = j.find("afkCheckState"); it != j.end() && !it->is_null())
      v.afkCheckState = it->get<LolLobbyTeamBuilderAfkCheckStateV1_t>();
  }
  inline std::string to_string(const LolLobbyTeamBuilderTbLobbyStateResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
