#ifndef SWAGGER_TYPES_LCDSLoyaltyStateChangeNotification_HPP
#define SWAGGER_TYPES_LCDSLoyaltyStateChangeNotification_HPP
#include <json.hpp>
#include "LCDSLoyaltyRewards.hpp"
#include "LCDSLoyaltyStateChangeNotificationCategory.hpp"
namespace leagueapi {
  // 
  struct LCDSLoyaltyStateChangeNotification {
    // 
    LCDSLoyaltyRewards rewards;
    // 
    LCDSLoyaltyStateChangeNotificationCategory notificationCategory;
    // 
    uint64_t accountId;
  };

  inline void to_json(nlohmann::json& j, const LCDSLoyaltyStateChangeNotification& v) {
    j["rewards"] = v.rewards;
    j["notificationCategory"] = v.notificationCategory;
    j["accountId"] = v.accountId;
  }

  inline void from_json(const nlohmann::json& j, LCDSLoyaltyStateChangeNotification& v) {
    v.rewards = j.at("rewards").get<LCDSLoyaltyRewards>;
    v.notificationCategory = j.at("notificationCategory").get<LCDSLoyaltyStateChangeNotificationCategory>;
    v.accountId = j.at("accountId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LCDSLoyaltyStateChangeNotification_HPP
