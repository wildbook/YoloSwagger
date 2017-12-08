#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LolLobbyInvitationType_t {
    party_E = 2,
    lobby_E = 1,
    invalid_E = 0,
  };

  inline void to_json(nlohmann::json& j, const LolLobbyInvitationType_t& v) {
    switch(v) {
      case LolLobbyInvitationType_t::party_E:
        j = "party";
      break;
      case LolLobbyInvitationType_t::lobby_E:
        j = "lobby";
      break;
      case LolLobbyInvitationType_t::invalid_E:
        j = "invalid";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolLobbyInvitationType_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "party"){
      v = LolLobbyInvitationType_t::party_E;
      return;
    }
    if(s == "lobby"){
      v = LolLobbyInvitationType_t::lobby_E;
      return;
    }
    if(s == "invalid"){
      v = LolLobbyInvitationType_t::invalid_E;
      return;
    }
  }
  inline std::string to_string(const LolLobbyInvitationType_t& v) {
    switch(v) {
      case LolLobbyInvitationType_t::party_E:
        return "party";
      case LolLobbyInvitationType_t::lobby_E:
        return "lobby";
      case LolLobbyInvitationType_t::invalid_E:
        return "invalid";
    }
  }

}
