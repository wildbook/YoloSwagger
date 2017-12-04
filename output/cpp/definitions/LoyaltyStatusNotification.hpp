#ifndef SWAGGER_TYPES_LoyaltyStatusNotification_HPP
#define SWAGGER_TYPES_LoyaltyStatusNotification_HPP
#include <json.hpp>
#include "LoyaltyRewards.hpp"
#include "LoyaltyStatus.hpp"
namespace leagueapi {
  // 
  struct LoyaltyStatusNotification {
    // 
    LoyaltyStatus status;
    // 
    LoyaltyRewards rewards;
  };

  inline void to_json(nlohmann::json& j, const LoyaltyStatusNotification& v) {
    j["status"] = v.status;
    j["rewards"] = v.rewards;
  }

  inline void from_json(const nlohmann::json& j, LoyaltyStatusNotification& v) {
    v.status = j.at("status").get<LoyaltyStatus>;
    v.rewards = j.at("rewards").get<LoyaltyRewards>;
  }

}
#endif // SWAGGER_TYPES_LoyaltyStatusNotification_HPP
