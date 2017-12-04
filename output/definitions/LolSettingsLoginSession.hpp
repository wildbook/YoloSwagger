#ifndef SWAGGER_TYPES_LolSettingsLoginSession_HPP
#define SWAGGER_TYPES_LolSettingsLoginSession_HPP
#include <json.hpp>
#include "LolSettingsLoginSessionStates.hpp"
namespace leagueapi {
  // 
  struct LolSettingsLoginSession {
    // 
    uint64_t accountId;
    // 
    nlohmann::json gasToken;
    // 
    LolSettingsLoginSessionStates state;
    // 
    uint64_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const LolSettingsLoginSession& v) {
    j["accountId"] = v.accountId;
    j["gasToken"] = v.gasToken;
    j["state"] = v.state;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, LolSettingsLoginSession& v) {
    v.accountId = j.at("accountId").get<uint64_t>;
    v.gasToken = j.at("gasToken").get<nlohmann::json>;
    v.state = j.at("state").get<LolSettingsLoginSessionStates>;
    v.summonerId = j.at("summonerId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LolSettingsLoginSession_HPP
