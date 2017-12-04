#ifndef SWAGGER_TYPES_LolMatchHistoryLoginSession_HPP
#define SWAGGER_TYPES_LolMatchHistoryLoginSession_HPP
#include <json.hpp>
#include "LolMatchHistoryLoginSessionStates.hpp"
namespace leagueapi {
  // 
  struct LolMatchHistoryLoginSession {
    // 
    uint64_t accountId;
    // 
    LolMatchHistoryLoginSessionStates state;
    // 
    uint64_t summonerId;
  };

  void to_json(nlohmann::json& j, const LolMatchHistoryLoginSession& v) {
    j["accountId"] = v.accountId;
    j["state"] = v.state;
    j["summonerId"] = v.summonerId;
  }

  void from_json(const nlohmann::json& j, LolMatchHistoryLoginSession& v) {
    v.accountId = j.at("accountId").get<uint64_t>;
    v.state = j.at("state").get<LolMatchHistoryLoginSessionStates>;
    v.summonerId = j.at("summonerId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LolMatchHistoryLoginSession_HPP
