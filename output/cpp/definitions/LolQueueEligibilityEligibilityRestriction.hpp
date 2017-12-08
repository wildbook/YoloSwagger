#pragma once
#include <json.hpp>
#include <optional>
#include "LolQueueEligibilityEligibilityRestrictionCode.hpp"
namespace leagueapi {
  struct LolQueueEligibilityEligibilityRestriction_t {
    std::map<std::string, std::string> restrictionArgs;
    uint64_t_t expiredTimestamp;
    LolQueueEligibilityEligibilityRestrictionCode_t restrictionCode;
    std::vector<uint64_t> summonerIds;
  };

  inline void to_json(nlohmann::json& j, const LolQueueEligibilityEligibilityRestriction_t& v) {
    j["restrictionArgs"] = v.restrictionArgs;
    j["expiredTimestamp"] = v.expiredTimestamp;
    j["restrictionCode"] = v.restrictionCode;
    j["summonerIds"] = v.summonerIds;
  }

  inline void from_json(const nlohmann::json& j, LolQueueEligibilityEligibilityRestriction_t& v) {
    v.restrictionArgs = j.at("restrictionArgs").get<std::map<std::string, std::string>>();
    v.expiredTimestamp = j.at("expiredTimestamp").get<uint64_t_t>();
    v.restrictionCode = j.at("restrictionCode").get<LolQueueEligibilityEligibilityRestrictionCode_t>();
    v.summonerIds = j.at("summonerIds").get<std::vector<uint64_t>>();
  }
  inline std::string to_string(const LolQueueEligibilityEligibilityRestriction_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
