#ifndef SWAGGER_TYPES_LolFeaturedModesLoginSession_HPP
#define SWAGGER_TYPES_LolFeaturedModesLoginSession_HPP
#include <json.hpp>
#include "LolFeaturedModesLoginSessionStates.hpp"
namespace leagueapi {
  // 
  struct LolFeaturedModesLoginSession {
    // 
    uint64_t accountId;
    // 
    LolFeaturedModesLoginSessionStates state;
    // 
    uint64_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const LolFeaturedModesLoginSession& v) {
    j["accountId"] = v.accountId;
    j["state"] = v.state;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, LolFeaturedModesLoginSession& v) {
    v.accountId = j.at("accountId").get<uint64_t>;
    v.state = j.at("state").get<LolFeaturedModesLoginSessionStates>;
    v.summonerId = j.at("summonerId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LolFeaturedModesLoginSession_HPP
