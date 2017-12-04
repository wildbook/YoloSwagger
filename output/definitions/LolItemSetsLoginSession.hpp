#ifndef SWAGGER_TYPES_LolItemSetsLoginSession_HPP
#define SWAGGER_TYPES_LolItemSetsLoginSession_HPP
#include <json.hpp>
#include "LolItemSetsLoginSessionStates.hpp"
namespace leagueapi {
  // 
  struct LolItemSetsLoginSession {
    // 
    uint64_t accountId;
    // 
    LolItemSetsLoginSessionStates state;
    // 
    uint64_t summonerId;
  };

  void to_json(nlohmann::json& j, const LolItemSetsLoginSession& v) {
    j["accountId"] = v.accountId;
    j["state"] = v.state;
    j["summonerId"] = v.summonerId;
  }

  void from_json(const nlohmann::json& j, LolItemSetsLoginSession& v) {
    v.accountId = j.at("accountId").get<uint64_t>;
    v.state = j.at("state").get<LolItemSetsLoginSessionStates>;
    v.summonerId = j.at("summonerId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LolItemSetsLoginSession_HPP
