#ifndef SWAGGER_TYPES_LolPftGameflowGameDodge_HPP
#define SWAGGER_TYPES_LolPftGameflowGameDodge_HPP
#include <json.hpp>
#include "LolPftGameflowGameDodgeState.hpp"
namespace leagueapi {
  // 
  struct LolPftGameflowGameDodge {
    // 
    std::vector<uint64_t> dodgeIds;
    // 
    LolPftGameflowGameDodgeState state;
  };

  void to_json(nlohmann::json& j, const LolPftGameflowGameDodge& v) {
    j["dodgeIds"] = v.dodgeIds;
    j["state"] = v.state;
  }

  void from_json(const nlohmann::json& j, LolPftGameflowGameDodge& v) {
    v.dodgeIds = j.at("dodgeIds").get<std::vector<uint64_t>>;
    v.state = j.at("state").get<LolPftGameflowGameDodgeState>;
  }

}
#endif // SWAGGER_TYPES_LolPftGameflowGameDodge_HPP
