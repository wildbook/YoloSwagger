#ifndef SWAGGER_TYPES_LolGameSettingsLoginSession_HPP
#define SWAGGER_TYPES_LolGameSettingsLoginSession_HPP
#include <json.hpp>
#include "LolGameSettingsLoginSessionStates.hpp"
namespace leagueapi {
  // 
  struct LolGameSettingsLoginSession {
    // 
    LolGameSettingsLoginSessionStates state;
    // 
    uint64_t summonerId;
    // 
    nlohmann::json gasToken;
    // 
    uint64_t accountId;
  };

  inline void to_json(nlohmann::json& j, const LolGameSettingsLoginSession& v) {
    j["state"] = v.state;
    j["summonerId"] = v.summonerId;
    j["gasToken"] = v.gasToken;
    j["accountId"] = v.accountId;
  }

  inline void from_json(const nlohmann::json& j, LolGameSettingsLoginSession& v) {
    v.state = j.at("state").get<LolGameSettingsLoginSessionStates>;
    v.summonerId = j.at("summonerId").get<uint64_t>;
    v.gasToken = j.at("gasToken").get<nlohmann::json>;
    v.accountId = j.at("accountId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LolGameSettingsLoginSession_HPP
