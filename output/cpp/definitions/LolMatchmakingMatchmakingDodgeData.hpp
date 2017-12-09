#pragma once
#include <json.hpp>
#include <optional>
#include "LolMatchmakingMatchmakingDodgeState.hpp"
namespace leagueapi {
  struct LolMatchmakingMatchmakingDodgeData_t {
    uint64_t dodgerId;
    LolMatchmakingMatchmakingDodgeState_t state;
  };

  inline void to_json(nlohmann::json& j, const LolMatchmakingMatchmakingDodgeData_t& v) {
    j["dodgerId"] = v.dodgerId;
    j["state"] = v.state;
  }

  inline void from_json(const nlohmann::json& j, LolMatchmakingMatchmakingDodgeData_t& v) {
    v.dodgerId = j.at("dodgerId").get<uint64_t>();
    v.state = j.at("state").get<LolMatchmakingMatchmakingDodgeState_t>();
  }
  inline std::string to_string(const LolMatchmakingMatchmakingDodgeData_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
