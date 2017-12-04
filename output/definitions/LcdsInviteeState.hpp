#ifndef SWAGGER_TYPES_LcdsInviteeState_HPP
#define SWAGGER_TYPES_LcdsInviteeState_HPP
#include <json.hpp>
namespace test {
  // 
  enum class LcdsInviteeState {
'    // 
    ACCEPTED = 3,
    // 
    ACCEPT_FAILED = 4,
    // 
    BANNED = 8,
    // 
    CREATOR = 0,
    // 
    DECLINED = 2,
    // 
    JOINED = 5,
    // 
    KICKED = 7,
    // 
    PENDING = 1,
    // 
    QUIT = 6,
  };

  void to_json(nlohmann::json& j, const LcdsInviteeState& v) {
    switch(v) {
      case LcdsInviteeState::ACCEPTED:
        j = "ACCEPTED";
      break;
      case LcdsInviteeState::ACCEPT_FAILED:
        j = "ACCEPT_FAILED";
      break;
      case LcdsInviteeState::BANNED:
        j = "BANNED";
      break;
      case LcdsInviteeState::CREATOR:
        j = "CREATOR";
      break;
      case LcdsInviteeState::DECLINED:
        j = "DECLINED";
      break;
      case LcdsInviteeState::JOINED:
        j = "JOINED";
      break;
      case LcdsInviteeState::KICKED:
        j = "KICKED";
      break;
      case LcdsInviteeState::PENDING:
        j = "PENDING";
      break;
      case LcdsInviteeState::QUIT:
        j = "QUIT";
      break;
    }
  }

  void from_json(const nlohmann::json& j, LcdsInviteeState& v) {
    const auto s& = j.get<std::string>();
    if(s == "ACCEPTED"){
      v = LcdsInviteeState::ACCEPTED;
      return;
    }
    if(s == "ACCEPT_FAILED"){
      v = LcdsInviteeState::ACCEPT_FAILED;
      return;
    }
    if(s == "BANNED"){
      v = LcdsInviteeState::BANNED;
      return;
    }
    if(s == "CREATOR"){
      v = LcdsInviteeState::CREATOR;
      return;
    }
    if(s == "DECLINED"){
      v = LcdsInviteeState::DECLINED;
      return;
    }
    if(s == "JOINED"){
      v = LcdsInviteeState::JOINED;
      return;
    }
    if(s == "KICKED"){
      v = LcdsInviteeState::KICKED;
      return;
    }
    if(s == "PENDING"){
      v = LcdsInviteeState::PENDING;
      return;
    }
    if(s == "QUIT"){
      v = LcdsInviteeState::QUIT;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LcdsInviteeState_HPP
