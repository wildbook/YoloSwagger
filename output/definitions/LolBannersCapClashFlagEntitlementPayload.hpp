#ifndef SWAGGER_TYPES_LolBannersCapClashFlagEntitlementPayload_HPP
#define SWAGGER_TYPES_LolBannersCapClashFlagEntitlementPayload_HPP
#include <json.hpp>
#include "LolBannersClashV2FlagRewardSpec.hpp"
namespace leagueapi {
  // 
  struct LolBannersCapClashFlagEntitlementPayload {
    // 
    std::string eventId;
    // 
    LolBannersClashV2FlagRewardSpec rewardSpec;
    // 
    std::string rewardType;
  };

  inline void to_json(nlohmann::json& j, const LolBannersCapClashFlagEntitlementPayload& v) {
    j["eventId"] = v.eventId;
    j["rewardSpec"] = v.rewardSpec;
    j["rewardType"] = v.rewardType;
  }

  inline void from_json(const nlohmann::json& j, LolBannersCapClashFlagEntitlementPayload& v) {
    v.eventId = j.at("eventId").get<std::string>;
    v.rewardSpec = j.at("rewardSpec").get<LolBannersClashV2FlagRewardSpec>;
    v.rewardType = j.at("rewardType").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolBannersCapClashFlagEntitlementPayload_HPP
