#pragma once
#include <json.hpp>
#include <optional>
#include "LolPersonalizedOffersLoginSessionStates.hpp"
namespace leagueapi {
  struct LolPersonalizedOffersLoginSession_t {
    std::string idToken;
    LolPersonalizedOffersLoginSessionStates_t state;
    uint64_t summonerId;
    nlohmann::json gasToken;
    uint64_t accountId;
  };

  inline void to_json(nlohmann::json& j, const LolPersonalizedOffersLoginSession_t& v) {
    j["idToken"] = v.idToken;
    j["state"] = v.state;
    j["summonerId"] = v.summonerId;
    j["gasToken"] = v.gasToken;
    j["accountId"] = v.accountId;
  }

  inline void from_json(const nlohmann::json& j, LolPersonalizedOffersLoginSession_t& v) {
    v.idToken = j.at("idToken").get<std::string>();
    v.state = j.at("state").get<LolPersonalizedOffersLoginSessionStates_t>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.gasToken = j.at("gasToken").get<nlohmann::json>();
    v.accountId = j.at("accountId").get<uint64_t>();
  }
  inline std::string to_string(const LolPersonalizedOffersLoginSession_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
