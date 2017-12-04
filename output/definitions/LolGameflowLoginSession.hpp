#ifndef SWAGGER_TYPES_LolGameflowLoginSession_HPP
#define SWAGGER_TYPES_LolGameflowLoginSession_HPP
#include <json.hpp>
#include "LolGameflowLoginSessionStates.hpp"
namespace test {
  // 
  struct LolGameflowLoginSession {
'    // 
    uint64_t accountId;
    // 
    bool connected;
    // 
    LolGameflowLoginSessionStates state;
    // 
    uint64_t summonerId;
  };

  void to_json(nlohmann::json& j, const LolGameflowLoginSession& v) {
    j["accountId"] = v.accountId;
    j["connected"] = v.connected;
    j["state"] = v.state;
    j["summonerId"] = v.summonerId;
  }

  void from_json(const nlohmann::json& j, LolGameflowLoginSession& v) {
    v.accountId = j.at("accountId").get<uint64_t>;
    v.connected = j.at("connected").get<bool>;
    v.state = j.at("state").get<LolGameflowLoginSessionStates>;
    v.summonerId = j.at("summonerId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LolGameflowLoginSession_HPP
