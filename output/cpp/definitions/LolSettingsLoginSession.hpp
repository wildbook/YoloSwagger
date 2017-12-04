#ifndef SWAGGER_TYPES_LolSettingsLoginSession_HPP
#define SWAGGER_TYPES_LolSettingsLoginSession_HPP
#include <json.hpp>
#include "LolSettingsLoginSessionStates.hpp"
namespace leagueapi {
  // 
  struct LolSettingsLoginSession {
    // 
    LolSettingsLoginSessionStates state;
    // 
    uint64_t summonerId;
    // 
    nlohmann::json gasToken;
    // 
    uint64_t accountId;
  };

  inline void to_json(nlohmann::json& j, const LolSettingsLoginSession& v) {
    j["state"] = v.state;
    j["summonerId"] = v.summonerId;
    j["gasToken"] = v.gasToken;
    j["accountId"] = v.accountId;
  }

  inline void from_json(const nlohmann::json& j, LolSettingsLoginSession& v) {
    v.state = j.at("state").get<LolSettingsLoginSessionStates>;
    v.summonerId = j.at("summonerId").get<uint64_t>;
    v.gasToken = j.at("gasToken").get<nlohmann::json>;
    v.accountId = j.at("accountId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LolSettingsLoginSession_HPP
