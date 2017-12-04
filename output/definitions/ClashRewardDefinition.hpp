#ifndef SWAGGER_TYPES_ClashRewardDefinition_HPP
#define SWAGGER_TYPES_ClashRewardDefinition_HPP
#include <json.hpp>
#include "ClashRewardSpec.hpp"
#include "ClashRewardType.hpp"
namespace leagueapi {
  // 
  struct ClashRewardDefinition {
    // 
    ClashRewardSpec rewardSpec;
    // 
    ClashRewardType rewardType;
  };

  inline void to_json(nlohmann::json& j, const ClashRewardDefinition& v) {
    j["rewardSpec"] = v.rewardSpec;
    j["rewardType"] = v.rewardType;
  }

  inline void from_json(const nlohmann::json& j, ClashRewardDefinition& v) {
    v.rewardSpec = j.at("rewardSpec").get<ClashRewardSpec>;
    v.rewardType = j.at("rewardType").get<ClashRewardType>;
  }

}
#endif // SWAGGER_TYPES_ClashRewardDefinition_HPP
