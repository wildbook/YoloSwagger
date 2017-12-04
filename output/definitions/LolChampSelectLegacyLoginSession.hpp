#ifndef SWAGGER_TYPES_LolChampSelectLegacyLoginSession_HPP
#define SWAGGER_TYPES_LolChampSelectLegacyLoginSession_HPP
#include <json.hpp>
#include "LolChampSelectLegacyLoginSessionStates.hpp"
namespace test {
  // 
  struct LolChampSelectLegacyLoginSession {
'    // 
    uint64_t accountId;
    // 
    bool connected;
    // 
    LolChampSelectLegacyLoginSessionStates state;
    // 
    uint64_t summonerId;
  };

  void to_json(nlohmann::json& j, const LolChampSelectLegacyLoginSession& v) {
    j["accountId"] = v.accountId;
    j["connected"] = v.connected;
    j["state"] = v.state;
    j["summonerId"] = v.summonerId;
  }

  void from_json(const nlohmann::json& j, LolChampSelectLegacyLoginSession& v) {
    v.accountId = j.at("accountId").get<uint64_t>;
    v.connected = j.at("connected").get<bool>;
    v.state = j.at("state").get<LolChampSelectLegacyLoginSessionStates>;
    v.summonerId = j.at("summonerId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LolChampSelectLegacyLoginSession_HPP
