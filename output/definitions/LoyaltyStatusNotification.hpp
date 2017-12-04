#ifndef SWAGGER_TYPES_LoyaltyStatusNotification_HPP
#define SWAGGER_TYPES_LoyaltyStatusNotification_HPP
#include <json.hpp>
#include "LoyaltyRewards.hpp"
#include "LoyaltyStatus.hpp"
namespace test {
  // 
  struct LoyaltyStatusNotification {
'    // 
    LoyaltyRewards rewards;
    // 
    LoyaltyStatus status;
  };

  void to_json(nlohmann::json& j, const LoyaltyStatusNotification& v) {
    j["rewards"] = v.rewards;
    j["status"] = v.status;
  }

  void from_json(const nlohmann::json& j, LoyaltyStatusNotification& v) {
    v.rewards = j.at("rewards").get<LoyaltyRewards>;
    v.status = j.at("status").get<LoyaltyStatus>;
  }

}
#endif // SWAGGER_TYPES_LoyaltyStatusNotification_HPP
