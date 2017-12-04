#ifndef SWAGGER_TYPES_LolLobbyTeamBuilderTbLobbyStateResource_HPP
#define SWAGGER_TYPES_LolLobbyTeamBuilderTbLobbyStateResource_HPP
#include <json.hpp>
#include "LolLobbyTeamBuilderTBDMatchmakingState.hpp"
#include "LolLobbyTeamBuilderChampionSelectStateV1.hpp"
#include "LolLobbyTeamBuilderTbLobbyPremadeStateResource.hpp"
#include "LolLobbyTeamBuilderAfkCheckStateV1.hpp"
namespace leagueapi {
  // 
  struct LolLobbyTeamBuilderTbLobbyStateResource {
    // 
    int32_t queueId;
    // 
    LolLobbyTeamBuilderTBDMatchmakingState matchmakingState;
    // 
    LolLobbyTeamBuilderChampionSelectStateV1 championSelectState;
    // 
    LolLobbyTeamBuilderTbLobbyPremadeStateResource premadeState;
    // 
    std::string phaseName;
    // 
    LolLobbyTeamBuilderAfkCheckStateV1 afkCheckState;
    // 
    int32_t counter;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderTbLobbyStateResource& v) {
    j["queueId"] = v.queueId;
    j["matchmakingState"] = v.matchmakingState;
    j["championSelectState"] = v.championSelectState;
    j["premadeState"] = v.premadeState;
    j["phaseName"] = v.phaseName;
    j["afkCheckState"] = v.afkCheckState;
    j["counter"] = v.counter;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderTbLobbyStateResource& v) {
    v.queueId = j.at("queueId").get<int32_t>;
    v.matchmakingState = j.at("matchmakingState").get<LolLobbyTeamBuilderTBDMatchmakingState>;
    v.championSelectState = j.at("championSelectState").get<LolLobbyTeamBuilderChampionSelectStateV1>;
    v.premadeState = j.at("premadeState").get<LolLobbyTeamBuilderTbLobbyPremadeStateResource>;
    v.phaseName = j.at("phaseName").get<std::string>;
    v.afkCheckState = j.at("afkCheckState").get<LolLobbyTeamBuilderAfkCheckStateV1>;
    v.counter = j.at("counter").get<int32_t>;
  }

}
#endif // SWAGGER_TYPES_LolLobbyTeamBuilderTbLobbyStateResource_HPP
