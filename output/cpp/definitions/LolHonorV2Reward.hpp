#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolHonorV2Reward_t {
    std::string message;
    int32_t quantity;
    std::string rewardType;
  };

  inline void to_json(nlohmann::json& j, const LolHonorV2Reward_t& v) {
    j["message"] = v.message;
    j["quantity"] = v.quantity;
    j["rewardType"] = v.rewardType;
  }

  inline void from_json(const nlohmann::json& j, LolHonorV2Reward_t& v) {
    v.message = j.at("message").get<std::string>();
    v.quantity = j.at("quantity").get<int32_t>();
    v.rewardType = j.at("rewardType").get<std::string>();
  }
}
