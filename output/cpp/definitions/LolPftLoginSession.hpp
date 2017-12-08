#pragma once
#include <json.hpp>
#include <optional>
#include "LolPftLoginSessionStates.hpp"
namespace leagueapi {
  struct LolPftLoginSession_t {
    std::string_t idToken;
    LolPftLoginSessionStates_t state;
    std::string_t puuid;
    uint64_t_t summonerId;
    uint64_t_t accountId;
  };

  inline void to_json(nlohmann::json& j, const LolPftLoginSession_t& v) {
    j["idToken"] = v.idToken;
    j["state"] = v.state;
    j["puuid"] = v.puuid;
    j["summonerId"] = v.summonerId;
    j["accountId"] = v.accountId;
  }

  inline void from_json(const nlohmann::json& j, LolPftLoginSession_t& v) {
    v.idToken = j.at("idToken").get<std::string_t>();
    v.state = j.at("state").get<LolPftLoginSessionStates_t>();
    v.puuid = j.at("puuid").get<std::string_t>();
    v.summonerId = j.at("summonerId").get<uint64_t_t>();
    v.accountId = j.at("accountId").get<uint64_t_t>();
  }
  inline std::string to_string(const LolPftLoginSession_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
