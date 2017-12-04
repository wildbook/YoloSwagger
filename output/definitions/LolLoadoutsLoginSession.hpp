#ifndef SWAGGER_TYPES_LolLoadoutsLoginSession_HPP
#define SWAGGER_TYPES_LolLoadoutsLoginSession_HPP
#include <json.hpp>
#include "LolLoadoutsLoginSessionStates.hpp"
namespace test {
  // 
  struct LolLoadoutsLoginSession {
'    // 
    uint64_t accountId;
    // 
    nlohmann::json gasToken;
    // 
    std::string idToken;
    // 
    std::string puuid;
    // 
    LolLoadoutsLoginSessionStates state;
    // 
    uint64_t summonerId;
  };

  void to_json(nlohmann::json& j, const LolLoadoutsLoginSession& v) {
    j["accountId"] = v.accountId;
    j["gasToken"] = v.gasToken;
    j["idToken"] = v.idToken;
    j["puuid"] = v.puuid;
    j["state"] = v.state;
    j["summonerId"] = v.summonerId;
  }

  void from_json(const nlohmann::json& j, LolLoadoutsLoginSession& v) {
    v.accountId = j.at("accountId").get<uint64_t>;
    v.gasToken = j.at("gasToken").get<nlohmann::json>;
    v.idToken = j.at("idToken").get<std::string>;
    v.puuid = j.at("puuid").get<std::string>;
    v.state = j.at("state").get<LolLoadoutsLoginSessionStates>;
    v.summonerId = j.at("summonerId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LolLoadoutsLoginSession_HPP
