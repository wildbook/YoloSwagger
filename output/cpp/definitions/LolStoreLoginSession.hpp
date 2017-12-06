#pragma once
#include <json.hpp>
#include <optional>
#include "LolStoreLoginSessionStates.hpp"
namespace leagueapi {
  struct LolStoreLoginSession_t {
    uint64_t accountId;
    uint64_t summonerId;
    nlohmann::json gasToken;
    LolStoreLoginSessionStates_t state;
    std::string idToken;
  };

  inline void to_json(nlohmann::json& j, const LolStoreLoginSession_t& v) {
    j["accountId"] = v.accountId;
    j["summonerId"] = v.summonerId;
    j["gasToken"] = v.gasToken;
    j["state"] = v.state;
    j["idToken"] = v.idToken;
  }

  inline void from_json(const nlohmann::json& j, LolStoreLoginSession_t& v) {
    v.accountId = j.at("accountId").get<uint64_t>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.gasToken = j.at("gasToken").get<nlohmann::json>();
    v.state = j.at("state").get<LolStoreLoginSessionStates_t>();
    v.idToken = j.at("idToken").get<std::string>();
  }
}
