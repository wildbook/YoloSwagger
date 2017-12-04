#ifndef SWAGGER_TYPES_LolPlayerBehaviorPlayerBehavior_LoginSession_HPP
#define SWAGGER_TYPES_LolPlayerBehaviorPlayerBehavior_LoginSession_HPP
#include <json.hpp>
#include "LolPlayerBehaviorPlayerBehavior_LoginSessionState.hpp"
#include "LolPlayerBehaviorPlayerBehavior_LoginError.hpp"
namespace leagueapi {
  // 
  struct LolPlayerBehaviorPlayerBehavior_LoginSession {
    // 
    LolPlayerBehaviorPlayerBehavior_LoginSessionState state;
    // 
    LolPlayerBehaviorPlayerBehavior_LoginError error;
    // 
    uint64_t summonerId;
    // 
    uint64_t accountId;
  };

  inline void to_json(nlohmann::json& j, const LolPlayerBehaviorPlayerBehavior_LoginSession& v) {
    j["state"] = v.state;
    j["error"] = v.error;
    j["summonerId"] = v.summonerId;
    j["accountId"] = v.accountId;
  }

  inline void from_json(const nlohmann::json& j, LolPlayerBehaviorPlayerBehavior_LoginSession& v) {
    v.state = j.at("state").get<LolPlayerBehaviorPlayerBehavior_LoginSessionState>;
    v.error = j.at("error").get<LolPlayerBehaviorPlayerBehavior_LoginError>;
    v.summonerId = j.at("summonerId").get<uint64_t>;
    v.accountId = j.at("accountId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LolPlayerBehaviorPlayerBehavior_LoginSession_HPP
