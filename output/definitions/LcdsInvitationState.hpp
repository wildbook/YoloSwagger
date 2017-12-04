#ifndef SWAGGER_TYPES_LcdsInvitationState_HPP
#define SWAGGER_TYPES_LcdsInvitationState_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LcdsInvitationState {
    // 
    ACTIVE = 0,
    // 
    ON_HOLD = 1,
    // 
    REVOKED = 2,
  };

  inline void to_json(nlohmann::json& j, const LcdsInvitationState& v) {
    switch(v) {
      case LcdsInvitationState::ACTIVE:
        j = "ACTIVE";
      break;
      case LcdsInvitationState::ON_HOLD:
        j = "ON_HOLD";
      break;
      case LcdsInvitationState::REVOKED:
        j = "REVOKED";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LcdsInvitationState& v) {
    const auto s& = j.get<std::string>();
    if(s == "ACTIVE"){
      v = LcdsInvitationState::ACTIVE;
      return;
    }
    if(s == "ON_HOLD"){
      v = LcdsInvitationState::ON_HOLD;
      return;
    }
    if(s == "REVOKED"){
      v = LcdsInvitationState::REVOKED;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LcdsInvitationState_HPP
