#pragma once
#include <json.hpp>
#include <optional>
#include "LolClashMatchmakingDodgeState.hpp"
namespace leagueapi {
  struct LolClashMatchmakingDodgeData_t {
    uint64_t dodgerId;
    LolClashMatchmakingDodgeState_t state;
  };

  inline void to_json(nlohmann::json& j, const LolClashMatchmakingDodgeData_t& v) {
    j["dodgerId"] = v.dodgerId;
    j["state"] = v.state;
  }

  inline void from_json(const nlohmann::json& j, LolClashMatchmakingDodgeData_t& v) {
    v.dodgerId = j.at("dodgerId").get<uint64_t>();
    v.state = j.at("state").get<LolClashMatchmakingDodgeState_t>();
  }
  inline std::string to_string(const LolClashMatchmakingDodgeData_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
