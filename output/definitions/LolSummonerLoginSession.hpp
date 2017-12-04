#ifndef SWAGGER_TYPES_LolSummonerLoginSession_HPP
#define SWAGGER_TYPES_LolSummonerLoginSession_HPP
#include <json.hpp>
#include "LolSummonerLoginSessionStates.hpp"
namespace leagueapi {
  // 
  struct LolSummonerLoginSession {
    // 
    uint64_t accountId;
    // 
    bool connected;
    // 
    LolSummonerLoginSessionStates state;
    // 
    uint64_t summonerId;
  };

  void to_json(nlohmann::json& j, const LolSummonerLoginSession& v) {
    j["accountId"] = v.accountId;
    j["connected"] = v.connected;
    j["state"] = v.state;
    j["summonerId"] = v.summonerId;
  }

  void from_json(const nlohmann::json& j, LolSummonerLoginSession& v) {
    v.accountId = j.at("accountId").get<uint64_t>;
    v.connected = j.at("connected").get<bool>;
    v.state = j.at("state").get<LolSummonerLoginSessionStates>;
    v.summonerId = j.at("summonerId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LolSummonerLoginSession_HPP
