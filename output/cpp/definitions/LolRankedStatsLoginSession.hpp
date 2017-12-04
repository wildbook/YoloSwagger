#ifndef SWAGGER_TYPES_LolRankedStatsLoginSession_HPP
#define SWAGGER_TYPES_LolRankedStatsLoginSession_HPP
#include <json.hpp>
#include "LolRankedStatsLoginSessionStates.hpp"
namespace leagueapi {
  // 
  struct LolRankedStatsLoginSession {
    // 
    LolRankedStatsLoginSessionStates state;
    // 
    uint64_t summonerId;
    // 
    uint64_t accountId;
  };

  inline void to_json(nlohmann::json& j, const LolRankedStatsLoginSession& v) {
    j["state"] = v.state;
    j["summonerId"] = v.summonerId;
    j["accountId"] = v.accountId;
  }

  inline void from_json(const nlohmann::json& j, LolRankedStatsLoginSession& v) {
    v.state = j.at("state").get<LolRankedStatsLoginSessionStates>;
    v.summonerId = j.at("summonerId").get<uint64_t>;
    v.accountId = j.at("accountId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LolRankedStatsLoginSession_HPP
