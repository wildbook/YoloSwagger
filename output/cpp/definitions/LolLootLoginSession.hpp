#ifndef SWAGGER_TYPES_LolLootLoginSession_HPP
#define SWAGGER_TYPES_LolLootLoginSession_HPP
#include <json.hpp>
#include "LolLootLoginSessionStates.hpp"
namespace leagueapi {
  // 
  struct LolLootLoginSession {
    // 
    LolLootLoginSessionStates state;
    // 
    uint64_t summonerId;
    // 
    uint64_t accountId;
  };

  inline void to_json(nlohmann::json& j, const LolLootLoginSession& v) {
    j["state"] = v.state;
    j["summonerId"] = v.summonerId;
    j["accountId"] = v.accountId;
  }

  inline void from_json(const nlohmann::json& j, LolLootLoginSession& v) {
    v.state = j.at("state").get<LolLootLoginSessionStates>;
    v.summonerId = j.at("summonerId").get<uint64_t>;
    v.accountId = j.at("accountId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LolLootLoginSession_HPP
