#ifndef SWAGGER_TYPES_LolMatchmakingMatchmakingDodgeData_HPP
#define SWAGGER_TYPES_LolMatchmakingMatchmakingDodgeData_HPP
#include <json.hpp>
#include "LolMatchmakingMatchmakingDodgeState.hpp"
namespace leagueapi {
  // 
  struct LolMatchmakingMatchmakingDodgeData {
    // 
    LolMatchmakingMatchmakingDodgeState state;
    // 
    uint64_t dodgerId;
  };

  inline void to_json(nlohmann::json& j, const LolMatchmakingMatchmakingDodgeData& v) {
    j["state"] = v.state;
    j["dodgerId"] = v.dodgerId;
  }

  inline void from_json(const nlohmann::json& j, LolMatchmakingMatchmakingDodgeData& v) {
    v.state = j.at("state").get<LolMatchmakingMatchmakingDodgeState>;
    v.dodgerId = j.at("dodgerId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LolMatchmakingMatchmakingDodgeData_HPP
