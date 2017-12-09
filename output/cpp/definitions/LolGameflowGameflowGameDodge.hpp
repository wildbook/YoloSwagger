#pragma once
#include <json.hpp>
#include <optional>
#include "LolGameflowGameflowPhase.hpp"
#include "LolGameflowGameflowGameDodgeState.hpp"
namespace leagueapi {
  struct LolGameflowGameflowGameDodge_t {
    LolGameflowGameflowGameDodgeState_t state;
    std::vector<uint64_t> dodgeIds;
    LolGameflowGameflowPhase_t phase;
  };

  inline void to_json(nlohmann::json& j, const LolGameflowGameflowGameDodge_t& v) {
    j["state"] = v.state;
    j["dodgeIds"] = v.dodgeIds;
    j["phase"] = v.phase;
  }

  inline void from_json(const nlohmann::json& j, LolGameflowGameflowGameDodge_t& v) {
    v.state = j.at("state").get<LolGameflowGameflowGameDodgeState_t>();
    v.dodgeIds = j.at("dodgeIds").get<std::vector<uint64_t>>();
    v.phase = j.at("phase").get<LolGameflowGameflowPhase_t>();
  }
  inline std::string to_string(const LolGameflowGameflowGameDodge_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
