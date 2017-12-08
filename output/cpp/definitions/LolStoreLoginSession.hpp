#pragma once
#include <json.hpp>
#include <optional>
#include "LolStoreLoginSessionStates.hpp"
namespace leagueapi {
  struct LolStoreLoginSession_t {
    std::string idToken;
    uint64_t accountId;
    uint64_t summonerId;
    LolStoreLoginSessionStates_t state;
    nlohmann::json gasToken;
  };

  inline void to_json(nlohmann::json& j, const LolStoreLoginSession_t& v) {
    j["idToken"] = v.idToken;
    j["accountId"] = v.accountId;
    j["summonerId"] = v.summonerId;
    j["state"] = v.state;
    j["gasToken"] = v.gasToken;
  }

  inline void from_json(const nlohmann::json& j, LolStoreLoginSession_t& v) {
    v.idToken = j.at("idToken").get<std::string>();
    v.accountId = j.at("accountId").get<uint64_t>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.state = j.at("state").get<LolStoreLoginSessionStates_t>();
    v.gasToken = j.at("gasToken").get<nlohmann::json>();
  }
  inline std::string to_string(const LolStoreLoginSession_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
