#ifndef SWAGGER_TYPES_LolPurchaseWidgetLoginSession_HPP
#define SWAGGER_TYPES_LolPurchaseWidgetLoginSession_HPP
#include <json.hpp>
#include "LolPurchaseWidgetLoginSessionStates.hpp"
namespace leagueapi {
  // 
  struct LolPurchaseWidgetLoginSession {
    // 
    uint64_t accountId;
    // 
    std::string idToken;
    // 
    LolPurchaseWidgetLoginSessionStates state;
    // 
    uint64_t summonerId;
  };

  void to_json(nlohmann::json& j, const LolPurchaseWidgetLoginSession& v) {
    j["accountId"] = v.accountId;
    j["idToken"] = v.idToken;
    j["state"] = v.state;
    j["summonerId"] = v.summonerId;
  }

  void from_json(const nlohmann::json& j, LolPurchaseWidgetLoginSession& v) {
    v.accountId = j.at("accountId").get<uint64_t>;
    v.idToken = j.at("idToken").get<std::string>;
    v.state = j.at("state").get<LolPurchaseWidgetLoginSessionStates>;
    v.summonerId = j.at("summonerId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LolPurchaseWidgetLoginSession_HPP
