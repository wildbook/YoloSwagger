#ifndef SWAGGER_TYPES_LolGameQueuesLoginSession_HPP
#define SWAGGER_TYPES_LolGameQueuesLoginSession_HPP
#include <json.hpp>
#include "LolGameQueuesLoginSessionStates.hpp"
namespace test {
  // 
  struct LolGameQueuesLoginSession {
'    // 
    uint64_t accountId;
    // 
    bool connected;
    // 
    LolGameQueuesLoginSessionStates state;
    // 
    uint64_t summonerId;
  };

  void to_json(nlohmann::json& j, const LolGameQueuesLoginSession& v) {
    j["accountId"] = v.accountId;
    j["connected"] = v.connected;
    j["state"] = v.state;
    j["summonerId"] = v.summonerId;
  }

  void from_json(const nlohmann::json& j, LolGameQueuesLoginSession& v) {
    v.accountId = j.at("accountId").get<uint64_t>;
    v.connected = j.at("connected").get<bool>;
    v.state = j.at("state").get<LolGameQueuesLoginSessionStates>;
    v.summonerId = j.at("summonerId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LolGameQueuesLoginSession_HPP
