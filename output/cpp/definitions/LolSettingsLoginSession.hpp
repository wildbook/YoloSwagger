#pragma once
#include <json.hpp>
#include <optional>
#include "LolSettingsLoginSessionStates.hpp"
namespace leagueapi {
  struct LolSettingsLoginSession_t {
    uint64_t accountId;
    nlohmann::json gasToken;
    LolSettingsLoginSessionStates_t state;
    uint64_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const LolSettingsLoginSession_t& v) {
    j["accountId"] = v.accountId;
    j["gasToken"] = v.gasToken;
    j["state"] = v.state;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, LolSettingsLoginSession_t& v) {
    v.accountId = j.at("accountId").get<uint64_t>();
    v.gasToken = j.at("gasToken").get<nlohmann::json>();
    v.state = j.at("state").get<LolSettingsLoginSessionStates_t>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
  }
}
