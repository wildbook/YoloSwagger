#pragma once
#include <json.hpp>
#include <optional>
#include "LolQueueEligibilityEligibilityRestrictionCode.hpp"
namespace leagueapi {
  struct LolQueueEligibilityEligibilityRestriction_t {
    uint64_t expiredTimestamp;
    std::vector<uint64_t> summonerIds;
    std::map<std::string, std::string> restrictionArgs;
    LolQueueEligibilityEligibilityRestrictionCode_t restrictionCode;
  };

  inline void to_json(nlohmann::json& j, const LolQueueEligibilityEligibilityRestriction_t& v) {
    j["expiredTimestamp"] = v.expiredTimestamp;
    j["summonerIds"] = v.summonerIds;
    j["restrictionArgs"] = v.restrictionArgs;
    j["restrictionCode"] = v.restrictionCode;
  }

  inline void from_json(const nlohmann::json& j, LolQueueEligibilityEligibilityRestriction_t& v) {
    v.expiredTimestamp = j.at("expiredTimestamp").get<uint64_t>();
    v.summonerIds = j.at("summonerIds").get<std::vector<uint64_t>>();
    v.restrictionArgs = j.at("restrictionArgs").get<std::map<std::string, std::string>>();
    v.restrictionCode = j.at("restrictionCode").get<LolQueueEligibilityEligibilityRestrictionCode_t>();
  }
  inline std::string to_string(const LolQueueEligibilityEligibilityRestriction_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
