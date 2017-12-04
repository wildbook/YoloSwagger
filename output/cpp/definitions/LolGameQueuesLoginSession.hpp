#ifndef SWAGGER_TYPES_LolGameQueuesLoginSession_HPP
#define SWAGGER_TYPES_LolGameQueuesLoginSession_HPP
#include <json.hpp>
#include "LolGameQueuesLoginSessionStates.hpp"
namespace leagueapi {
  // 
  struct LolGameQueuesLoginSession {
    // 
    LolGameQueuesLoginSessionStates state;
    // 
    bool connected;
    // 
    uint64_t summonerId;
    // 
    uint64_t accountId;
  };

  inline void to_json(nlohmann::json& j, const LolGameQueuesLoginSession& v) {
    j["state"] = v.state;
    j["connected"] = v.connected;
    j["summonerId"] = v.summonerId;
    j["accountId"] = v.accountId;
  }

  inline void from_json(const nlohmann::json& j, LolGameQueuesLoginSession& v) {
    v.state = j.at("state").get<LolGameQueuesLoginSessionStates>;
    v.connected = j.at("connected").get<bool>;
    v.summonerId = j.at("summonerId").get<uint64_t>;
    v.accountId = j.at("accountId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LolGameQueuesLoginSession_HPP
