#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LcdsInvitationState_t {
    ACTIVE_E = 0,
    ON_HOLD_E = 1,
    REVOKED_E = 2,
  };

  inline void to_json(nlohmann::json& j, const LcdsInvitationState_t& v) {
    switch(v) {
      case LcdsInvitationState_t::ACTIVE_E:
        j = "ACTIVE";
      break;
      case LcdsInvitationState_t::ON_HOLD_E:
        j = "ON_HOLD";
      break;
      case LcdsInvitationState_t::REVOKED_E:
        j = "REVOKED";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LcdsInvitationState_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "ACTIVE"){
      v = LcdsInvitationState_t::ACTIVE_E;
      return;
    }
    if(s == "ON_HOLD"){
      v = LcdsInvitationState_t::ON_HOLD_E;
      return;
    }
    if(s == "REVOKED"){
      v = LcdsInvitationState_t::REVOKED_E;
      return;
    }
  }
}
