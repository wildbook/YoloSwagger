#pragma once
#include <json.hpp>
#include <optional>
#include "LolPersonalizedOffersLoginSessionStates.hpp"
namespace leagueapi {
  struct LolPersonalizedOffersLoginSession_t {
    uint64_t accountId;
    LolPersonalizedOffersLoginSessionStates_t state;
    uint64_t summonerId;
    nlohmann::json gasToken;
    std::string idToken;
  };

  inline void to_json(nlohmann::json& j, const LolPersonalizedOffersLoginSession_t& v) {
    j["accountId"] = v.accountId;
    j["state"] = v.state;
    j["summonerId"] = v.summonerId;
    j["gasToken"] = v.gasToken;
    j["idToken"] = v.idToken;
  }

  inline void from_json(const nlohmann::json& j, LolPersonalizedOffersLoginSession_t& v) {
    v.accountId = j.at("accountId").get<uint64_t>();
    v.state = j.at("state").get<LolPersonalizedOffersLoginSessionStates_t>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.gasToken = j.at("gasToken").get<nlohmann::json>();
    v.idToken = j.at("idToken").get<std::string>();
  }
  inline std::string to_string(const LolPersonalizedOffersLoginSession_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
