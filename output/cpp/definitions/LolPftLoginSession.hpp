#pragma once
#include <json.hpp>
#include <optional>
#include "LolPftLoginSessionStates.hpp"
namespace leagueapi {
  struct LolPftLoginSession_t {
    uint64_t accountId;
    std::string idToken;
    std::string puuid;
    LolPftLoginSessionStates_t state;
    uint64_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const LolPftLoginSession_t& v) {
    j["accountId"] = v.accountId;
    j["idToken"] = v.idToken;
    j["puuid"] = v.puuid;
    j["state"] = v.state;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, LolPftLoginSession_t& v) {
    v.accountId = j.at("accountId").get<uint64_t>();
    v.idToken = j.at("idToken").get<std::string>();
    v.puuid = j.at("puuid").get<std::string>();
    v.state = j.at("state").get<LolPftLoginSessionStates_t>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
  }
}
