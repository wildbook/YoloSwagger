#ifndef SWAGGER_TYPES_LolPftLoginSession_HPP
#define SWAGGER_TYPES_LolPftLoginSession_HPP
#include <json.hpp>
#include "LolPftLoginSessionStates.hpp"
namespace leagueapi {
  // 
  struct LolPftLoginSession {
    // 
    uint64_t accountId;
    // 
    std::string idToken;
    // 
    std::string puuid;
    // 
    LolPftLoginSessionStates state;
    // 
    uint64_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const LolPftLoginSession& v) {
    j["accountId"] = v.accountId;
    j["idToken"] = v.idToken;
    j["puuid"] = v.puuid;
    j["state"] = v.state;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, LolPftLoginSession& v) {
    v.accountId = j.at("accountId").get<uint64_t>;
    v.idToken = j.at("idToken").get<std::string>;
    v.puuid = j.at("puuid").get<std::string>;
    v.state = j.at("state").get<LolPftLoginSessionStates>;
    v.summonerId = j.at("summonerId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LolPftLoginSession_HPP
