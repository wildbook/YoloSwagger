#pragma once
#include <json.hpp>
#include <optional>
#include "LolGameSettingsLoginSessionStates.hpp"
namespace leagueapi {
  struct LolGameSettingsLoginSession_t {
    uint64_t accountId;
    LolGameSettingsLoginSessionStates_t state;
    nlohmann::json gasToken;
    uint64_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const LolGameSettingsLoginSession_t& v) {
    j["accountId"] = v.accountId;
    j["state"] = v.state;
    j["gasToken"] = v.gasToken;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, LolGameSettingsLoginSession_t& v) {
    v.accountId = j.at("accountId").get<uint64_t>();
    v.state = j.at("state").get<LolGameSettingsLoginSessionStates_t>();
    v.gasToken = j.at("gasToken").get<nlohmann::json>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
  }
  inline std::string to_string(const LolGameSettingsLoginSession_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
