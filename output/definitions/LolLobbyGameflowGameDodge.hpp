#ifndef SWAGGER_TYPES_LolLobbyGameflowGameDodge_HPP
#define SWAGGER_TYPES_LolLobbyGameflowGameDodge_HPP
#include <json.hpp>
#include "LolLobbyMatchmakingDodgeState.hpp"
#include "LolLobbyGameflowPhase.hpp"
namespace test {
  // 
  struct LolLobbyGameflowGameDodge {
'    // 
    std::vector<uint64_t> dodgeIds;
    // 
    LolLobbyGameflowPhase phase;
    // 
    LolLobbyMatchmakingDodgeState state;
  };

  void to_json(nlohmann::json& j, const LolLobbyGameflowGameDodge& v) {
    j["dodgeIds"] = v.dodgeIds;
    j["phase"] = v.phase;
    j["state"] = v.state;
  }

  void from_json(const nlohmann::json& j, LolLobbyGameflowGameDodge& v) {
    v.dodgeIds = j.at("dodgeIds").get<std::vector<uint64_t>>;
    v.phase = j.at("phase").get<LolLobbyGameflowPhase>;
    v.state = j.at("state").get<LolLobbyMatchmakingDodgeState>;
  }

}
#endif // SWAGGER_TYPES_LolLobbyGameflowGameDodge_HPP
