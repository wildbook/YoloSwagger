#pragma once
#include <json.hpp>
#include <optional>
#include "LolGameflowGameflowPhase.hpp"
#include "LolGameflowGameflowGameDodgeState.hpp"
namespace leagueapi {
  struct LolGameflowGameflowGameDodge_t {
    LolGameflowGameflowPhase_t phase;
    std::vector<uint64_t> dodgeIds;
    LolGameflowGameflowGameDodgeState_t state;
  };

  inline void to_json(nlohmann::json& j, const LolGameflowGameflowGameDodge_t& v) {
    j["phase"] = v.phase;
    j["dodgeIds"] = v.dodgeIds;
    j["state"] = v.state;
  }

  inline void from_json(const nlohmann::json& j, LolGameflowGameflowGameDodge_t& v) {
    v.phase = j.at("phase").get<LolGameflowGameflowPhase_t>();
    v.dodgeIds = j.at("dodgeIds").get<std::vector<uint64_t>>();
    v.state = j.at("state").get<LolGameflowGameflowGameDodgeState_t>();
  }
  inline std::string to_string(const LolGameflowGameflowGameDodge_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
