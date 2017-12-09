#pragma once
#include <json.hpp>
#include <optional>
#include "LolAcsLoginSessionStates.hpp"
namespace leagueapi {
  struct LolAcsLoginSession_t {
    uint64_t summonerId;
    uint64_t accountId;
    nlohmann::json gasToken;
    LolAcsLoginSessionStates_t state;
    std::string idToken;
  };

  inline void to_json(nlohmann::json& j, const LolAcsLoginSession_t& v) {
    j["summonerId"] = v.summonerId;
    j["accountId"] = v.accountId;
    j["gasToken"] = v.gasToken;
    j["state"] = v.state;
    j["idToken"] = v.idToken;
  }

  inline void from_json(const nlohmann::json& j, LolAcsLoginSession_t& v) {
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.accountId = j.at("accountId").get<uint64_t>();
    v.gasToken = j.at("gasToken").get<nlohmann::json>();
    v.state = j.at("state").get<LolAcsLoginSessionStates_t>();
    v.idToken = j.at("idToken").get<std::string>();
  }
  inline std::string to_string(const LolAcsLoginSession_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
