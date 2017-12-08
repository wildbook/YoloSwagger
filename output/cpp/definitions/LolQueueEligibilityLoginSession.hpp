#pragma once
#include <json.hpp>
#include <optional>
#include "LolQueueEligibilityLoginSessionStates.hpp"
namespace leagueapi {
  struct LolQueueEligibilityLoginSession_t {
    LolQueueEligibilityLoginSessionStates_t state;
    uint64_t summonerId;
    uint64_t accountId;
  };

  inline void to_json(nlohmann::json& j, const LolQueueEligibilityLoginSession_t& v) {
    j["state"] = v.state;
    j["summonerId"] = v.summonerId;
    j["accountId"] = v.accountId;
  }

  inline void from_json(const nlohmann::json& j, LolQueueEligibilityLoginSession_t& v) {
    v.state = j.at("state").get<LolQueueEligibilityLoginSessionStates_t>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.accountId = j.at("accountId").get<uint64_t>();
  }
  inline std::string to_string(const LolQueueEligibilityLoginSession_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
