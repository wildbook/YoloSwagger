#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class PendingRosterInviteeState_t {
    REVOKED_E = 3,
    DECLINED_E = 2,
    SUGGESTED_E = 0,
    PENDING_E = 1,
  };

  inline void to_json(nlohmann::json& j, const PendingRosterInviteeState_t& v) {
    switch(v) {
      case PendingRosterInviteeState_t::REVOKED_E:
        j = "REVOKED";
      break;
      case PendingRosterInviteeState_t::DECLINED_E:
        j = "DECLINED";
      break;
      case PendingRosterInviteeState_t::SUGGESTED_E:
        j = "SUGGESTED";
      break;
      case PendingRosterInviteeState_t::PENDING_E:
        j = "PENDING";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, PendingRosterInviteeState_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "REVOKED"){
      v = PendingRosterInviteeState_t::REVOKED_E;
      return;
    }
    if(s == "DECLINED"){
      v = PendingRosterInviteeState_t::DECLINED_E;
      return;
    }
    if(s == "SUGGESTED"){
      v = PendingRosterInviteeState_t::SUGGESTED_E;
      return;
    }
    if(s == "PENDING"){
      v = PendingRosterInviteeState_t::PENDING_E;
      return;
    }
  }
  inline std::string to_string(const PendingRosterInviteeState_t& v) {
    switch(v) {
      case PendingRosterInviteeState_t::REVOKED_E:
        return "REVOKED";
      case PendingRosterInviteeState_t::DECLINED_E:
        return "DECLINED";
      case PendingRosterInviteeState_t::SUGGESTED_E:
        return "SUGGESTED";
      case PendingRosterInviteeState_t::PENDING_E:
        return "PENDING";
    }
  }

}
