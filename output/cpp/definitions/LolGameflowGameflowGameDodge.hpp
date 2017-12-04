#ifndef SWAGGER_TYPES_LolGameflowGameflowGameDodge_HPP
#define SWAGGER_TYPES_LolGameflowGameflowGameDodge_HPP
#include <json.hpp>
#include "LolGameflowGameflowPhase.hpp"
#include "LolGameflowGameflowGameDodgeState.hpp"
namespace leagueapi {
  // 
  struct LolGameflowGameflowGameDodge {
    // 
    LolGameflowGameflowPhase phase;
    // 
    std::vector<uint64_t> dodgeIds;
    // 
    LolGameflowGameflowGameDodgeState state;
  };

  inline void to_json(nlohmann::json& j, const LolGameflowGameflowGameDodge& v) {
    j["phase"] = v.phase;
    j["dodgeIds"] = v.dodgeIds;
    j["state"] = v.state;
  }

  inline void from_json(const nlohmann::json& j, LolGameflowGameflowGameDodge& v) {
    v.phase = j.at("phase").get<LolGameflowGameflowPhase>;
    v.dodgeIds = j.at("dodgeIds").get<std::vector<uint64_t>>;
    v.state = j.at("state").get<LolGameflowGameflowGameDodgeState>;
  }

}
#endif // SWAGGER_TYPES_LolGameflowGameflowGameDodge_HPP
