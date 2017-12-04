#ifndef SWAGGER_TYPES_ClashRewardDefinition_HPP
#define SWAGGER_TYPES_ClashRewardDefinition_HPP
#include <json.hpp>
#include "ClashRewardType.hpp"
#include "ClashRewardSpec.hpp"
namespace test {
  // 
  struct ClashRewardDefinition {
'    // 
    ClashRewardSpec rewardSpec;
    // 
    ClashRewardType rewardType;
  };

  void to_json(nlohmann::json& j, const ClashRewardDefinition& v) {
    j["rewardSpec"] = v.rewardSpec;
    j["rewardType"] = v.rewardType;
  }

  void from_json(const nlohmann::json& j, ClashRewardDefinition& v) {
    v.rewardSpec = j.at("rewardSpec").get<ClashRewardSpec>;
    v.rewardType = j.at("rewardType").get<ClashRewardType>;
  }

}
#endif // SWAGGER_TYPES_ClashRewardDefinition_HPP
