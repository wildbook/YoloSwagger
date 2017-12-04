#ifndef SWAGGER_TYPES_PendingRosterInviteeState_HPP
#define SWAGGER_TYPES_PendingRosterInviteeState_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class PendingRosterInviteeState {
    // 
    SUGGESTED = 0,
    // 
    PENDING = 1,
    // 
    DECLINED = 2,
    // 
    REVOKED = 3,
  };

  inline void to_json(nlohmann::json& j, const PendingRosterInviteeState& v) {
    switch(v) {
      case PendingRosterInviteeState::SUGGESTED:
        j = "SUGGESTED";
      break;
      case PendingRosterInviteeState::PENDING:
        j = "PENDING";
      break;
      case PendingRosterInviteeState::DECLINED:
        j = "DECLINED";
      break;
      case PendingRosterInviteeState::REVOKED:
        j = "REVOKED";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, PendingRosterInviteeState& v) {
    const auto& s = j.get<std::string>();
    if(s == "SUGGESTED"){
      v = PendingRosterInviteeState::SUGGESTED;
      return;
    }
    if(s == "PENDING"){
      v = PendingRosterInviteeState::PENDING;
      return;
    }
    if(s == "DECLINED"){
      v = PendingRosterInviteeState::DECLINED;
      return;
    }
    if(s == "REVOKED"){
      v = PendingRosterInviteeState::REVOKED;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_PendingRosterInviteeState_HPP
