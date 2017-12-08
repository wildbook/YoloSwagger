#pragma once
#include <json.hpp>
#include <optional>
#include "LoyaltyRewards.hpp"
#include "LoyaltyStatus.hpp"
namespace leagueapi {
  struct LoyaltyStatusNotification_t {
    LoyaltyStatus_t status;
    LoyaltyRewards_t rewards;
  };

  inline void to_json(nlohmann::json& j, const LoyaltyStatusNotification_t& v) {
    j["status"] = v.status;
    j["rewards"] = v.rewards;
  }

  inline void from_json(const nlohmann::json& j, LoyaltyStatusNotification_t& v) {
    v.status = j.at("status").get<LoyaltyStatus_t>();
    v.rewards = j.at("rewards").get<LoyaltyRewards_t>();
  }
  inline std::string to_string(const LoyaltyStatusNotification_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
