#ifndef SWAGGER_TYPES_LCDSLoyaltyStateChangeNotificationCategory_HPP
#define SWAGGER_TYPES_LCDSLoyaltyStateChangeNotificationCategory_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LCDSLoyaltyStateChangeNotificationCategory {
    // 
    change = 3,
    // 
    disabled = 5,
    // 
    expiry = 2,
    // 
    grant = 1,
    // 
    legacy = 0,
    // 
    revoke = 4,
  };

  inline void to_json(nlohmann::json& j, const LCDSLoyaltyStateChangeNotificationCategory& v) {
    switch(v) {
      case LCDSLoyaltyStateChangeNotificationCategory::change:
        j = "change";
      break;
      case LCDSLoyaltyStateChangeNotificationCategory::disabled:
        j = "disabled";
      break;
      case LCDSLoyaltyStateChangeNotificationCategory::expiry:
        j = "expiry";
      break;
      case LCDSLoyaltyStateChangeNotificationCategory::grant:
        j = "grant";
      break;
      case LCDSLoyaltyStateChangeNotificationCategory::legacy:
        j = "legacy";
      break;
      case LCDSLoyaltyStateChangeNotificationCategory::revoke:
        j = "revoke";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LCDSLoyaltyStateChangeNotificationCategory& v) {
    const auto& s = j.get<std::string>();
    if(s == "change"){
      v = LCDSLoyaltyStateChangeNotificationCategory::change;
      return;
    }
    if(s == "disabled"){
      v = LCDSLoyaltyStateChangeNotificationCategory::disabled;
      return;
    }
    if(s == "expiry"){
      v = LCDSLoyaltyStateChangeNotificationCategory::expiry;
      return;
    }
    if(s == "grant"){
      v = LCDSLoyaltyStateChangeNotificationCategory::grant;
      return;
    }
    if(s == "legacy"){
      v = LCDSLoyaltyStateChangeNotificationCategory::legacy;
      return;
    }
    if(s == "revoke"){
      v = LCDSLoyaltyStateChangeNotificationCategory::revoke;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LCDSLoyaltyStateChangeNotificationCategory_HPP
