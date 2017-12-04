#ifndef SWAGGER_TYPES_LolAcsLoginSession_HPP
#define SWAGGER_TYPES_LolAcsLoginSession_HPP
#include <json.hpp>
#include "LolAcsLoginSessionStates.hpp"
namespace leagueapi {
  // 
  struct LolAcsLoginSession {
    // 
    std::string idToken;
    // 
    LolAcsLoginSessionStates state;
    // 
    uint64_t summonerId;
    // 
    nlohmann::json gasToken;
    // 
    uint64_t accountId;
  };

  inline void to_json(nlohmann::json& j, const LolAcsLoginSession& v) {
    j["idToken"] = v.idToken;
    j["state"] = v.state;
    j["summonerId"] = v.summonerId;
    j["gasToken"] = v.gasToken;
    j["accountId"] = v.accountId;
  }

  inline void from_json(const nlohmann::json& j, LolAcsLoginSession& v) {
    v.idToken = j.at("idToken").get<std::string>;
    v.state = j.at("state").get<LolAcsLoginSessionStates>;
    v.summonerId = j.at("summonerId").get<uint64_t>;
    v.gasToken = j.at("gasToken").get<nlohmann::json>;
    v.accountId = j.at("accountId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LolAcsLoginSession_HPP
