#pragma once
#include <json.hpp>
#include <optional>
#include "LolInventoryLoginSessionStates.hpp"
namespace leagueapi {
  struct LolInventoryLoginSession_t {
    uint64_t accountId;
    uint64_t summonerId;
    std::string idToken;
    nlohmann::json gasToken;
    LolInventoryLoginSessionStates_t state;
    std::string puuid;
  };

  inline void to_json(nlohmann::json& j, const LolInventoryLoginSession_t& v) {
    j["accountId"] = v.accountId;
    j["summonerId"] = v.summonerId;
    j["idToken"] = v.idToken;
    j["gasToken"] = v.gasToken;
    j["state"] = v.state;
    j["puuid"] = v.puuid;
  }

  inline void from_json(const nlohmann::json& j, LolInventoryLoginSession_t& v) {
    v.accountId = j.at("accountId").get<uint64_t>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.idToken = j.at("idToken").get<std::string>();
    v.gasToken = j.at("gasToken").get<nlohmann::json>();
    v.state = j.at("state").get<LolInventoryLoginSessionStates_t>();
    v.puuid = j.at("puuid").get<std::string>();
  }
  inline std::string to_string(const LolInventoryLoginSession_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
