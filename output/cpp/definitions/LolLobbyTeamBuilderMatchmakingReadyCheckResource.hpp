#ifndef SWAGGER_TYPES_LolLobbyTeamBuilderMatchmakingReadyCheckResource_HPP
#define SWAGGER_TYPES_LolLobbyTeamBuilderMatchmakingReadyCheckResource_HPP
#include <json.hpp>
#include "LolLobbyTeamBuilderMatchmakingReadyCheckResponse.hpp"
#include "LolLobbyTeamBuilderMatchmakingReadyCheckState.hpp"
#include "LolLobbyTeamBuilderMatchmakingDodgeWarning.hpp"
namespace leagueapi {
  // 
  struct LolLobbyTeamBuilderMatchmakingReadyCheckResource {
    // 
    LolLobbyTeamBuilderMatchmakingReadyCheckState state;
    // 
    LolLobbyTeamBuilderMatchmakingReadyCheckResponse playerResponse;
    // 
    std::vector<uint64_t> declinerIds;
    // 
    float timer;
    // 
    LolLobbyTeamBuilderMatchmakingDodgeWarning dodgeWarning;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderMatchmakingReadyCheckResource& v) {
    j["state"] = v.state;
    j["playerResponse"] = v.playerResponse;
    j["declinerIds"] = v.declinerIds;
    j["timer"] = v.timer;
    j["dodgeWarning"] = v.dodgeWarning;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderMatchmakingReadyCheckResource& v) {
    v.state = j.at("state").get<LolLobbyTeamBuilderMatchmakingReadyCheckState>;
    v.playerResponse = j.at("playerResponse").get<LolLobbyTeamBuilderMatchmakingReadyCheckResponse>;
    v.declinerIds = j.at("declinerIds").get<std::vector<uint64_t>>;
    v.timer = j.at("timer").get<float>;
    v.dodgeWarning = j.at("dodgeWarning").get<LolLobbyTeamBuilderMatchmakingDodgeWarning>;
  }

}
#endif // SWAGGER_TYPES_LolLobbyTeamBuilderMatchmakingReadyCheckResource_HPP
