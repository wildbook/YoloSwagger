#ifndef SWAGGER_TYPES_LolClashGameflowGameDodge_HPP
#define SWAGGER_TYPES_LolClashGameflowGameDodge_HPP
#include <json.hpp>
#include "LolClashMatchmakingDodgeState.hpp"
namespace test {
  // 
  struct LolClashGameflowGameDodge {
'    // 
    std::vector<uint64_t> dodgeIds;
    // 
    LolClashMatchmakingDodgeState state;
  };

  void to_json(nlohmann::json& j, const LolClashGameflowGameDodge& v) {
    j["dodgeIds"] = v.dodgeIds;
    j["state"] = v.state;
  }

  void from_json(const nlohmann::json& j, LolClashGameflowGameDodge& v) {
    v.dodgeIds = j.at("dodgeIds").get<std::vector<uint64_t>>;
    v.state = j.at("state").get<LolClashMatchmakingDodgeState>;
  }

}
#endif // SWAGGER_TYPES_LolClashGameflowGameDodge_HPP
