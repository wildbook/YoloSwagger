#ifndef SWAGGER_TYPES_LolLobbyTeamBuilderTbLobbyStateResource_HPP
#define SWAGGER_TYPES_LolLobbyTeamBuilderTbLobbyStateResource_HPP
#include <json.hpp>
#include "LolLobbyTeamBuilderAfkCheckStateV1.hpp"
#include "LolLobbyTeamBuilderTbLobbyPremadeStateResource.hpp"
#include "LolLobbyTeamBuilderChampionSelectStateV1.hpp"
#include "LolLobbyTeamBuilderTBDMatchmakingState.hpp"
namespace leagueapi {
  // 
  struct LolLobbyTeamBuilderTbLobbyStateResource {
    // 
    LolLobbyTeamBuilderAfkCheckStateV1 afkCheckState;
    // 
    LolLobbyTeamBuilderChampionSelectStateV1 championSelectState;
    // 
    int32_t counter;
    // 
    LolLobbyTeamBuilderTBDMatchmakingState matchmakingState;
    // 
    std::string phaseName;
    // 
    LolLobbyTeamBuilderTbLobbyPremadeStateResource premadeState;
    // 
    int32_t queueId;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderTbLobbyStateResource& v) {
    j["afkCheckState"] = v.afkCheckState;
    j["championSelectState"] = v.championSelectState;
    j["counter"] = v.counter;
    j["matchmakingState"] = v.matchmakingState;
    j["phaseName"] = v.phaseName;
    j["premadeState"] = v.premadeState;
    j["queueId"] = v.queueId;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderTbLobbyStateResource& v) {
    v.afkCheckState = j.at("afkCheckState").get<LolLobbyTeamBuilderAfkCheckStateV1>;
    v.championSelectState = j.at("championSelectState").get<LolLobbyTeamBuilderChampionSelectStateV1>;
    v.counter = j.at("counter").get<int32_t>;
    v.matchmakingState = j.at("matchmakingState").get<LolLobbyTeamBuilderTBDMatchmakingState>;
    v.phaseName = j.at("phaseName").get<std::string>;
    v.premadeState = j.at("premadeState").get<LolLobbyTeamBuilderTbLobbyPremadeStateResource>;
    v.queueId = j.at("queueId").get<int32_t>;
  }

}
#endif // SWAGGER_TYPES_LolLobbyTeamBuilderTbLobbyStateResource_HPP
