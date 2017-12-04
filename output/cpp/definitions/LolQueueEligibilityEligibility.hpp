#ifndef SWAGGER_TYPES_LolQueueEligibilityEligibility_HPP
#define SWAGGER_TYPES_LolQueueEligibilityEligibility_HPP
#include <json.hpp>
#include "LolQueueEligibilityEligibilityRestriction.hpp"
namespace leagueapi {
  // 
  struct LolQueueEligibilityEligibility {
    // 
    int32_t queueId;
    // 
    std::vector<LolQueueEligibilityEligibilityRestriction> restrictions;
    // 
    bool eligible;
  };

  inline void to_json(nlohmann::json& j, const LolQueueEligibilityEligibility& v) {
    j["queueId"] = v.queueId;
    j["restrictions"] = v.restrictions;
    j["eligible"] = v.eligible;
  }

  inline void from_json(const nlohmann::json& j, LolQueueEligibilityEligibility& v) {
    v.queueId = j.at("queueId").get<int32_t>;
    v.restrictions = j.at("restrictions").get<std::vector<LolQueueEligibilityEligibilityRestriction>>;
    v.eligible = j.at("eligible").get<bool>;
  }

}
#endif // SWAGGER_TYPES_LolQueueEligibilityEligibility_HPP
