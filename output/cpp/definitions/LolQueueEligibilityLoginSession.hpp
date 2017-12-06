#pragma once
#include <json.hpp>
#include <optional>
#include "LolQueueEligibilityLoginSessionStates.hpp"
namespace leagueapi {
  struct LolQueueEligibilityLoginSession_t {
    uint64_t accountId;
    uint64_t summonerId;
    LolQueueEligibilityLoginSessionStates_t state;
  };

  inline void to_json(nlohmann::json& j, const LolQueueEligibilityLoginSession_t& v) {
    j["accountId"] = v.accountId;
    j["summonerId"] = v.summonerId;
    j["state"] = v.state;
  }

  inline void from_json(const nlohmann::json& j, LolQueueEligibilityLoginSession_t& v) {
    v.accountId = j.at("accountId").get<uint64_t>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.state = j.at("state").get<LolQueueEligibilityLoginSessionStates_t>();
  }
}
