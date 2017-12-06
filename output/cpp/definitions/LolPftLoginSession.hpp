#pragma once
#include <json.hpp>
#include <optional>
#include "LolPftLoginSessionStates.hpp"
namespace leagueapi {
  struct LolPftLoginSession_t {
    uint64_t accountId;
    uint64_t summonerId;
    LolPftLoginSessionStates_t state;
    std::string puuid;
    std::string idToken;
  };

  inline void to_json(nlohmann::json& j, const LolPftLoginSession_t& v) {
    j["accountId"] = v.accountId;
    j["summonerId"] = v.summonerId;
    j["state"] = v.state;
    j["puuid"] = v.puuid;
    j["idToken"] = v.idToken;
  }

  inline void from_json(const nlohmann::json& j, LolPftLoginSession_t& v) {
    v.accountId = j.at("accountId").get<uint64_t>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.state = j.at("state").get<LolPftLoginSessionStates_t>();
    v.puuid = j.at("puuid").get<std::string>();
    v.idToken = j.at("idToken").get<std::string>();
  }
}
