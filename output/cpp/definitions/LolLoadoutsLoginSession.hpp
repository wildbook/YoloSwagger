#pragma once
#include <json.hpp>
#include <optional>
#include "LolLoadoutsLoginSessionStates.hpp"
namespace leagueapi {
  struct LolLoadoutsLoginSession_t {
    uint64_t accountId;
    std::string puuid;
    uint64_t summonerId;
    std::string idToken;
    LolLoadoutsLoginSessionStates_t state;
    nlohmann::json gasToken;
  };

  inline void to_json(nlohmann::json& j, const LolLoadoutsLoginSession_t& v) {
    j["accountId"] = v.accountId;
    j["puuid"] = v.puuid;
    j["summonerId"] = v.summonerId;
    j["idToken"] = v.idToken;
    j["state"] = v.state;
    j["gasToken"] = v.gasToken;
  }

  inline void from_json(const nlohmann::json& j, LolLoadoutsLoginSession_t& v) {
    v.accountId = j.at("accountId").get<uint64_t>();
    v.puuid = j.at("puuid").get<std::string>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.idToken = j.at("idToken").get<std::string>();
    v.state = j.at("state").get<LolLoadoutsLoginSessionStates_t>();
    v.gasToken = j.at("gasToken").get<nlohmann::json>();
  }
  inline std::string to_string(const LolLoadoutsLoginSession_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
