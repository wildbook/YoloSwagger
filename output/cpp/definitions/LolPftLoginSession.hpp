#pragma once
#include <json.hpp>
#include <optional>
#include "LolPftLoginSessionStates.hpp"
namespace leagueapi {
  struct LolPftLoginSession_t {
    std::string puuid;
    std::string idToken;
    uint64_t accountId;
    LolPftLoginSessionStates_t state;
    uint64_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const LolPftLoginSession_t& v) {
    j["puuid"] = v.puuid;
    j["idToken"] = v.idToken;
    j["accountId"] = v.accountId;
    j["state"] = v.state;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, LolPftLoginSession_t& v) {
    v.puuid = j.at("puuid").get<std::string>();
    v.idToken = j.at("idToken").get<std::string>();
    v.accountId = j.at("accountId").get<uint64_t>();
    v.state = j.at("state").get<LolPftLoginSessionStates_t>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
  }
  inline std::string to_string(const LolPftLoginSession_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
