#ifndef SWAGGER_TYPES_LolQueueEligibilityEligibilityRestriction_HPP
#define SWAGGER_TYPES_LolQueueEligibilityEligibilityRestriction_HPP
#include <json.hpp>
#include "LolQueueEligibilityEligibilityRestrictionCode.hpp"
namespace leagueapi {
  // 
  struct LolQueueEligibilityEligibilityRestriction {
    // 
    uint64_t expiredTimestamp;
    // 
    std::map<std::string, std::string> restrictionArgs;
    // 
    LolQueueEligibilityEligibilityRestrictionCode restrictionCode;
    // 
    std::vector<uint64_t> summonerIds;
  };

  void to_json(nlohmann::json& j, const LolQueueEligibilityEligibilityRestriction& v) {
    j["expiredTimestamp"] = v.expiredTimestamp;
    j["restrictionArgs"] = v.restrictionArgs;
    j["restrictionCode"] = v.restrictionCode;
    j["summonerIds"] = v.summonerIds;
  }

  void from_json(const nlohmann::json& j, LolQueueEligibilityEligibilityRestriction& v) {
    v.expiredTimestamp = j.at("expiredTimestamp").get<uint64_t>;
    v.restrictionArgs = j.at("restrictionArgs").get<std::map<std::string, std::string>>;
    v.restrictionCode = j.at("restrictionCode").get<LolQueueEligibilityEligibilityRestrictionCode>;
    v.summonerIds = j.at("summonerIds").get<std::vector<uint64_t>>;
  }

}
#endif // SWAGGER_TYPES_LolQueueEligibilityEligibilityRestriction_HPP
