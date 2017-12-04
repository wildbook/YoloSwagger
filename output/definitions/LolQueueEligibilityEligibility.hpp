#ifndef SWAGGER_TYPES_LolQueueEligibilityEligibility_HPP
#define SWAGGER_TYPES_LolQueueEligibilityEligibility_HPP
#include <json.hpp>
#include "LolQueueEligibilityEligibilityRestriction.hpp"
namespace leagueapi {
  // 
  struct LolQueueEligibilityEligibility {
    // 
    bool eligible;
    // 
    int32_t queueId;
    // 
    std::vector<LolQueueEligibilityEligibilityRestriction> restrictions;
  };

  void to_json(nlohmann::json& j, const LolQueueEligibilityEligibility& v) {
    j["eligible"] = v.eligible;
    j["queueId"] = v.queueId;
    j["restrictions"] = v.restrictions;
  }

  void from_json(const nlohmann::json& j, LolQueueEligibilityEligibility& v) {
    v.eligible = j.at("eligible").get<bool>;
    v.queueId = j.at("queueId").get<int32_t>;
    v.restrictions = j.at("restrictions").get<std::vector<LolQueueEligibilityEligibilityRestriction>>;
  }

}
#endif // SWAGGER_TYPES_LolQueueEligibilityEligibility_HPP
