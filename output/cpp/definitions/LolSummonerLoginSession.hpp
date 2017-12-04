#ifndef SWAGGER_TYPES_LolSummonerLoginSession_HPP
#define SWAGGER_TYPES_LolSummonerLoginSession_HPP
#include <json.hpp>
#include "LolSummonerLoginSessionStates.hpp"
namespace leagueapi {
  // 
  struct LolSummonerLoginSession {
    // 
    LolSummonerLoginSessionStates state;
    // 
    bool connected;
    // 
    uint64_t summonerId;
    // 
    uint64_t accountId;
  };

  inline void to_json(nlohmann::json& j, const LolSummonerLoginSession& v) {
    j["state"] = v.state;
    j["connected"] = v.connected;
    j["summonerId"] = v.summonerId;
    j["accountId"] = v.accountId;
  }

  inline void from_json(const nlohmann::json& j, LolSummonerLoginSession& v) {
    v.state = j.at("state").get<LolSummonerLoginSessionStates>;
    v.connected = j.at("connected").get<bool>;
    v.summonerId = j.at("summonerId").get<uint64_t>;
    v.accountId = j.at("accountId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LolSummonerLoginSession_HPP
