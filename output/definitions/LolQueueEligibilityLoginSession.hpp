#ifndef SWAGGER_TYPES_LolQueueEligibilityLoginSession_HPP
#define SWAGGER_TYPES_LolQueueEligibilityLoginSession_HPP
#include <json.hpp>
#include "LolQueueEligibilityLoginSessionStates.hpp"
namespace leagueapi {
  // 
  struct LolQueueEligibilityLoginSession {
    // 
    uint64_t accountId;
    // 
    LolQueueEligibilityLoginSessionStates state;
    // 
    uint64_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const LolQueueEligibilityLoginSession& v) {
    j["accountId"] = v.accountId;
    j["state"] = v.state;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, LolQueueEligibilityLoginSession& v) {
    v.accountId = j.at("accountId").get<uint64_t>;
    v.state = j.at("state").get<LolQueueEligibilityLoginSessionStates>;
    v.summonerId = j.at("summonerId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LolQueueEligibilityLoginSession_HPP
