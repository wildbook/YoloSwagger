#ifndef SWAGGER_TYPES_LolClashMatchmakingDodgeData_HPP
#define SWAGGER_TYPES_LolClashMatchmakingDodgeData_HPP
#include <json.hpp>
#include "LolClashMatchmakingDodgeState.hpp"
namespace leagueapi {
  // 
  struct LolClashMatchmakingDodgeData {
    // 
    LolClashMatchmakingDodgeState state;
    // 
    uint64_t dodgerId;
  };

  inline void to_json(nlohmann::json& j, const LolClashMatchmakingDodgeData& v) {
    j["state"] = v.state;
    j["dodgerId"] = v.dodgerId;
  }

  inline void from_json(const nlohmann::json& j, LolClashMatchmakingDodgeData& v) {
    v.state = j.at("state").get<LolClashMatchmakingDodgeState>;
    v.dodgerId = j.at("dodgerId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LolClashMatchmakingDodgeData_HPP
