#pragma once
#include <json.hpp>
#include <optional>
#include "LolInventoryLoginSessionStates.hpp"
namespace leagueapi {
  struct LolInventoryLoginSession_t {
    nlohmann::json gasToken;
    LolInventoryLoginSessionStates_t state;
    std::string idToken;
    std::string puuid;
    uint64_t accountId;
    uint64_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const LolInventoryLoginSession_t& v) {
    j["gasToken"] = v.gasToken;
    j["state"] = v.state;
    j["idToken"] = v.idToken;
    j["puuid"] = v.puuid;
    j["accountId"] = v.accountId;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, LolInventoryLoginSession_t& v) {
    v.gasToken = j.at("gasToken").get<nlohmann::json>();
    v.state = j.at("state").get<LolInventoryLoginSessionStates_t>();
    v.idToken = j.at("idToken").get<std::string>();
    v.puuid = j.at("puuid").get<std::string>();
    v.accountId = j.at("accountId").get<uint64_t>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
  }
}
