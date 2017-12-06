#pragma once
#include <json.hpp>
#include <optional>
#include "LolGameSettingsLoginSessionStates.hpp"
namespace leagueapi {
  struct LolGameSettingsLoginSession_t {
    uint64_t accountId;
    uint64_t summonerId;
    nlohmann::json gasToken;
    LolGameSettingsLoginSessionStates_t state;
  };

  inline void to_json(nlohmann::json& j, const LolGameSettingsLoginSession_t& v) {
    j["accountId"] = v.accountId;
    j["summonerId"] = v.summonerId;
    j["gasToken"] = v.gasToken;
    j["state"] = v.state;
  }

  inline void from_json(const nlohmann::json& j, LolGameSettingsLoginSession_t& v) {
    v.accountId = j.at("accountId").get<uint64_t>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.gasToken = j.at("gasToken").get<nlohmann::json>();
    v.state = j.at("state").get<LolGameSettingsLoginSessionStates_t>();
  }
}
