#ifndef SWAGGER_TYPES_LolEndOfGameLoginSession_HPP
#define SWAGGER_TYPES_LolEndOfGameLoginSession_HPP
#include <json.hpp>
#include "LolEndOfGameLoginSessionStates.hpp"
namespace leagueapi {
  // 
  struct LolEndOfGameLoginSession {
    // 
    LolEndOfGameLoginSessionStates state;
    // 
    uint64_t summonerId;
    // 
    uint64_t accountId;
  };

  inline void to_json(nlohmann::json& j, const LolEndOfGameLoginSession& v) {
    j["state"] = v.state;
    j["summonerId"] = v.summonerId;
    j["accountId"] = v.accountId;
  }

  inline void from_json(const nlohmann::json& j, LolEndOfGameLoginSession& v) {
    v.state = j.at("state").get<LolEndOfGameLoginSessionStates>;
    v.summonerId = j.at("summonerId").get<uint64_t>;
    v.accountId = j.at("accountId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LolEndOfGameLoginSession_HPP
