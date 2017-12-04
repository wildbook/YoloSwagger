#ifndef SWAGGER_TYPES_LolPerksLoginSession_HPP
#define SWAGGER_TYPES_LolPerksLoginSession_HPP
#include <json.hpp>
#include "LolPerksLoginSessionState.hpp"
namespace leagueapi {
  // 
  struct LolPerksLoginSession {
    // 
    uint64_t accountId;
    // 
    LolPerksLoginSessionState state;
    // 
    uint64_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const LolPerksLoginSession& v) {
    j["accountId"] = v.accountId;
    j["state"] = v.state;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, LolPerksLoginSession& v) {
    v.accountId = j.at("accountId").get<uint64_t>;
    v.state = j.at("state").get<LolPerksLoginSessionState>;
    v.summonerId = j.at("summonerId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LolPerksLoginSession_HPP
