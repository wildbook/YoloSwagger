#ifndef SWAGGER_TYPES_LolLobbyTeamBuilderMatchmakingReadyCheckResource_HPP
#define SWAGGER_TYPES_LolLobbyTeamBuilderMatchmakingReadyCheckResource_HPP
#include <json.hpp>
#include "LolLobbyTeamBuilderMatchmakingReadyCheckResponse.hpp"
#include "LolLobbyTeamBuilderMatchmakingDodgeWarning.hpp"
#include "LolLobbyTeamBuilderMatchmakingReadyCheckState.hpp"
namespace leagueapi {
  // 
  struct LolLobbyTeamBuilderMatchmakingReadyCheckResource {
    // 
    std::vector<uint64_t> declinerIds;
    // 
    LolLobbyTeamBuilderMatchmakingDodgeWarning dodgeWarning;
    // 
    LolLobbyTeamBuilderMatchmakingReadyCheckResponse playerResponse;
    // 
    LolLobbyTeamBuilderMatchmakingReadyCheckState state;
    // 
    float timer;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderMatchmakingReadyCheckResource& v) {
    j["declinerIds"] = v.declinerIds;
    j["dodgeWarning"] = v.dodgeWarning;
    j["playerResponse"] = v.playerResponse;
    j["state"] = v.state;
    j["timer"] = v.timer;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderMatchmakingReadyCheckResource& v) {
    v.declinerIds = j.at("declinerIds").get<std::vector<uint64_t>>;
    v.dodgeWarning = j.at("dodgeWarning").get<LolLobbyTeamBuilderMatchmakingDodgeWarning>;
    v.playerResponse = j.at("playerResponse").get<LolLobbyTeamBuilderMatchmakingReadyCheckResponse>;
    v.state = j.at("state").get<LolLobbyTeamBuilderMatchmakingReadyCheckState>;
    v.timer = j.at("timer").get<float>;
  }

}
#endif // SWAGGER_TYPES_LolLobbyTeamBuilderMatchmakingReadyCheckResource_HPP
