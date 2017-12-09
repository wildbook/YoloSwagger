#pragma once
#include <json.hpp>
#include <optional>
#include "LCDSLoyaltyRewards.hpp"
#include "LCDSLoyaltyStateChangeNotificationCategory.hpp"
namespace leagueapi {
  struct LCDSLoyaltyStateChangeNotification_t {
    LCDSLoyaltyRewards_t rewards;
    uint64_t accountId;
    LCDSLoyaltyStateChangeNotificationCategory_t notificationCategory;
  };

  inline void to_json(nlohmann::json& j, const LCDSLoyaltyStateChangeNotification_t& v) {
    j["rewards"] = v.rewards;
    j["accountId"] = v.accountId;
    j["notificationCategory"] = v.notificationCategory;
  }

  inline void from_json(const nlohmann::json& j, LCDSLoyaltyStateChangeNotification_t& v) {
    v.rewards = j.at("rewards").get<LCDSLoyaltyRewards_t>();
    v.accountId = j.at("accountId").get<uint64_t>();
    v.notificationCategory = j.at("notificationCategory").get<LCDSLoyaltyStateChangeNotificationCategory_t>();
  }
  inline std::string to_string(const LCDSLoyaltyStateChangeNotification_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
