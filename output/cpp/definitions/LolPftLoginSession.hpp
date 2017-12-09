#pragma once
#include <json.hpp>
#include <optional>
#include "LolPftLoginSessionStates.hpp"
namespace leagueapi {
  struct LolPftLoginSession_t {
    LolPftLoginSessionStates_t state;
    uint64_t accountId;
    std::string puuid;
    uint64_t summonerId;
    std::string idToken;
  };

  inline void to_json(nlohmann::json& j, const LolPftLoginSession_t& v) {
    j["state"] = v.state;
    j["accountId"] = v.accountId;
    j["puuid"] = v.puuid;
    j["summonerId"] = v.summonerId;
    j["idToken"] = v.idToken;
  }

  inline void from_json(const nlohmann::json& j, LolPftLoginSession_t& v) {
    v.state = j.at("state").get<LolPftLoginSessionStates_t>();
    v.accountId = j.at("accountId").get<uint64_t>();
    v.puuid = j.at("puuid").get<std::string>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.idToken = j.at("idToken").get<std::string>();
  }
  inline std::string to_string(const LolPftLoginSession_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
