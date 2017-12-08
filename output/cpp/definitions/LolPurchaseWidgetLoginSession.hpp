#pragma once
#include <json.hpp>
#include <optional>
#include "LolPurchaseWidgetLoginSessionStates.hpp"
namespace leagueapi {
  struct LolPurchaseWidgetLoginSession_t {
    std::string_t idToken;
    LolPurchaseWidgetLoginSessionStates_t state;
    uint64_t_t summonerId;
    uint64_t_t accountId;
  };

  inline void to_json(nlohmann::json& j, const LolPurchaseWidgetLoginSession_t& v) {
    j["idToken"] = v.idToken;
    j["state"] = v.state;
    j["summonerId"] = v.summonerId;
    j["accountId"] = v.accountId;
  }

  inline void from_json(const nlohmann::json& j, LolPurchaseWidgetLoginSession_t& v) {
    v.idToken = j.at("idToken").get<std::string_t>();
    v.state = j.at("state").get<LolPurchaseWidgetLoginSessionStates_t>();
    v.summonerId = j.at("summonerId").get<uint64_t_t>();
    v.accountId = j.at("accountId").get<uint64_t_t>();
  }
  inline std::string to_string(const LolPurchaseWidgetLoginSession_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
