#pragma once
#include <json.hpp>
#include <optional>
#include "ClashRewardSpec.hpp"
#include "ClashRewardType.hpp"
namespace leagueapi {
  struct ClashRewardDefinition_t {
    ClashRewardType_t rewardType;
    ClashRewardSpec_t rewardSpec;
  };

  inline void to_json(nlohmann::json& j, const ClashRewardDefinition_t& v) {
    j["rewardType"] = v.rewardType;
    j["rewardSpec"] = v.rewardSpec;
  }

  inline void from_json(const nlohmann::json& j, ClashRewardDefinition_t& v) {
    v.rewardType = j.at("rewardType").get<ClashRewardType_t>();
    v.rewardSpec = j.at("rewardSpec").get<ClashRewardSpec_t>();
  }
  inline std::string to_string(const ClashRewardDefinition_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
