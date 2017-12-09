#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LCDSLoyaltyStateChangeNotificationCategory_t {
    grant_E = 1,
    disabled_E = 5,
    change_E = 3,
    revoke_E = 4,
    legacy_E = 0,
    expiry_E = 2,
  };

  inline void to_json(nlohmann::json& j, const LCDSLoyaltyStateChangeNotificationCategory_t& v) {
    switch(v) {
      case LCDSLoyaltyStateChangeNotificationCategory_t::grant_E:
        j = "grant";
      break;
      case LCDSLoyaltyStateChangeNotificationCategory_t::disabled_E:
        j = "disabled";
      break;
      case LCDSLoyaltyStateChangeNotificationCategory_t::change_E:
        j = "change";
      break;
      case LCDSLoyaltyStateChangeNotificationCategory_t::revoke_E:
        j = "revoke";
      break;
      case LCDSLoyaltyStateChangeNotificationCategory_t::legacy_E:
        j = "legacy";
      break;
      case LCDSLoyaltyStateChangeNotificationCategory_t::expiry_E:
        j = "expiry";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LCDSLoyaltyStateChangeNotificationCategory_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "grant"){
      v = LCDSLoyaltyStateChangeNotificationCategory_t::grant_E;
      return;
    }
    if(s == "disabled"){
      v = LCDSLoyaltyStateChangeNotificationCategory_t::disabled_E;
      return;
    }
    if(s == "change"){
      v = LCDSLoyaltyStateChangeNotificationCategory_t::change_E;
      return;
    }
    if(s == "revoke"){
      v = LCDSLoyaltyStateChangeNotificationCategory_t::revoke_E;
      return;
    }
    if(s == "legacy"){
      v = LCDSLoyaltyStateChangeNotificationCategory_t::legacy_E;
      return;
    }
    if(s == "expiry"){
      v = LCDSLoyaltyStateChangeNotificationCategory_t::expiry_E;
      return;
    }
  }
  inline std::string to_string(const LCDSLoyaltyStateChangeNotificationCategory_t& v) {
    switch(v) {
      case LCDSLoyaltyStateChangeNotificationCategory_t::grant_E:
        return "grant";
      case LCDSLoyaltyStateChangeNotificationCategory_t::disabled_E:
        return "disabled";
      case LCDSLoyaltyStateChangeNotificationCategory_t::change_E:
        return "change";
      case LCDSLoyaltyStateChangeNotificationCategory_t::revoke_E:
        return "revoke";
      case LCDSLoyaltyStateChangeNotificationCategory_t::legacy_E:
        return "legacy";
      case LCDSLoyaltyStateChangeNotificationCategory_t::expiry_E:
        return "expiry";
    }
  }

}
