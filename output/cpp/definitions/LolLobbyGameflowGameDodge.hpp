#ifndef SWAGGER_TYPES_LolLobbyGameflowGameDodge_HPP
#define SWAGGER_TYPES_LolLobbyGameflowGameDodge_HPP
#include <json.hpp>
#include "LolLobbyMatchmakingDodgeState.hpp"
#include "LolLobbyGameflowPhase.hpp"
namespace leagueapi {
  // 
  struct LolLobbyGameflowGameDodge {
    // 
    LolLobbyGameflowPhase phase;
    // 
    std::vector<uint64_t> dodgeIds;
    // 
    LolLobbyMatchmakingDodgeState state;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyGameflowGameDodge& v) {
    j["phase"] = v.phase;
    j["dodgeIds"] = v.dodgeIds;
    j["state"] = v.state;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyGameflowGameDodge& v) {
    v.phase = j.at("phase").get<LolLobbyGameflowPhase>;
    v.dodgeIds = j.at("dodgeIds").get<std::vector<uint64_t>>;
    v.state = j.at("state").get<LolLobbyMatchmakingDodgeState>;
  }

}
#endif // SWAGGER_TYPES_LolLobbyGameflowGameDodge_HPP
