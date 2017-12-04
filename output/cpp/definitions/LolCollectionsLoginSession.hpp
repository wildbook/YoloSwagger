#ifndef SWAGGER_TYPES_LolCollectionsLoginSession_HPP
#define SWAGGER_TYPES_LolCollectionsLoginSession_HPP
#include <json.hpp>
#include "LolCollectionsLoginSessionStates.hpp"
namespace leagueapi {
  // 
  struct LolCollectionsLoginSession {
    // 
    LolCollectionsLoginSessionStates state;
    // 
    bool connected;
    // 
    uint64_t summonerId;
    // 
    uint64_t accountId;
  };

  inline void to_json(nlohmann::json& j, const LolCollectionsLoginSession& v) {
    j["state"] = v.state;
    j["connected"] = v.connected;
    j["summonerId"] = v.summonerId;
    j["accountId"] = v.accountId;
  }

  inline void from_json(const nlohmann::json& j, LolCollectionsLoginSession& v) {
    v.state = j.at("state").get<LolCollectionsLoginSessionStates>;
    v.connected = j.at("connected").get<bool>;
    v.summonerId = j.at("summonerId").get<uint64_t>;
    v.accountId = j.at("accountId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LolCollectionsLoginSession_HPP
