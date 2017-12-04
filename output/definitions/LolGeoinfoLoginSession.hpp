#ifndef SWAGGER_TYPES_LolGeoinfoLoginSession_HPP
#define SWAGGER_TYPES_LolGeoinfoLoginSession_HPP
#include <json.hpp>
#include "LolGeoinfoLoginSessionState.hpp"
namespace leagueapi {
  // 
  struct LolGeoinfoLoginSession {
    // 
    uint64_t accountId;
    // 
    LolGeoinfoLoginSessionState state;
    // 
    uint64_t summonerId;
  };

  void to_json(nlohmann::json& j, const LolGeoinfoLoginSession& v) {
    j["accountId"] = v.accountId;
    j["state"] = v.state;
    j["summonerId"] = v.summonerId;
  }

  void from_json(const nlohmann::json& j, LolGeoinfoLoginSession& v) {
    v.accountId = j.at("accountId").get<uint64_t>;
    v.state = j.at("state").get<LolGeoinfoLoginSessionState>;
    v.summonerId = j.at("summonerId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LolGeoinfoLoginSession_HPP
