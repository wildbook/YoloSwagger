#pragma once
#include <json.hpp>
#include <optional>
#include "LolAcsLoginSessionStates.hpp"
namespace leagueapi {
  struct LolAcsLoginSession_t {
    std::string_t idToken;
    LolAcsLoginSessionStates_t state;
    uint64_t_t summonerId;
    nlohmann::json_t gasToken;
    uint64_t_t accountId;
  };

  inline void to_json(nlohmann::json& j, const LolAcsLoginSession_t& v) {
    j["idToken"] = v.idToken;
    j["state"] = v.state;
    j["summonerId"] = v.summonerId;
    j["gasToken"] = v.gasToken;
    j["accountId"] = v.accountId;
  }

  inline void from_json(const nlohmann::json& j, LolAcsLoginSession_t& v) {
    v.idToken = j.at("idToken").get<std::string_t>();
    v.state = j.at("state").get<LolAcsLoginSessionStates_t>();
    v.summonerId = j.at("summonerId").get<uint64_t_t>();
    v.gasToken = j.at("gasToken").get<nlohmann::json_t>();
    v.accountId = j.at("accountId").get<uint64_t_t>();
  }
  inline std::string to_string(const LolAcsLoginSession_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
