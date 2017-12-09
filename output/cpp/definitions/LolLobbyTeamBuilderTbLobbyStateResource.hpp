#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyTeamBuilderChampionSelectStateV1.hpp"
#include "LolLobbyTeamBuilderTBDMatchmakingState.hpp"
#include "LolLobbyTeamBuilderAfkCheckStateV1.hpp"
#include "LolLobbyTeamBuilderTbLobbyPremadeStateResource.hpp"
namespace leagueapi {
  struct LolLobbyTeamBuilderTbLobbyStateResource_t {
    std::optional<LolLobbyTeamBuilderTbLobbyPremadeStateResource_t> premadeState;
    std::optional<LolLobbyTeamBuilderChampionSelectStateV1_t> championSelectState;
    std::optional<LolLobbyTeamBuilderAfkCheckStateV1_t> afkCheckState;
    int32_t queueId;
    std::optional<LolLobbyTeamBuilderTBDMatchmakingState_t> matchmakingState;
    std::string phaseName;
    int32_t counter;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderTbLobbyStateResource_t& v) {
    if(v.premadeState)
      j["premadeState"] = *v.premadeState;
    if(v.championSelectState)
      j["championSelectState"] = *v.championSelectState;
    if(v.afkCheckState)
      j["afkCheckState"] = *v.afkCheckState;
    j["queueId"] = v.queueId;
    if(v.matchmakingState)
      j["matchmakingState"] = *v.matchmakingState;
    j["phaseName"] = v.phaseName;
    j["counter"] = v.counter;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderTbLobbyStateResource_t& v) {
    if(auto it = j.find("premadeState"); it != j.end() && !it->is_null())
      v.premadeState = it->get<LolLobbyTeamBuilderTbLobbyPremadeStateResource_t>();
    if(auto it = j.find("championSelectState"); it != j.end() && !it->is_null())
      v.championSelectState = it->get<LolLobbyTeamBuilderChampionSelectStateV1_t>();
    if(auto it = j.find("afkCheckState"); it != j.end() && !it->is_null())
      v.afkCheckState = it->get<LolLobbyTeamBuilderAfkCheckStateV1_t>();
    v.queueId = j.at("queueId").get<int32_t>();
    if(auto it = j.find("matchmakingState"); it != j.end() && !it->is_null())
      v.matchmakingState = it->get<LolLobbyTeamBuilderTBDMatchmakingState_t>();
    v.phaseName = j.at("phaseName").get<std::string>();
    v.counter = j.at("counter").get<int32_t>();
  }
  inline std::string to_string(const LolLobbyTeamBuilderTbLobbyStateResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
