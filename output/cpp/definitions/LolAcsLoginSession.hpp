#pragma once
#include <json.hpp>
#include <optional>
#include "LolAcsLoginSessionStates.hpp"
namespace leagueapi {
  struct LolAcsLoginSession_t {
    uint64_t accountId;
    nlohmann::json gasToken;
    std::string idToken;
    LolAcsLoginSessionStates_t state;
    uint64_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const LolAcsLoginSession_t& v) {
    j["accountId"] = v.accountId;
    j["gasToken"] = v.gasToken;
    j["idToken"] = v.idToken;
    j["state"] = v.state;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, LolAcsLoginSession_t& v) {
    v.accountId = j.at("accountId").get<uint64_t>();
    v.gasToken = j.at("gasToken").get<nlohmann::json>();
    v.idToken = j.at("idToken").get<std::string>();
    v.state = j.at("state").get<LolAcsLoginSessionStates_t>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
  }
}
