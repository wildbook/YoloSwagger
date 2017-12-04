#ifndef SWAGGER_TYPES_LolMatchmakingMatchmakingDodgeData_HPP
#define SWAGGER_TYPES_LolMatchmakingMatchmakingDodgeData_HPP
#include <json.hpp>
#include "LolMatchmakingMatchmakingDodgeState.hpp"
namespace test {
  // 
  struct LolMatchmakingMatchmakingDodgeData {
'    // 
    uint64_t dodgerId;
    // 
    LolMatchmakingMatchmakingDodgeState state;
  };

  void to_json(nlohmann::json& j, const LolMatchmakingMatchmakingDodgeData& v) {
    j["dodgerId"] = v.dodgerId;
    j["state"] = v.state;
  }

  void from_json(const nlohmann::json& j, LolMatchmakingMatchmakingDodgeData& v) {
    v.dodgerId = j.at("dodgerId").get<uint64_t>;
    v.state = j.at("state").get<LolMatchmakingMatchmakingDodgeState>;
  }

}
#endif // SWAGGER_TYPES_LolMatchmakingMatchmakingDodgeData_HPP
