#ifndef SWAGGER_TYPES_LolChampSelectLegacyGameflowGameDodge_HPP
#define SWAGGER_TYPES_LolChampSelectLegacyGameflowGameDodge_HPP
#include <json.hpp>
#include "LolChampSelectLegacyGameflowGameDodgeState.hpp"
namespace test {
  // 
  struct LolChampSelectLegacyGameflowGameDodge {
'    // 
    std::vector<uint64_t> dodgeIds;
    // 
    LolChampSelectLegacyGameflowGameDodgeState state;
  };

  void to_json(nlohmann::json& j, const LolChampSelectLegacyGameflowGameDodge& v) {
    j["dodgeIds"] = v.dodgeIds;
    j["state"] = v.state;
  }

  void from_json(const nlohmann::json& j, LolChampSelectLegacyGameflowGameDodge& v) {
    v.dodgeIds = j.at("dodgeIds").get<std::vector<uint64_t>>;
    v.state = j.at("state").get<LolChampSelectLegacyGameflowGameDodgeState>;
  }

}
#endif // SWAGGER_TYPES_LolChampSelectLegacyGameflowGameDodge_HPP
