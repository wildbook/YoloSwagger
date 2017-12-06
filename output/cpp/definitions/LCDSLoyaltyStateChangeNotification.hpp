#pragma once
#include <json.hpp>
#include <optional>
#include "LCDSLoyaltyRewards.hpp"
#include "LCDSLoyaltyStateChangeNotificationCategory.hpp"
namespace leagueapi {
  struct LCDSLoyaltyStateChangeNotification_t {
    uint64_t accountId;
    LCDSLoyaltyStateChangeNotificationCategory_t notificationCategory;
    LCDSLoyaltyRewards_t rewards;
  };

  inline void to_json(nlohmann::json& j, const LCDSLoyaltyStateChangeNotification_t& v) {
    j["accountId"] = v.accountId;
    j["notificationCategory"] = v.notificationCategory;
    j["rewards"] = v.rewards;
  }

  inline void from_json(const nlohmann::json& j, LCDSLoyaltyStateChangeNotification_t& v) {
    v.accountId = j.at("accountId").get<uint64_t>();
    v.notificationCategory = j.at("notificationCategory").get<LCDSLoyaltyStateChangeNotificationCategory_t>();
    v.rewards = j.at("rewards").get<LCDSLoyaltyRewards_t>();
  }
}
