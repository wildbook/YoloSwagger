#pragma once
#include <json.hpp>
#include <optional>
#include "LolLootLoginSessionStates.hpp"
namespace leagueapi {
  struct LolLootLoginSession_t {
    uint64_t accountId;
    uint64_t summonerId;
    LolLootLoginSessionStates_t state;
  };

  inline void to_json(nlohmann::json& j, const LolLootLoginSession_t& v) {
    j["accountId"] = v.accountId;
    j["summonerId"] = v.summonerId;
    j["state"] = v.state;
  }

  inline void from_json(const nlohmann::json& j, LolLootLoginSession_t& v) {
    v.accountId = j.at("accountId").get<uint64_t>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.state = j.at("state").get<LolLootLoginSessionStates_t>();
  }
}
