#pragma once
#include <json.hpp>
#include <optional>
#include "LolPftGameflowGameDodgeState.hpp"
namespace leagueapi {
  struct LolPftGameflowGameDodge_t {
    LolPftGameflowGameDodgeState_t state;
    std::vector<uint64_t> dodgeIds;
  };

  inline void to_json(nlohmann::json& j, const LolPftGameflowGameDodge_t& v) {
    j["state"] = v.state;
    j["dodgeIds"] = v.dodgeIds;
  }

  inline void from_json(const nlohmann::json& j, LolPftGameflowGameDodge_t& v) {
    v.state = j.at("state").get<LolPftGameflowGameDodgeState_t>();
    v.dodgeIds = j.at("dodgeIds").get<std::vector<uint64_t>>();
  }
  inline std::string to_string(const LolPftGameflowGameDodge_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
