#pragma once
#include <json.hpp>
#include <optional>
#include "LolStoreLoginSessionStates.hpp"
namespace leagueapi {
  struct LolStoreLoginSession_t {
    nlohmann::json gasToken;
    LolStoreLoginSessionStates_t state;
    uint64_t accountId;
    uint64_t summonerId;
    std::string idToken;
  };

  inline void to_json(nlohmann::json& j, const LolStoreLoginSession_t& v) {
    j["gasToken"] = v.gasToken;
    j["state"] = v.state;
    j["accountId"] = v.accountId;
    j["summonerId"] = v.summonerId;
    j["idToken"] = v.idToken;
  }

  inline void from_json(const nlohmann::json& j, LolStoreLoginSession_t& v) {
    v.gasToken = j.at("gasToken").get<nlohmann::json>();
    v.state = j.at("state").get<LolStoreLoginSessionStates_t>();
    v.accountId = j.at("accountId").get<uint64_t>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.idToken = j.at("idToken").get<std::string>();
  }
  inline std::string to_string(const LolStoreLoginSession_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
