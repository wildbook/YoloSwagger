#ifndef SWAGGER_TYPES_LolPersonalizedOffersLoginSession_HPP
#define SWAGGER_TYPES_LolPersonalizedOffersLoginSession_HPP
#include <json.hpp>
#include "LolPersonalizedOffersLoginSessionStates.hpp"
namespace leagueapi {
  // 
  struct LolPersonalizedOffersLoginSession {
    // 
    uint64_t accountId;
    // 
    nlohmann::json gasToken;
    // 
    std::string idToken;
    // 
    LolPersonalizedOffersLoginSessionStates state;
    // 
    uint64_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const LolPersonalizedOffersLoginSession& v) {
    j["accountId"] = v.accountId;
    j["gasToken"] = v.gasToken;
    j["idToken"] = v.idToken;
    j["state"] = v.state;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, LolPersonalizedOffersLoginSession& v) {
    v.accountId = j.at("accountId").get<uint64_t>;
    v.gasToken = j.at("gasToken").get<nlohmann::json>;
    v.idToken = j.at("idToken").get<std::string>;
    v.state = j.at("state").get<LolPersonalizedOffersLoginSessionStates>;
    v.summonerId = j.at("summonerId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LolPersonalizedOffersLoginSession_HPP
