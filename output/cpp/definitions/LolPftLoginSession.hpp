#ifndef SWAGGER_TYPES_LolPftLoginSession_HPP
#define SWAGGER_TYPES_LolPftLoginSession_HPP
#include <json.hpp>
#include "LolPftLoginSessionStates.hpp"
namespace leagueapi {
  // 
  struct LolPftLoginSession {
    // 
    std::string idToken;
    // 
    LolPftLoginSessionStates state;
    // 
    std::string puuid;
    // 
    uint64_t summonerId;
    // 
    uint64_t accountId;
  };

  inline void to_json(nlohmann::json& j, const LolPftLoginSession& v) {
    j["idToken"] = v.idToken;
    j["state"] = v.state;
    j["puuid"] = v.puuid;
    j["summonerId"] = v.summonerId;
    j["accountId"] = v.accountId;
  }

  inline void from_json(const nlohmann::json& j, LolPftLoginSession& v) {
    v.idToken = j.at("idToken").get<std::string>;
    v.state = j.at("state").get<LolPftLoginSessionStates>;
    v.puuid = j.at("puuid").get<std::string>;
    v.summonerId = j.at("summonerId").get<uint64_t>;
    v.accountId = j.at("accountId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LolPftLoginSession_HPP
