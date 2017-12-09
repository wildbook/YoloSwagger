#pragma once
#include <json.hpp>
#include <optional>
#include "LoginSessionStates.hpp"
namespace leagueapi {
  struct LoginSession_t {
    uint64_t summonerId;
    LoginSessionStates_t state;
    uint64_t accountId;
    std::string idToken;
  };

  inline void to_json(nlohmann::json& j, const LoginSession_t& v) {
    j["summonerId"] = v.summonerId;
    j["state"] = v.state;
    j["accountId"] = v.accountId;
    j["idToken"] = v.idToken;
  }

  inline void from_json(const nlohmann::json& j, LoginSession_t& v) {
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.state = j.at("state").get<LoginSessionStates_t>();
    v.accountId = j.at("accountId").get<uint64_t>();
    v.idToken = j.at("idToken").get<std::string>();
  }
  inline std::string to_string(const LoginSession_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
