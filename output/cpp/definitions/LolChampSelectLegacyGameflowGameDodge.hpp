#pragma once
#include <json.hpp>
#include <optional>
#include "LolChampSelectLegacyGameflowGameDodgeState.hpp"
namespace leagueapi {
  struct LolChampSelectLegacyGameflowGameDodge_t {
    LolChampSelectLegacyGameflowGameDodgeState_t state;
    std::vector<uint64_t> dodgeIds;
  };

  inline void to_json(nlohmann::json& j, const LolChampSelectLegacyGameflowGameDodge_t& v) {
    j["state"] = v.state;
    j["dodgeIds"] = v.dodgeIds;
  }

  inline void from_json(const nlohmann::json& j, LolChampSelectLegacyGameflowGameDodge_t& v) {
    v.state = j.at("state").get<LolChampSelectLegacyGameflowGameDodgeState_t>();
    v.dodgeIds = j.at("dodgeIds").get<std::vector<uint64_t>>();
  }
}
