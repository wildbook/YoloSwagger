#ifndef SWAGGER_TYPES_LolPurchaseWidgetLoginSession_HPP
#define SWAGGER_TYPES_LolPurchaseWidgetLoginSession_HPP
#include <json.hpp>
#include "LolPurchaseWidgetLoginSessionStates.hpp"
namespace leagueapi {
  // 
  struct LolPurchaseWidgetLoginSession {
    // 
    std::string idToken;
    // 
    LolPurchaseWidgetLoginSessionStates state;
    // 
    uint64_t summonerId;
    // 
    uint64_t accountId;
  };

  inline void to_json(nlohmann::json& j, const LolPurchaseWidgetLoginSession& v) {
    j["idToken"] = v.idToken;
    j["state"] = v.state;
    j["summonerId"] = v.summonerId;
    j["accountId"] = v.accountId;
  }

  inline void from_json(const nlohmann::json& j, LolPurchaseWidgetLoginSession& v) {
    v.idToken = j.at("idToken").get<std::string>;
    v.state = j.at("state").get<LolPurchaseWidgetLoginSessionStates>;
    v.summonerId = j.at("summonerId").get<uint64_t>;
    v.accountId = j.at("accountId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LolPurchaseWidgetLoginSession_HPP
