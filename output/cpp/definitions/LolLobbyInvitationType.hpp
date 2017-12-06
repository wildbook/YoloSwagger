#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LolLobbyInvitationType_t {
    lobby_E = 1,
    invalid_E = 0,
    party_E = 2,
  };

  inline void to_json(nlohmann::json& j, const LolLobbyInvitationType_t& v) {
    switch(v) {
      case LolLobbyInvitationType_t::lobby_E:
        j = "lobby";
      break;
      case LolLobbyInvitationType_t::invalid_E:
        j = "invalid";
      break;
      case LolLobbyInvitationType_t::party_E:
        j = "party";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolLobbyInvitationType_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "lobby"){
      v = LolLobbyInvitationType_t::lobby_E;
      return;
    }
    if(s == "invalid"){
      v = LolLobbyInvitationType_t::invalid_E;
      return;
    }
    if(s == "party"){
      v = LolLobbyInvitationType_t::party_E;
      return;
    }
  }
}
