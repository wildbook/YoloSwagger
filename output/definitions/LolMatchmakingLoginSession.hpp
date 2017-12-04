#ifndef SWAGGER_TYPES_LolMatchmakingLoginSession_HPP
#define SWAGGER_TYPES_LolMatchmakingLoginSession_HPP
#include <json.hpp>
#include "LolMatchmakingLoginSessionState.hpp"
namespace leagueapi {
  // 
  struct LolMatchmakingLoginSession {
    // 
    uint64_t accountId;
    // 
    bool connected;
    // 
    LolMatchmakingLoginSessionState state;
    // 
    uint64_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const LolMatchmakingLoginSession& v) {
    j["accountId"] = v.accountId;
    j["connected"] = v.connected;
    j["state"] = v.state;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, LolMatchmakingLoginSession& v) {
    v.accountId = j.at("accountId").get<uint64_t>;
    v.connected = j.at("connected").get<bool>;
    v.state = j.at("state").get<LolMatchmakingLoginSessionState>;
    v.summonerId = j.at("summonerId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LolMatchmakingLoginSession_HPP
