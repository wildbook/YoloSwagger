#pragma once
#include <json.hpp>
#include <optional>
#include "LolQueueEligibilityEligibilityRestriction.hpp"
namespace leagueapi {
  struct LolQueueEligibilityEligibility_t {
    std::vector<LolQueueEligibilityEligibilityRestriction_t> restrictions;
    bool eligible;
    int32_t queueId;
  };

  inline void to_json(nlohmann::json& j, const LolQueueEligibilityEligibility_t& v) {
    j["restrictions"] = v.restrictions;
    j["eligible"] = v.eligible;
    j["queueId"] = v.queueId;
  }

  inline void from_json(const nlohmann::json& j, LolQueueEligibilityEligibility_t& v) {
    v.restrictions = j.at("restrictions").get<std::vector<LolQueueEligibilityEligibilityRestriction_t>>();
    v.eligible = j.at("eligible").get<bool>();
    v.queueId = j.at("queueId").get<int32_t>();
  }
  inline std::string to_string(const LolQueueEligibilityEligibility_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
