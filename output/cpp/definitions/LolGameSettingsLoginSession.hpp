#pragma once
#include <json.hpp>
#include <optional>
#include "LolGameSettingsLoginSessionStates.hpp"
namespace leagueapi {
  struct LolGameSettingsLoginSession_t {
    LolGameSettingsLoginSessionStates_t state;
    uint64_t_t summonerId;
    nlohmann::json_t gasToken;
    uint64_t_t accountId;
  };

  inline void to_json(nlohmann::json& j, const LolGameSettingsLoginSession_t& v) {
    j["state"] = v.state;
    j["summonerId"] = v.summonerId;
    j["gasToken"] = v.gasToken;
    j["accountId"] = v.accountId;
  }

  inline void from_json(const nlohmann::json& j, LolGameSettingsLoginSession_t& v) {
    v.state = j.at("state").get<LolGameSettingsLoginSessionStates_t>();
    v.summonerId = j.at("summonerId").get<uint64_t_t>();
    v.gasToken = j.at("gasToken").get<nlohmann::json_t>();
    v.accountId = j.at("accountId").get<uint64_t_t>();
  }
  inline std::string to_string(const LolGameSettingsLoginSession_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
