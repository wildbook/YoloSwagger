#pragma once
#include <json.hpp>
#include <optional>
#include "LCDSLoyaltyStateChangeNotificationCategory.hpp"
#include "LCDSLoyaltyRewards.hpp"
namespace leagueapi {
  struct LCDSLoyaltyStateChangeNotification_t {
    LCDSLoyaltyStateChangeNotificationCategory_t notificationCategory;
    uint64_t accountId;
    LCDSLoyaltyRewards_t rewards;
  };

  inline void to_json(nlohmann::json& j, const LCDSLoyaltyStateChangeNotification_t& v) {
    j["notificationCategory"] = v.notificationCategory;
    j["accountId"] = v.accountId;
    j["rewards"] = v.rewards;
  }

  inline void from_json(const nlohmann::json& j, LCDSLoyaltyStateChangeNotification_t& v) {
    v.notificationCategory = j.at("notificationCategory").get<LCDSLoyaltyStateChangeNotificationCategory_t>();
    v.accountId = j.at("accountId").get<uint64_t>();
    v.rewards = j.at("rewards").get<LCDSLoyaltyRewards_t>();
  }
  inline std::string to_string(const LCDSLoyaltyStateChangeNotification_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
