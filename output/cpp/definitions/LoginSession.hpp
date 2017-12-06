#pragma once
#include <json.hpp>
#include <optional>
#include "LoginSessionStates.hpp"
namespace leagueapi {
  struct LoginSession_t {
    uint64_t accountId;
    std::string idToken;
    LoginSessionStates_t state;
    uint64_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const LoginSession_t& v) {
    j["accountId"] = v.accountId;
    j["idToken"] = v.idToken;
    j["state"] = v.state;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, LoginSession_t& v) {
    v.accountId = j.at("accountId").get<uint64_t>();
    v.idToken = j.at("idToken").get<std::string>();
    v.state = j.at("state").get<LoginSessionStates_t>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
  }
}
