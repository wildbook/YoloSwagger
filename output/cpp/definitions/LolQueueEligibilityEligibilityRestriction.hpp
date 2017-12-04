#ifndef SWAGGER_TYPES_LolQueueEligibilityEligibilityRestriction_HPP
#define SWAGGER_TYPES_LolQueueEligibilityEligibilityRestriction_HPP
#include <json.hpp>
#include "LolQueueEligibilityEligibilityRestrictionCode.hpp"
namespace leagueapi {
  // 
  struct LolQueueEligibilityEligibilityRestriction {
    // 
    std::map<std::string, std::string> restrictionArgs;
    // 
    uint64_t expiredTimestamp;
    // 
    LolQueueEligibilityEligibilityRestrictionCode restrictionCode;
    // 
    std::vector<uint64_t> summonerIds;
  };

  inline void to_json(nlohmann::json& j, const LolQueueEligibilityEligibilityRestriction& v) {
    j["restrictionArgs"] = v.restrictionArgs;
    j["expiredTimestamp"] = v.expiredTimestamp;
    j["restrictionCode"] = v.restrictionCode;
    j["summonerIds"] = v.summonerIds;
  }

  inline void from_json(const nlohmann::json& j, LolQueueEligibilityEligibilityRestriction& v) {
    v.restrictionArgs = j.at("restrictionArgs").get<std::map<std::string, std::string>>;
    v.expiredTimestamp = j.at("expiredTimestamp").get<uint64_t>;
    v.restrictionCode = j.at("restrictionCode").get<LolQueueEligibilityEligibilityRestrictionCode>;
    v.summonerIds = j.at("summonerIds").get<std::vector<uint64_t>>;
  }

}
#endif // SWAGGER_TYPES_LolQueueEligibilityEligibilityRestriction_HPP
