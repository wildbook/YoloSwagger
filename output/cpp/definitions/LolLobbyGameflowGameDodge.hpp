#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyMatchmakingDodgeState.hpp"
#include "LolLobbyGameflowPhase.hpp"
namespace leagueapi {
  struct LolLobbyGameflowGameDodge_t {
    LolLobbyGameflowPhase_t phase;
    std::vector<uint64_t> dodgeIds;
    LolLobbyMatchmakingDodgeState_t state;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyGameflowGameDodge_t& v) {
    j["phase"] = v.phase;
    j["dodgeIds"] = v.dodgeIds;
    j["state"] = v.state;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyGameflowGameDodge_t& v) {
    v.phase = j.at("phase").get<LolLobbyGameflowPhase_t>();
    v.dodgeIds = j.at("dodgeIds").get<std::vector<uint64_t>>();
    v.state = j.at("state").get<LolLobbyMatchmakingDodgeState_t>();
  }
  inline std::string to_string(const LolLobbyGameflowGameDodge_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
