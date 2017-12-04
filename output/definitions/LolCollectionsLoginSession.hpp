#ifndef SWAGGER_TYPES_LolCollectionsLoginSession_HPP
#define SWAGGER_TYPES_LolCollectionsLoginSession_HPP
#include <json.hpp>
#include "LolCollectionsLoginSessionStates.hpp"
namespace leagueapi {
  // 
  struct LolCollectionsLoginSession {
    // 
    uint64_t accountId;
    // 
    bool connected;
    // 
    LolCollectionsLoginSessionStates state;
    // 
    uint64_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const LolCollectionsLoginSession& v) {
    j["accountId"] = v.accountId;
    j["connected"] = v.connected;
    j["state"] = v.state;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, LolCollectionsLoginSession& v) {
    v.accountId = j.at("accountId").get<uint64_t>;
    v.connected = j.at("connected").get<bool>;
    v.state = j.at("state").get<LolCollectionsLoginSessionStates>;
    v.summonerId = j.at("summonerId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LolCollectionsLoginSession_HPP
