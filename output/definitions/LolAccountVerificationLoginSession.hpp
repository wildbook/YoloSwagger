#ifndef SWAGGER_TYPES_LolAccountVerificationLoginSession_HPP
#define SWAGGER_TYPES_LolAccountVerificationLoginSession_HPP
#include <json.hpp>
#include "LolAccountVerificationLoginSessionState.hpp"
namespace leagueapi {
  // 
  struct LolAccountVerificationLoginSession {
    // 
    uint64_t accountId;
    // 
    LolAccountVerificationLoginSessionState state;
    // 
    uint64_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const LolAccountVerificationLoginSession& v) {
    j["accountId"] = v.accountId;
    j["state"] = v.state;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, LolAccountVerificationLoginSession& v) {
    v.accountId = j.at("accountId").get<uint64_t>;
    v.state = j.at("state").get<LolAccountVerificationLoginSessionState>;
    v.summonerId = j.at("summonerId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LolAccountVerificationLoginSession_HPP
