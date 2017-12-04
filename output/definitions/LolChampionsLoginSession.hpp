#ifndef SWAGGER_TYPES_LolChampionsLoginSession_HPP
#define SWAGGER_TYPES_LolChampionsLoginSession_HPP
#include <json.hpp>
#include "LolChampionsLoginSessionStates.hpp"
namespace leagueapi {
  // 
  struct LolChampionsLoginSession {
    // 
    uint64_t accountId;
    // 
    bool connected;
    // 
    LolChampionsLoginSessionStates state;
    // 
    uint64_t summonerId;
  };

  void to_json(nlohmann::json& j, const LolChampionsLoginSession& v) {
    j["accountId"] = v.accountId;
    j["connected"] = v.connected;
    j["state"] = v.state;
    j["summonerId"] = v.summonerId;
  }

  void from_json(const nlohmann::json& j, LolChampionsLoginSession& v) {
    v.accountId = j.at("accountId").get<uint64_t>;
    v.connected = j.at("connected").get<bool>;
    v.state = j.at("state").get<LolChampionsLoginSessionStates>;
    v.summonerId = j.at("summonerId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LolChampionsLoginSession_HPP
