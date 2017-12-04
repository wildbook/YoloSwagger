#ifndef SWAGGER_TYPES_LCDSLoyaltyStateChangeNotification_HPP
#define SWAGGER_TYPES_LCDSLoyaltyStateChangeNotification_HPP
#include <json.hpp>
#include "LCDSLoyaltyStateChangeNotificationCategory.hpp"
#include "LCDSLoyaltyRewards.hpp"
namespace leagueapi {
  // 
  struct LCDSLoyaltyStateChangeNotification {
    // 
    uint64_t accountId;
    // 
    LCDSLoyaltyStateChangeNotificationCategory notificationCategory;
    // 
    LCDSLoyaltyRewards rewards;
  };

  void to_json(nlohmann::json& j, const LCDSLoyaltyStateChangeNotification& v) {
    j["accountId"] = v.accountId;
    j["notificationCategory"] = v.notificationCategory;
    j["rewards"] = v.rewards;
  }

  void from_json(const nlohmann::json& j, LCDSLoyaltyStateChangeNotification& v) {
    v.accountId = j.at("accountId").get<uint64_t>;
    v.notificationCategory = j.at("notificationCategory").get<LCDSLoyaltyStateChangeNotificationCategory>;
    v.rewards = j.at("rewards").get<LCDSLoyaltyRewards>;
  }

}
#endif // SWAGGER_TYPES_LCDSLoyaltyStateChangeNotification_HPP
