#ifndef SWAGGER_TYPES_LolLeaguesLoginSession_HPP
#define SWAGGER_TYPES_LolLeaguesLoginSession_HPP
#include <json.hpp>
#include "LolLeaguesLoginSessionStates.hpp"
namespace leagueapi {
  // 
  struct LolLeaguesLoginSession {
    // 
    uint64_t accountId;
    // 
    LolLeaguesLoginSessionStates state;
    // 
    uint64_t summonerId;
  };

  void to_json(nlohmann::json& j, const LolLeaguesLoginSession& v) {
    j["accountId"] = v.accountId;
    j["state"] = v.state;
    j["summonerId"] = v.summonerId;
  }

  void from_json(const nlohmann::json& j, LolLeaguesLoginSession& v) {
    v.accountId = j.at("accountId").get<uint64_t>;
    v.state = j.at("state").get<LolLeaguesLoginSessionStates>;
    v.summonerId = j.at("summonerId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LolLeaguesLoginSession_HPP
