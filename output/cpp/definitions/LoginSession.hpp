#pragma once
#include <json.hpp>
#include <optional>
#include "LoginSessionStates.hpp"
namespace leagueapi {
  struct LoginSession_t {
    uint64_t accountId;
    uint64_t summonerId;
    LoginSessionStates_t state;
    std::string idToken;
  };

  inline void to_json(nlohmann::json& j, const LoginSession_t& v) {
    j["accountId"] = v.accountId;
    j["summonerId"] = v.summonerId;
    j["state"] = v.state;
    j["idToken"] = v.idToken;
  }

  inline void from_json(const nlohmann::json& j, LoginSession_t& v) {
    v.accountId = j.at("accountId").get<uint64_t>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.state = j.at("state").get<LoginSessionStates_t>();
    v.idToken = j.at("idToken").get<std::string>();
  }
}
