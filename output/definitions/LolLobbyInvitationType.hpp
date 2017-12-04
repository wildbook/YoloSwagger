#ifndef SWAGGER_TYPES_LolLobbyInvitationType_HPP
#define SWAGGER_TYPES_LolLobbyInvitationType_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolLobbyInvitationType {
    // 
    invalid = 0,
    // 
    lobby = 1,
    // 
    party = 2,
  };

  inline void to_json(nlohmann::json& j, const LolLobbyInvitationType& v) {
    switch(v) {
      case LolLobbyInvitationType::invalid:
        j = "invalid";
      break;
      case LolLobbyInvitationType::lobby:
        j = "lobby";
      break;
      case LolLobbyInvitationType::party:
        j = "party";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolLobbyInvitationType& v) {
    const auto& s = j.get<std::string>();
    if(s == "invalid"){
      v = LolLobbyInvitationType::invalid;
      return;
    }
    if(s == "lobby"){
      v = LolLobbyInvitationType::lobby;
      return;
    }
    if(s == "party"){
      v = LolLobbyInvitationType::party;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolLobbyInvitationType_HPP
