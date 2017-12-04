#ifndef SWAGGER_TYPES_LolInventoryLoginSession_HPP
#define SWAGGER_TYPES_LolInventoryLoginSession_HPP
#include <json.hpp>
#include "LolInventoryLoginSessionStates.hpp"
namespace leagueapi {
  // 
  struct LolInventoryLoginSession {
    // 
    std::string idToken;
    // 
    LolInventoryLoginSessionStates state;
    // 
    std::string puuid;
    // 
    nlohmann::json gasToken;
    // 
    uint64_t summonerId;
    // 
    uint64_t accountId;
  };

  inline void to_json(nlohmann::json& j, const LolInventoryLoginSession& v) {
    j["idToken"] = v.idToken;
    j["state"] = v.state;
    j["puuid"] = v.puuid;
    j["gasToken"] = v.gasToken;
    j["summonerId"] = v.summonerId;
    j["accountId"] = v.accountId;
  }

  inline void from_json(const nlohmann::json& j, LolInventoryLoginSession& v) {
    v.idToken = j.at("idToken").get<std::string>;
    v.state = j.at("state").get<LolInventoryLoginSessionStates>;
    v.puuid = j.at("puuid").get<std::string>;
    v.gasToken = j.at("gasToken").get<nlohmann::json>;
    v.summonerId = j.at("summonerId").get<uint64_t>;
    v.accountId = j.at("accountId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LolInventoryLoginSession_HPP
