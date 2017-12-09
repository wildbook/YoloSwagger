#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyGameflowPhase.hpp"
#include "LolLobbyMatchmakingDodgeState.hpp"
namespace leagueapi {
  struct LolLobbyGameflowGameDodge_t {
    LolLobbyMatchmakingDodgeState_t state;
    std::vector<uint64_t> dodgeIds;
    LolLobbyGameflowPhase_t phase;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyGameflowGameDodge_t& v) {
    j["state"] = v.state;
    j["dodgeIds"] = v.dodgeIds;
    j["phase"] = v.phase;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyGameflowGameDodge_t& v) {
    v.state = j.at("state").get<LolLobbyMatchmakingDodgeState_t>();
    v.dodgeIds = j.at("dodgeIds").get<std::vector<uint64_t>>();
    v.phase = j.at("phase").get<LolLobbyGameflowPhase_t>();
  }
  inline std::string to_string(const LolLobbyGameflowGameDodge_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
