#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyMatchmakingDodgeState.hpp"
#include "LolLobbyGameflowPhase.hpp"
namespace leagueapi {
  struct LolLobbyGameflowGameDodge_t {
    std::vector<uint64_t> dodgeIds;
    LolLobbyGameflowPhase_t phase;
    LolLobbyMatchmakingDodgeState_t state;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyGameflowGameDodge_t& v) {
    j["dodgeIds"] = v.dodgeIds;
    j["phase"] = v.phase;
    j["state"] = v.state;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyGameflowGameDodge_t& v) {
    v.dodgeIds = j.at("dodgeIds").get<std::vector<uint64_t>>();
    v.phase = j.at("phase").get<LolLobbyGameflowPhase_t>();
    v.state = j.at("state").get<LolLobbyMatchmakingDodgeState_t>();
  }
  inline std::string to_string(const LolLobbyGameflowGameDodge_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
