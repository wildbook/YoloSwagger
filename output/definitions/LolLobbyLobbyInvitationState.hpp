#ifndef SWAGGER_TYPES_LolLobbyLobbyInvitationState_HPP
#define SWAGGER_TYPES_LolLobbyLobbyInvitationState_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolLobbyLobbyInvitationState {
    // 
    Accepted = 2,
    // 
    Declined = 4,
    // 
    Error = 7,
    // 
    Joined = 3,
    // 
    Kicked = 5,
    // 
    OnHold = 6,
    // 
    Pending = 1,
    // 
    Requested = 0,
  };

  void to_json(nlohmann::json& j, const LolLobbyLobbyInvitationState& v) {
    switch(v) {
      case LolLobbyLobbyInvitationState::Accepted:
        j = "Accepted";
      break;
      case LolLobbyLobbyInvitationState::Declined:
        j = "Declined";
      break;
      case LolLobbyLobbyInvitationState::Error:
        j = "Error";
      break;
      case LolLobbyLobbyInvitationState::Joined:
        j = "Joined";
      break;
      case LolLobbyLobbyInvitationState::Kicked:
        j = "Kicked";
      break;
      case LolLobbyLobbyInvitationState::OnHold:
        j = "OnHold";
      break;
      case LolLobbyLobbyInvitationState::Pending:
        j = "Pending";
      break;
      case LolLobbyLobbyInvitationState::Requested:
        j = "Requested";
      break;
    }
  }

  void from_json(const nlohmann::json& j, LolLobbyLobbyInvitationState& v) {
    const auto s& = j.get<std::string>();
    if(s == "Accepted"){
      v = LolLobbyLobbyInvitationState::Accepted;
      return;
    }
    if(s == "Declined"){
      v = LolLobbyLobbyInvitationState::Declined;
      return;
    }
    if(s == "Error"){
      v = LolLobbyLobbyInvitationState::Error;
      return;
    }
    if(s == "Joined"){
      v = LolLobbyLobbyInvitationState::Joined;
      return;
    }
    if(s == "Kicked"){
      v = LolLobbyLobbyInvitationState::Kicked;
      return;
    }
    if(s == "OnHold"){
      v = LolLobbyLobbyInvitationState::OnHold;
      return;
    }
    if(s == "Pending"){
      v = LolLobbyLobbyInvitationState::Pending;
      return;
    }
    if(s == "Requested"){
      v = LolLobbyLobbyInvitationState::Requested;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolLobbyLobbyInvitationState_HPP
