#pragma once
#include <json.hpp>
#include <optional>
#include "LolSettingsLoginSessionStates.hpp"
namespace leagueapi {
  struct LolSettingsLoginSession_t {
    nlohmann::json gasToken;
    LolSettingsLoginSessionStates_t state;
    uint64_t accountId;
    uint64_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const LolSettingsLoginSession_t& v) {
    j["gasToken"] = v.gasToken;
    j["state"] = v.state;
    j["accountId"] = v.accountId;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, LolSettingsLoginSession_t& v) {
    v.gasToken = j.at("gasToken").get<nlohmann::json>();
    v.state = j.at("state").get<LolSettingsLoginSessionStates_t>();
    v.accountId = j.at("accountId").get<uint64_t>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
  }
  inline std::string to_string(const LolSettingsLoginSession_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
