#ifndef SWAGGER_TYPES_LolChampSelectLegacyGameflowGameDodge_HPP
#define SWAGGER_TYPES_LolChampSelectLegacyGameflowGameDodge_HPP
#include <json.hpp>
#include "LolChampSelectLegacyGameflowGameDodgeState.hpp"
namespace leagueapi {
  // 
  struct LolChampSelectLegacyGameflowGameDodge {
    // 
    std::vector<uint64_t> dodgeIds;
    // 
    LolChampSelectLegacyGameflowGameDodgeState state;
  };

  inline void to_json(nlohmann::json& j, const LolChampSelectLegacyGameflowGameDodge& v) {
    j["dodgeIds"] = v.dodgeIds;
    j["state"] = v.state;
  }

  inline void from_json(const nlohmann::json& j, LolChampSelectLegacyGameflowGameDodge& v) {
    v.dodgeIds = j.at("dodgeIds").get<std::vector<uint64_t>>;
    v.state = j.at("state").get<LolChampSelectLegacyGameflowGameDodgeState>;
  }

}
#endif // SWAGGER_TYPES_LolChampSelectLegacyGameflowGameDodge_HPP
