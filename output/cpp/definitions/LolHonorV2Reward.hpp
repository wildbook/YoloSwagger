#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolHonorV2Reward_t {
    std::string_t message;
    std::string_t rewardType;
    int32_t_t quantity;
  };

  inline void to_json(nlohmann::json& j, const LolHonorV2Reward_t& v) {
    j["message"] = v.message;
    j["rewardType"] = v.rewardType;
    j["quantity"] = v.quantity;
  }

  inline void from_json(const nlohmann::json& j, LolHonorV2Reward_t& v) {
    v.message = j.at("message").get<std::string_t>();
    v.rewardType = j.at("rewardType").get<std::string_t>();
    v.quantity = j.at("quantity").get<int32_t_t>();
  }
  inline std::string to_string(const LolHonorV2Reward_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
