#pragma once
#include <json.hpp>
#include <optional>
#include "LolLoadoutsLoginSessionStates.hpp"
namespace leagueapi {
  struct LolLoadoutsLoginSession_t {
    nlohmann::json gasToken;
    LolLoadoutsLoginSessionStates_t state;
    std::string idToken;
    std::string puuid;
    uint64_t accountId;
    uint64_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const LolLoadoutsLoginSession_t& v) {
    j["gasToken"] = v.gasToken;
    j["state"] = v.state;
    j["idToken"] = v.idToken;
    j["puuid"] = v.puuid;
    j["accountId"] = v.accountId;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, LolLoadoutsLoginSession_t& v) {
    v.gasToken = j.at("gasToken").get<nlohmann::json>();
    v.state = j.at("state").get<LolLoadoutsLoginSessionStates_t>();
    v.idToken = j.at("idToken").get<std::string>();
    v.puuid = j.at("puuid").get<std::string>();
    v.accountId = j.at("accountId").get<uint64_t>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
  }
}
