#ifndef SWAGGER_TYPES_LolChampSelectLegacyLoginSession_HPP
#define SWAGGER_TYPES_LolChampSelectLegacyLoginSession_HPP
#include <json.hpp>
#include "LolChampSelectLegacyLoginSessionStates.hpp"
namespace leagueapi {
  // 
  struct LolChampSelectLegacyLoginSession {
    // 
    LolChampSelectLegacyLoginSessionStates state;
    // 
    bool connected;
    // 
    uint64_t summonerId;
    // 
    uint64_t accountId;
  };

  inline void to_json(nlohmann::json& j, const LolChampSelectLegacyLoginSession& v) {
    j["state"] = v.state;
    j["connected"] = v.connected;
    j["summonerId"] = v.summonerId;
    j["accountId"] = v.accountId;
  }

  inline void from_json(const nlohmann::json& j, LolChampSelectLegacyLoginSession& v) {
    v.state = j.at("state").get<LolChampSelectLegacyLoginSessionStates>;
    v.connected = j.at("connected").get<bool>;
    v.summonerId = j.at("summonerId").get<uint64_t>;
    v.accountId = j.at("accountId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LolChampSelectLegacyLoginSession_HPP
