#ifndef SWAGGER_TYPES_LolMatchmakingGameflowGameDodge_HPP
#define SWAGGER_TYPES_LolMatchmakingGameflowGameDodge_HPP
#include <json.hpp>
#include "LolMatchmakingMatchmakingDodgeState.hpp"
namespace test {
  // 
  struct LolMatchmakingGameflowGameDodge {
'    // 
    std::vector<uint64_t> dodgeIds;
    // 
    LolMatchmakingMatchmakingDodgeState state;
  };

  void to_json(nlohmann::json& j, const LolMatchmakingGameflowGameDodge& v) {
    j["dodgeIds"] = v.dodgeIds;
    j["state"] = v.state;
  }

  void from_json(const nlohmann::json& j, LolMatchmakingGameflowGameDodge& v) {
    v.dodgeIds = j.at("dodgeIds").get<std::vector<uint64_t>>;
    v.state = j.at("state").get<LolMatchmakingMatchmakingDodgeState>;
  }

}
#endif // SWAGGER_TYPES_LolMatchmakingGameflowGameDodge_HPP
