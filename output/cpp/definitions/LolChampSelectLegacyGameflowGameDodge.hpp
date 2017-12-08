#pragma once
#include <json.hpp>
#include <optional>
#include "LolChampSelectLegacyGameflowGameDodgeState.hpp"
namespace leagueapi {
  struct LolChampSelectLegacyGameflowGameDodge_t {
    std::vector<uint64_t> dodgeIds;
    LolChampSelectLegacyGameflowGameDodgeState_t state;
  };

  inline void to_json(nlohmann::json& j, const LolChampSelectLegacyGameflowGameDodge_t& v) {
    j["dodgeIds"] = v.dodgeIds;
    j["state"] = v.state;
  }

  inline void from_json(const nlohmann::json& j, LolChampSelectLegacyGameflowGameDodge_t& v) {
    v.dodgeIds = j.at("dodgeIds").get<std::vector<uint64_t>>();
    v.state = j.at("state").get<LolChampSelectLegacyGameflowGameDodgeState_t>();
  }
  inline std::string to_string(const LolChampSelectLegacyGameflowGameDodge_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
