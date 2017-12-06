#pragma once
#include <json.hpp>
#include <optional>
#include "LolQueueEligibilityEligibilityRestriction.hpp"
namespace leagueapi {
  struct LolQueueEligibilityEligibility_t {
    bool eligible;
    std::vector<LolQueueEligibilityEligibilityRestriction_t> restrictions;
    int32_t queueId;
  };

  inline void to_json(nlohmann::json& j, const LolQueueEligibilityEligibility_t& v) {
    j["eligible"] = v.eligible;
    j["restrictions"] = v.restrictions;
    j["queueId"] = v.queueId;
  }

  inline void from_json(const nlohmann::json& j, LolQueueEligibilityEligibility_t& v) {
    v.eligible = j.at("eligible").get<bool>();
    v.restrictions = j.at("restrictions").get<std::vector<LolQueueEligibilityEligibilityRestriction_t>>();
    v.queueId = j.at("queueId").get<int32_t>();
  }
}
