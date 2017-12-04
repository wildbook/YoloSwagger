#ifndef SWAGGER_TYPES_LolLobbyQueueCustomGameSpectatorPolicy_HPP
#define SWAGGER_TYPES_LolLobbyQueueCustomGameSpectatorPolicy_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolLobbyQueueCustomGameSpectatorPolicy {
    // 
    FriendsAllowed = 2,
    // 
    LobbyAllowed = 1,
    // 
    AllAllowed = 3,
    // 
    NotAllowed = 0,
  };

  inline void to_json(nlohmann::json& j, const LolLobbyQueueCustomGameSpectatorPolicy& v) {
    switch(v) {
      case LolLobbyQueueCustomGameSpectatorPolicy::FriendsAllowed:
        j = "FriendsAllowed";
      break;
      case LolLobbyQueueCustomGameSpectatorPolicy::LobbyAllowed:
        j = "LobbyAllowed";
      break;
      case LolLobbyQueueCustomGameSpectatorPolicy::AllAllowed:
        j = "AllAllowed";
      break;
      case LolLobbyQueueCustomGameSpectatorPolicy::NotAllowed:
        j = "NotAllowed";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolLobbyQueueCustomGameSpectatorPolicy& v) {
    const auto& s = j.get<std::string>();
    if(s == "FriendsAllowed"){
      v = LolLobbyQueueCustomGameSpectatorPolicy::FriendsAllowed;
      return;
    }
    if(s == "LobbyAllowed"){
      v = LolLobbyQueueCustomGameSpectatorPolicy::LobbyAllowed;
      return;
    }
    if(s == "AllAllowed"){
      v = LolLobbyQueueCustomGameSpectatorPolicy::AllAllowed;
      return;
    }
    if(s == "NotAllowed"){
      v = LolLobbyQueueCustomGameSpectatorPolicy::NotAllowed;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolLobbyQueueCustomGameSpectatorPolicy_HPP
