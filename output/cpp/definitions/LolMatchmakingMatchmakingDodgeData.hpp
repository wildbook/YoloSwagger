#pragma once
#include <json.hpp>
#include <optional>
#include "LolMatchmakingMatchmakingDodgeState.hpp"
namespace leagueapi {
  struct LolMatchmakingMatchmakingDodgeData_t {
    LolMatchmakingMatchmakingDodgeState_t state;
    uint64_t dodgerId;
  };

  inline void to_json(nlohmann::json& j, const LolMatchmakingMatchmakingDodgeData_t& v) {
    j["state"] = v.state;
    j["dodgerId"] = v.dodgerId;
  }

  inline void from_json(const nlohmann::json& j, LolMatchmakingMatchmakingDodgeData_t& v) {
    v.state = j.at("state").get<LolMatchmakingMatchmakingDodgeState_t>();
    v.dodgerId = j.at("dodgerId").get<uint64_t>();
  }
  inline std::string to_string(const LolMatchmakingMatchmakingDodgeData_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
