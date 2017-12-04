#ifndef SWAGGER_TYPES_LolPlayerBehaviorPlayerBehavior_LoginSession_HPP
#define SWAGGER_TYPES_LolPlayerBehaviorPlayerBehavior_LoginSession_HPP
#include <json.hpp>
#include "LolPlayerBehaviorPlayerBehavior_LoginSessionState.hpp"
#include "LolPlayerBehaviorPlayerBehavior_LoginError.hpp"
namespace leagueapi {
  // 
  struct LolPlayerBehaviorPlayerBehavior_LoginSession {
    // 
    uint64_t accountId;
    // 
    LolPlayerBehaviorPlayerBehavior_LoginError error;
    // 
    LolPlayerBehaviorPlayerBehavior_LoginSessionState state;
    // 
    uint64_t summonerId;
  };

  void to_json(nlohmann::json& j, const LolPlayerBehaviorPlayerBehavior_LoginSession& v) {
    j["accountId"] = v.accountId;
    j["error"] = v.error;
    j["state"] = v.state;
    j["summonerId"] = v.summonerId;
  }

  void from_json(const nlohmann::json& j, LolPlayerBehaviorPlayerBehavior_LoginSession& v) {
    v.accountId = j.at("accountId").get<uint64_t>;
    v.error = j.at("error").get<LolPlayerBehaviorPlayerBehavior_LoginError>;
    v.state = j.at("state").get<LolPlayerBehaviorPlayerBehavior_LoginSessionState>;
    v.summonerId = j.at("summonerId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LolPlayerBehaviorPlayerBehavior_LoginSession_HPP
