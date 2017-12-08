#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolHonorV2Reward_t {
    int32_t quantity;
    std::string rewardType;
    std::string message;
  };

  inline void to_json(nlohmann::json& j, const LolHonorV2Reward_t& v) {
    j["quantity"] = v.quantity;
    j["rewardType"] = v.rewardType;
    j["message"] = v.message;
  }

  inline void from_json(const nlohmann::json& j, LolHonorV2Reward_t& v) {
    v.quantity = j.at("quantity").get<int32_t>();
    v.rewardType = j.at("rewardType").get<std::string>();
    v.message = j.at("message").get<std::string>();
  }
  inline std::string to_string(const LolHonorV2Reward_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
