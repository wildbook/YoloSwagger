#ifndef SWAGGER_TYPES_PendingRosterInviteeState_HPP
#define SWAGGER_TYPES_PendingRosterInviteeState_HPP
#include <json.hpp>
namespace test {
  // 
  enum class PendingRosterInviteeState {
'    // 
    DECLINED = 2,
    // 
    PENDING = 1,
    // 
    REVOKED = 3,
    // 
    SUGGESTED = 0,
  };

  void to_json(nlohmann::json& j, const PendingRosterInviteeState& v) {
    switch(v) {
      case PendingRosterInviteeState::DECLINED:
        j = "DECLINED";
      break;
      case PendingRosterInviteeState::PENDING:
        j = "PENDING";
      break;
      case PendingRosterInviteeState::REVOKED:
        j = "REVOKED";
      break;
      case PendingRosterInviteeState::SUGGESTED:
        j = "SUGGESTED";
      break;
    }
  }

  void from_json(const nlohmann::json& j, PendingRosterInviteeState& v) {
    const auto s& = j.get<std::string>();
    if(s == "DECLINED"){
      v = PendingRosterInviteeState::DECLINED;
      return;
    }
    if(s == "PENDING"){
      v = PendingRosterInviteeState::PENDING;
      return;
    }
    if(s == "REVOKED"){
      v = PendingRosterInviteeState::REVOKED;
      return;
    }
    if(s == "SUGGESTED"){
      v = PendingRosterInviteeState::SUGGESTED;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_PendingRosterInviteeState_HPP
