#pragma once
#include <json.hpp>
#include <optional>
#include "LolLoadoutsLoginSessionStates.hpp"
namespace leagueapi {
  struct LolLoadoutsLoginSession_t {
    std::string_t idToken;
    LolLoadoutsLoginSessionStates_t state;
    std::string_t puuid;
    nlohmann::json_t gasToken;
    uint64_t_t summonerId;
    uint64_t_t accountId;
  };

  inline void to_json(nlohmann::json& j, const LolLoadoutsLoginSession_t& v) {
    j["idToken"] = v.idToken;
    j["state"] = v.state;
    j["puuid"] = v.puuid;
    j["gasToken"] = v.gasToken;
    j["summonerId"] = v.summonerId;
    j["accountId"] = v.accountId;
  }

  inline void from_json(const nlohmann::json& j, LolLoadoutsLoginSession_t& v) {
    v.idToken = j.at("idToken").get<std::string_t>();
    v.state = j.at("state").get<LolLoadoutsLoginSessionStates_t>();
    v.puuid = j.at("puuid").get<std::string_t>();
    v.gasToken = j.at("gasToken").get<nlohmann::json_t>();
    v.summonerId = j.at("summonerId").get<uint64_t_t>();
    v.accountId = j.at("accountId").get<uint64_t_t>();
  }
  inline std::string to_string(const LolLoadoutsLoginSession_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
