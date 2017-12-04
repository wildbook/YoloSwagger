#ifndef SWAGGER_TYPES_LolRankedStatsLoginSession_HPP
#define SWAGGER_TYPES_LolRankedStatsLoginSession_HPP
#include <json.hpp>
#include "LolRankedStatsLoginSessionStates.hpp"
namespace test {
  // 
  struct LolRankedStatsLoginSession {
'    // 
    uint64_t accountId;
    // 
    LolRankedStatsLoginSessionStates state;
    // 
    uint64_t summonerId;
  };

  void to_json(nlohmann::json& j, const LolRankedStatsLoginSession& v) {
    j["accountId"] = v.accountId;
    j["state"] = v.state;
    j["summonerId"] = v.summonerId;
  }

  void from_json(const nlohmann::json& j, LolRankedStatsLoginSession& v) {
    v.accountId = j.at("accountId").get<uint64_t>;
    v.state = j.at("state").get<LolRankedStatsLoginSessionStates>;
    v.summonerId = j.at("summonerId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LolRankedStatsLoginSession_HPP
