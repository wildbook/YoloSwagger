#ifndef SWAGGER_TYPES_LolMatchHistoryLoginSession_HPP
#define SWAGGER_TYPES_LolMatchHistoryLoginSession_HPP
#include <json.hpp>
#include "LolMatchHistoryLoginSessionStates.hpp"
namespace leagueapi {
  // 
  struct LolMatchHistoryLoginSession {
    // 
    LolMatchHistoryLoginSessionStates state;
    // 
    uint64_t summonerId;
    // 
    uint64_t accountId;
  };

  inline void to_json(nlohmann::json& j, const LolMatchHistoryLoginSession& v) {
    j["state"] = v.state;
    j["summonerId"] = v.summonerId;
    j["accountId"] = v.accountId;
  }

  inline void from_json(const nlohmann::json& j, LolMatchHistoryLoginSession& v) {
    v.state = j.at("state").get<LolMatchHistoryLoginSessionStates>;
    v.summonerId = j.at("summonerId").get<uint64_t>;
    v.accountId = j.at("accountId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LolMatchHistoryLoginSession_HPP
