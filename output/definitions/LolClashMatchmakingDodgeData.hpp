#ifndef SWAGGER_TYPES_LolClashMatchmakingDodgeData_HPP
#define SWAGGER_TYPES_LolClashMatchmakingDodgeData_HPP
#include <json.hpp>
#include "LolClashMatchmakingDodgeState.hpp"
namespace leagueapi {
  // 
  struct LolClashMatchmakingDodgeData {
    // 
    uint64_t dodgerId;
    // 
    LolClashMatchmakingDodgeState state;
  };

  void to_json(nlohmann::json& j, const LolClashMatchmakingDodgeData& v) {
    j["dodgerId"] = v.dodgerId;
    j["state"] = v.state;
  }

  void from_json(const nlohmann::json& j, LolClashMatchmakingDodgeData& v) {
    v.dodgerId = j.at("dodgerId").get<uint64_t>;
    v.state = j.at("state").get<LolClashMatchmakingDodgeState>;
  }

}
#endif // SWAGGER_TYPES_LolClashMatchmakingDodgeData_HPP
