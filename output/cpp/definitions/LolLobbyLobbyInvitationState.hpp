#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LolLobbyLobbyInvitationState_t {
    Kicked_E = 5,
    Pending_E = 1,
    Requested_E = 0,
    Accepted_E = 2,
    OnHold_E = 6,
    Joined_E = 3,
    Declined_E = 4,
    Error_E = 7,
  };

  inline void to_json(nlohmann::json& j, const LolLobbyLobbyInvitationState_t& v) {
    switch(v) {
      case LolLobbyLobbyInvitationState_t::Kicked_E:
        j = "Kicked";
      break;
      case LolLobbyLobbyInvitationState_t::Pending_E:
        j = "Pending";
      break;
      case LolLobbyLobbyInvitationState_t::Requested_E:
        j = "Requested";
      break;
      case LolLobbyLobbyInvitationState_t::Accepted_E:
        j = "Accepted";
      break;
      case LolLobbyLobbyInvitationState_t::OnHold_E:
        j = "OnHold";
      break;
      case LolLobbyLobbyInvitationState_t::Joined_E:
        j = "Joined";
      break;
      case LolLobbyLobbyInvitationState_t::Declined_E:
        j = "Declined";
      break;
      case LolLobbyLobbyInvitationState_t::Error_E:
        j = "Error";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolLobbyLobbyInvitationState_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "Kicked"){
      v = LolLobbyLobbyInvitationState_t::Kicked_E;
      return;
    }
    if(s == "Pending"){
      v = LolLobbyLobbyInvitationState_t::Pending_E;
      return;
    }
    if(s == "Requested"){
      v = LolLobbyLobbyInvitationState_t::Requested_E;
      return;
    }
    if(s == "Accepted"){
      v = LolLobbyLobbyInvitationState_t::Accepted_E;
      return;
    }
    if(s == "OnHold"){
      v = LolLobbyLobbyInvitationState_t::OnHold_E;
      return;
    }
    if(s == "Joined"){
      v = LolLobbyLobbyInvitationState_t::Joined_E;
      return;
    }
    if(s == "Declined"){
      v = LolLobbyLobbyInvitationState_t::Declined_E;
      return;
    }
    if(s == "Error"){
      v = LolLobbyLobbyInvitationState_t::Error_E;
      return;
    }
  }
  inline std::string to_string(const LolLobbyLobbyInvitationState_t& v) {
    switch(v) {
      case LolLobbyLobbyInvitationState_t::Kicked_E:
        return "Kicked";
      case LolLobbyLobbyInvitationState_t::Pending_E:
        return "Pending";
      case LolLobbyLobbyInvitationState_t::Requested_E:
        return "Requested";
      case LolLobbyLobbyInvitationState_t::Accepted_E:
        return "Accepted";
      case LolLobbyLobbyInvitationState_t::OnHold_E:
        return "OnHold";
      case LolLobbyLobbyInvitationState_t::Joined_E:
        return "Joined";
      case LolLobbyLobbyInvitationState_t::Declined_E:
        return "Declined";
      case LolLobbyLobbyInvitationState_t::Error_E:
        return "Error";
    }
  }

}
