#ifndef SWAGGER_TYPES_LolLobbyLobbyInvitationState_HPP
#define SWAGGER_TYPES_LolLobbyLobbyInvitationState_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolLobbyLobbyInvitationState {
    // 
    Requested = 0,
    // 
    Kicked = 5,
    // 
    Joined = 3,
    // 
    Pending = 1,
    // 
    Error = 7,
    // 
    OnHold = 6,
    // 
    Accepted = 2,
    // 
    Declined = 4,
  };

  inline void to_json(nlohmann::json& j, const LolLobbyLobbyInvitationState& v) {
    switch(v) {
      case LolLobbyLobbyInvitationState::Requested:
        j = "Requested";
      break;
      case LolLobbyLobbyInvitationState::Kicked:
        j = "Kicked";
      break;
      case LolLobbyLobbyInvitationState::Joined:
        j = "Joined";
      break;
      case LolLobbyLobbyInvitationState::Pending:
        j = "Pending";
      break;
      case LolLobbyLobbyInvitationState::Error:
        j = "Error";
      break;
      case LolLobbyLobbyInvitationState::OnHold:
        j = "OnHold";
      break;
      case LolLobbyLobbyInvitationState::Accepted:
        j = "Accepted";
      break;
      case LolLobbyLobbyInvitationState::Declined:
        j = "Declined";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolLobbyLobbyInvitationState& v) {
    const auto& s = j.get<std::string>();
    if(s == "Requested"){
      v = LolLobbyLobbyInvitationState::Requested;
      return;
    }
    if(s == "Kicked"){
      v = LolLobbyLobbyInvitationState::Kicked;
      return;
    }
    if(s == "Joined"){
      v = LolLobbyLobbyInvitationState::Joined;
      return;
    }
    if(s == "Pending"){
      v = LolLobbyLobbyInvitationState::Pending;
      return;
    }
    if(s == "Error"){
      v = LolLobbyLobbyInvitationState::Error;
      return;
    }
    if(s == "OnHold"){
      v = LolLobbyLobbyInvitationState::OnHold;
      return;
    }
    if(s == "Accepted"){
      v = LolLobbyLobbyInvitationState::Accepted;
      return;
    }
    if(s == "Declined"){
      v = LolLobbyLobbyInvitationState::Declined;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolLobbyLobbyInvitationState_HPP
