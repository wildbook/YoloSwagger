#ifndef SWAGGER_TYPES_LolLootLoginSession_HPP
#define SWAGGER_TYPES_LolLootLoginSession_HPP
#include <json.hpp>
#include "LolLootLoginSessionStates.hpp"
namespace test {
  // 
  struct LolLootLoginSession {
'    // 
    uint64_t accountId;
    // 
    LolLootLoginSessionStates state;
    // 
    uint64_t summonerId;
  };

  void to_json(nlohmann::json& j, const LolLootLoginSession& v) {
    j["accountId"] = v.accountId;
    j["state"] = v.state;
    j["summonerId"] = v.summonerId;
  }

  void from_json(const nlohmann::json& j, LolLootLoginSession& v) {
    v.accountId = j.at("accountId").get<uint64_t>;
    v.state = j.at("state").get<LolLootLoginSessionStates>;
    v.summonerId = j.at("summonerId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LolLootLoginSession_HPP
