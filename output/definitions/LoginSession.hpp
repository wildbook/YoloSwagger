#ifndef SWAGGER_TYPES_LoginSession_HPP
#define SWAGGER_TYPES_LoginSession_HPP
#include <json.hpp>
#include "LoginSessionStates.hpp"
namespace leagueapi {
  // 
  struct LoginSession {
    // 
    uint64_t accountId;
    // 
    std::string idToken;
    // 
    LoginSessionStates state;
    // 
    uint64_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const LoginSession& v) {
    j["accountId"] = v.accountId;
    j["idToken"] = v.idToken;
    j["state"] = v.state;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, LoginSession& v) {
    v.accountId = j.at("accountId").get<uint64_t>;
    v.idToken = j.at("idToken").get<std::string>;
    v.state = j.at("state").get<LoginSessionStates>;
    v.summonerId = j.at("summonerId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LoginSession_HPP
