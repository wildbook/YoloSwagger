#ifndef SWAGGER_TYPES_LoyaltyStatus_HPP
#define SWAGGER_TYPES_LoyaltyStatus_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LoyaltyStatus {
    // 
    REVOKE = 4,
    // 
    EXPIRY = 2,
    // 
    DISABLED = 5,
    // 
    LEGACY = 0,
    // 
    REWARDS_GRANT = 1,
    // 
    CHANGE = 3,
  };

  inline void to_json(nlohmann::json& j, const LoyaltyStatus& v) {
    switch(v) {
      case LoyaltyStatus::REVOKE:
        j = "REVOKE";
      break;
      case LoyaltyStatus::EXPIRY:
        j = "EXPIRY";
      break;
      case LoyaltyStatus::DISABLED:
        j = "DISABLED";
      break;
      case LoyaltyStatus::LEGACY:
        j = "LEGACY";
      break;
      case LoyaltyStatus::REWARDS_GRANT:
        j = "REWARDS_GRANT";
      break;
      case LoyaltyStatus::CHANGE:
        j = "CHANGE";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LoyaltyStatus& v) {
    const auto& s = j.get<std::string>();
    if(s == "REVOKE"){
      v = LoyaltyStatus::REVOKE;
      return;
    }
    if(s == "EXPIRY"){
      v = LoyaltyStatus::EXPIRY;
      return;
    }
    if(s == "DISABLED"){
      v = LoyaltyStatus::DISABLED;
      return;
    }
    if(s == "LEGACY"){
      v = LoyaltyStatus::LEGACY;
      return;
    }
    if(s == "REWARDS_GRANT"){
      v = LoyaltyStatus::REWARDS_GRANT;
      return;
    }
    if(s == "CHANGE"){
      v = LoyaltyStatus::CHANGE;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LoyaltyStatus_HPP
