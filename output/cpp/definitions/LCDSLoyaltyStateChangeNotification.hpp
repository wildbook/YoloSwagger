#pragma once
#include <json.hpp>
#include <optional>
#include "LCDSLoyaltyStateChangeNotificationCategory.hpp"
#include "LCDSLoyaltyRewards.hpp"
namespace leagueapi {
  struct LCDSLoyaltyStateChangeNotification_t {
    uint64_t accountId;
    LCDSLoyaltyRewards_t rewards;
    LCDSLoyaltyStateChangeNotificationCategory_t notificationCategory;
  };

  inline void to_json(nlohmann::json& j, const LCDSLoyaltyStateChangeNotification_t& v) {
    j["accountId"] = v.accountId;
    j["rewards"] = v.rewards;
    j["notificationCategory"] = v.notificationCategory;
  }

  inline void from_json(const nlohmann::json& j, LCDSLoyaltyStateChangeNotification_t& v) {
    v.accountId = j.at("accountId").get<uint64_t>();
    v.rewards = j.at("rewards").get<LCDSLoyaltyRewards_t>();
    v.notificationCategory = j.at("notificationCategory").get<LCDSLoyaltyStateChangeNotificationCategory_t>();
  }
  inline std::string to_string(const LCDSLoyaltyStateChangeNotification_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
