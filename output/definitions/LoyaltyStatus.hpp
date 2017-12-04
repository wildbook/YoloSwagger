#ifndef SWAGGER_TYPES_LoyaltyStatus_HPP
#define SWAGGER_TYPES_LoyaltyStatus_HPP
#include <json.hpp>
namespace test {
  // 
  enum class LoyaltyStatus {
'    // 
    CHANGE = 3,
    // 
    DISABLED = 5,
    // 
    EXPIRY = 2,
    // 
    LEGACY = 0,
    // 
    REVOKE = 4,
    // 
    REWARDS_GRANT = 1,
  };

  void to_json(nlohmann::json& j, const LoyaltyStatus& v) {
    switch(v) {
      case LoyaltyStatus::CHANGE:
        j = "CHANGE";
      break;
      case LoyaltyStatus::DISABLED:
        j = "DISABLED";
      break;
      case LoyaltyStatus::EXPIRY:
        j = "EXPIRY";
      break;
      case LoyaltyStatus::LEGACY:
        j = "LEGACY";
      break;
      case LoyaltyStatus::REVOKE:
        j = "REVOKE";
      break;
      case LoyaltyStatus::REWARDS_GRANT:
        j = "REWARDS_GRANT";
      break;
    }
  }

  void from_json(const nlohmann::json& j, LoyaltyStatus& v) {
    const auto s& = j.get<std::string>();
    if(s == "CHANGE"){
      v = LoyaltyStatus::CHANGE;
      return;
    }
    if(s == "DISABLED"){
      v = LoyaltyStatus::DISABLED;
      return;
    }
    if(s == "EXPIRY"){
      v = LoyaltyStatus::EXPIRY;
      return;
    }
    if(s == "LEGACY"){
      v = LoyaltyStatus::LEGACY;
      return;
    }
    if(s == "REVOKE"){
      v = LoyaltyStatus::REVOKE;
      return;
    }
    if(s == "REWARDS_GRANT"){
      v = LoyaltyStatus::REWARDS_GRANT;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LoyaltyStatus_HPP
