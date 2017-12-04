#ifndef SWAGGER_TYPES_LolHonorV2LoginSession_HPP
#define SWAGGER_TYPES_LolHonorV2LoginSession_HPP
#include <json.hpp>
#include "LolHonorV2LoginSessionStates.hpp"
namespace leagueapi {
  // 
  struct LolHonorV2LoginSession {
    // 
    uint64_t accountId;
    // 
    LolHonorV2LoginSessionStates state;
    // 
    uint64_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const LolHonorV2LoginSession& v) {
    j["accountId"] = v.accountId;
    j["state"] = v.state;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, LolHonorV2LoginSession& v) {
    v.accountId = j.at("accountId").get<uint64_t>;
    v.state = j.at("state").get<LolHonorV2LoginSessionStates>;
    v.summonerId = j.at("summonerId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LolHonorV2LoginSession_HPP
