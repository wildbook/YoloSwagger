#ifndef SWAGGER_TYPES_LcdsInviteeState_HPP
#define SWAGGER_TYPES_LcdsInviteeState_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LcdsInviteeState {
    // 
    QUIT = 6,
    // 
    KICKED = 7,
    // 
    CREATOR = 0,
    // 
    BANNED = 8,
    // 
    JOINED = 5,
    // 
    ACCEPT_FAILED = 4,
    // 
    PENDING = 1,
    // 
    ACCEPTED = 3,
    // 
    DECLINED = 2,
  };

  inline void to_json(nlohmann::json& j, const LcdsInviteeState& v) {
    switch(v) {
      case LcdsInviteeState::QUIT:
        j = "QUIT";
      break;
      case LcdsInviteeState::KICKED:
        j = "KICKED";
      break;
      case LcdsInviteeState::CREATOR:
        j = "CREATOR";
      break;
      case LcdsInviteeState::BANNED:
        j = "BANNED";
      break;
      case LcdsInviteeState::JOINED:
        j = "JOINED";
      break;
      case LcdsInviteeState::ACCEPT_FAILED:
        j = "ACCEPT_FAILED";
      break;
      case LcdsInviteeState::PENDING:
        j = "PENDING";
      break;
      case LcdsInviteeState::ACCEPTED:
        j = "ACCEPTED";
      break;
      case LcdsInviteeState::DECLINED:
        j = "DECLINED";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LcdsInviteeState& v) {
    const auto& s = j.get<std::string>();
    if(s == "QUIT"){
      v = LcdsInviteeState::QUIT;
      return;
    }
    if(s == "KICKED"){
      v = LcdsInviteeState::KICKED;
      return;
    }
    if(s == "CREATOR"){
      v = LcdsInviteeState::CREATOR;
      return;
    }
    if(s == "BANNED"){
      v = LcdsInviteeState::BANNED;
      return;
    }
    if(s == "JOINED"){
      v = LcdsInviteeState::JOINED;
      return;
    }
    if(s == "ACCEPT_FAILED"){
      v = LcdsInviteeState::ACCEPT_FAILED;
      return;
    }
    if(s == "PENDING"){
      v = LcdsInviteeState::PENDING;
      return;
    }
    if(s == "ACCEPTED"){
      v = LcdsInviteeState::ACCEPTED;
      return;
    }
    if(s == "DECLINED"){
      v = LcdsInviteeState::DECLINED;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LcdsInviteeState_HPP
