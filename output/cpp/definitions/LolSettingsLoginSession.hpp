#pragma once
#include <json.hpp>
#include <optional>
#include "LolSettingsLoginSessionStates.hpp"
namespace leagueapi {
  struct LolSettingsLoginSession_t {
    LolSettingsLoginSessionStates_t state;
    uint64_t summonerId;
    nlohmann::json gasToken;
    uint64_t accountId;
  };

  inline void to_json(nlohmann::json& j, const LolSettingsLoginSession_t& v) {
    j["state"] = v.state;
    j["summonerId"] = v.summonerId;
    j["gasToken"] = v.gasToken;
    j["accountId"] = v.accountId;
  }

  inline void from_json(const nlohmann::json& j, LolSettingsLoginSession_t& v) {
    v.state = j.at("state").get<LolSettingsLoginSessionStates_t>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.gasToken = j.at("gasToken").get<nlohmann::json>();
    v.accountId = j.at("accountId").get<uint64_t>();
  }
  inline std::string to_string(const LolSettingsLoginSession_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
