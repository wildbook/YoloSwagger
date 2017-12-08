#pragma once
#include <json.hpp>
#include <optional>
#include "LolQueueEligibilityEligibilityRestriction.hpp"
namespace leagueapi {
  struct LolQueueEligibilityEligibility_t {
    int32_t queueId;
    std::vector<LolQueueEligibilityEligibilityRestriction_t> restrictions;
    bool eligible;
  };

  inline void to_json(nlohmann::json& j, const LolQueueEligibilityEligibility_t& v) {
    j["queueId"] = v.queueId;
    j["restrictions"] = v.restrictions;
    j["eligible"] = v.eligible;
  }

  inline void from_json(const nlohmann::json& j, LolQueueEligibilityEligibility_t& v) {
    v.queueId = j.at("queueId").get<int32_t>();
    v.restrictions = j.at("restrictions").get<std::vector<LolQueueEligibilityEligibilityRestriction_t>>();
    v.eligible = j.at("eligible").get<bool>();
  }
  inline std::string to_string(const LolQueueEligibilityEligibility_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
