#ifndef SWAGGER_TYPES_LolGeoinfoLoginSession_HPP
#define SWAGGER_TYPES_LolGeoinfoLoginSession_HPP
#include <json.hpp>
#include "LolGeoinfoLoginSessionState.hpp"
namespace leagueapi {
  // 
  struct LolGeoinfoLoginSession {
    // 
    LolGeoinfoLoginSessionState state;
    // 
    uint64_t summonerId;
    // 
    uint64_t accountId;
  };

  inline void to_json(nlohmann::json& j, const LolGeoinfoLoginSession& v) {
    j["state"] = v.state;
    j["summonerId"] = v.summonerId;
    j["accountId"] = v.accountId;
  }

  inline void from_json(const nlohmann::json& j, LolGeoinfoLoginSession& v) {
    v.state = j.at("state").get<LolGeoinfoLoginSessionState>;
    v.summonerId = j.at("summonerId").get<uint64_t>;
    v.accountId = j.at("accountId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LolGeoinfoLoginSession_HPP