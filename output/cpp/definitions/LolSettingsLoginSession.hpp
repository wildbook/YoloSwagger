#pragma once
#include <json.hpp>
#include <optional>
#include "LolSettingsLoginSessionStates.hpp"
namespace leagueapi {
  struct LolSettingsLoginSession_t {
    uint64_t accountId;
    LolSettingsLoginSessionStates_t state;
    nlohmann::json gasToken;
    uint64_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const LolSettingsLoginSession_t& v) {
    j["accountId"] = v.accountId;
    j["state"] = v.state;
    j["gasToken"] = v.gasToken;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, LolSettingsLoginSession_t& v) {
    v.accountId = j.at("accountId").get<uint64_t>();
    v.state = j.at("state").get<LolSettingsLoginSessionStates_t>();
    v.gasToken = j.at("gasToken").get<nlohmann::json>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
  }
  inline std::string to_string(const LolSettingsLoginSession_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
