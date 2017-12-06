#pragma once
#include <json.hpp>
#include <optional>
#include "LoyaltyRewards.hpp"
#include "LoyaltyStatus.hpp"
namespace leagueapi {
  struct LoyaltyStatusNotification_t {
    LoyaltyRewards_t rewards;
    LoyaltyStatus_t status;
  };

  inline void to_json(nlohmann::json& j, const LoyaltyStatusNotification_t& v) {
    j["rewards"] = v.rewards;
    j["status"] = v.status;
  }

  inline void from_json(const nlohmann::json& j, LoyaltyStatusNotification_t& v) {
    v.rewards = j.at("rewards").get<LoyaltyRewards_t>();
    v.status = j.at("status").get<LoyaltyStatus_t>();
  }
}
