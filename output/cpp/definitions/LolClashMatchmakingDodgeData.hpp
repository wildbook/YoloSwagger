#pragma once
#include <json.hpp>
#include <optional>
#include "LolClashMatchmakingDodgeState.hpp"
namespace leagueapi {
  struct LolClashMatchmakingDodgeData_t {
    LolClashMatchmakingDodgeState_t state;
    uint64_t dodgerId;
  };

  inline void to_json(nlohmann::json& j, const LolClashMatchmakingDodgeData_t& v) {
    j["state"] = v.state;
    j["dodgerId"] = v.dodgerId;
  }

  inline void from_json(const nlohmann::json& j, LolClashMatchmakingDodgeData_t& v) {
    v.state = j.at("state").get<LolClashMatchmakingDodgeState_t>();
    v.dodgerId = j.at("dodgerId").get<uint64_t>();
  }
  inline std::string to_string(const LolClashMatchmakingDodgeData_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
