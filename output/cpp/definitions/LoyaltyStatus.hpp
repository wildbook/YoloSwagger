#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LoyaltyStatus_t {
    LEGACY_E = 0,
    DISABLED_E = 5,
    CHANGE_E = 3,
    REWARDS_GRANT_E = 1,
    EXPIRY_E = 2,
    REVOKE_E = 4,
  };

  inline void to_json(nlohmann::json& j, const LoyaltyStatus_t& v) {
    switch(v) {
      case LoyaltyStatus_t::LEGACY_E:
        j = "LEGACY";
      break;
      case LoyaltyStatus_t::DISABLED_E:
        j = "DISABLED";
      break;
      case LoyaltyStatus_t::CHANGE_E:
        j = "CHANGE";
      break;
      case LoyaltyStatus_t::REWARDS_GRANT_E:
        j = "REWARDS_GRANT";
      break;
      case LoyaltyStatus_t::EXPIRY_E:
        j = "EXPIRY";
      break;
      case LoyaltyStatus_t::REVOKE_E:
        j = "REVOKE";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LoyaltyStatus_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "LEGACY"){
      v = LoyaltyStatus_t::LEGACY_E;
      return;
    }
    if(s == "DISABLED"){
      v = LoyaltyStatus_t::DISABLED_E;
      return;
    }
    if(s == "CHANGE"){
      v = LoyaltyStatus_t::CHANGE_E;
      return;
    }
    if(s == "REWARDS_GRANT"){
      v = LoyaltyStatus_t::REWARDS_GRANT_E;
      return;
    }
    if(s == "EXPIRY"){
      v = LoyaltyStatus_t::EXPIRY_E;
      return;
    }
    if(s == "REVOKE"){
      v = LoyaltyStatus_t::REVOKE_E;
      return;
    }
  }
  inline std::string to_string(const LoyaltyStatus_t& v) {
    switch(v) {
      case LoyaltyStatus_t::LEGACY_E:
        return "LEGACY";
      case LoyaltyStatus_t::DISABLED_E:
        return "DISABLED";
      case LoyaltyStatus_t::CHANGE_E:
        return "CHANGE";
      case LoyaltyStatus_t::REWARDS_GRANT_E:
        return "REWARDS_GRANT";
      case LoyaltyStatus_t::EXPIRY_E:
        return "EXPIRY";
      case LoyaltyStatus_t::REVOKE_E:
        return "REVOKE";
    }
  }

}
