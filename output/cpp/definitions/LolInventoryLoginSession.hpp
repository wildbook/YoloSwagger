#pragma once
#include <json.hpp>
#include <optional>
#include "LolInventoryLoginSessionStates.hpp"
namespace leagueapi {
  struct LolInventoryLoginSession_t {
    uint64_t accountId;
    nlohmann::json gasToken;
    std::string puuid;
    std::string idToken;
    LolInventoryLoginSessionStates_t state;
    uint64_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const LolInventoryLoginSession_t& v) {
    j["accountId"] = v.accountId;
    j["gasToken"] = v.gasToken;
    j["puuid"] = v.puuid;
    j["idToken"] = v.idToken;
    j["state"] = v.state;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, LolInventoryLoginSession_t& v) {
    v.accountId = j.at("accountId").get<uint64_t>();
    v.gasToken = j.at("gasToken").get<nlohmann::json>();
    v.puuid = j.at("puuid").get<std::string>();
    v.idToken = j.at("idToken").get<std::string>();
    v.state = j.at("state").get<LolInventoryLoginSessionStates_t>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
  }
  inline std::string to_string(const LolInventoryLoginSession_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
