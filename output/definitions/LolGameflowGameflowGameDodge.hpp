#ifndef SWAGGER_TYPES_LolGameflowGameflowGameDodge_HPP
#define SWAGGER_TYPES_LolGameflowGameflowGameDodge_HPP
#include <json.hpp>
#include "LolGameflowGameflowGameDodgeState.hpp"
#include "LolGameflowGameflowPhase.hpp"
namespace leagueapi {
  // 
  struct LolGameflowGameflowGameDodge {
    // 
    std::vector<uint64_t> dodgeIds;
    // 
    LolGameflowGameflowPhase phase;
    // 
    LolGameflowGameflowGameDodgeState state;
  };

  void to_json(nlohmann::json& j, const LolGameflowGameflowGameDodge& v) {
    j["dodgeIds"] = v.dodgeIds;
    j["phase"] = v.phase;
    j["state"] = v.state;
  }

  void from_json(const nlohmann::json& j, LolGameflowGameflowGameDodge& v) {
    v.dodgeIds = j.at("dodgeIds").get<std::vector<uint64_t>>;
    v.phase = j.at("phase").get<LolGameflowGameflowPhase>;
    v.state = j.at("state").get<LolGameflowGameflowGameDodgeState>;
  }

}
#endif // SWAGGER_TYPES_LolGameflowGameflowGameDodge_HPP
