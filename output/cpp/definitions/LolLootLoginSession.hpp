#pragma once
#include <json.hpp>
#include <optional>
#include "LolLootLoginSessionStates.hpp"
namespace leagueapi {
  struct LolLootLoginSession_t {
    LolLootLoginSessionStates_t state;
    uint64_t accountId;
    uint64_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const LolLootLoginSession_t& v) {
    j["state"] = v.state;
    j["accountId"] = v.accountId;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, LolLootLoginSession_t& v) {
    v.state = j.at("state").get<LolLootLoginSessionStates_t>();
    v.accountId = j.at("accountId").get<uint64_t>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
  }
  inline std::string to_string(const LolLootLoginSession_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
