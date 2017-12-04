#ifndef SWAGGER_TYPES_LolChatQueueCustomGameSpectatorPolicy_HPP
#define SWAGGER_TYPES_LolChatQueueCustomGameSpectatorPolicy_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolChatQueueCustomGameSpectatorPolicy {
    // 
    FriendsAllowed = 2,
    // 
    LobbyAllowed = 1,
    // 
    AllAllowed = 3,
    // 
    NotAllowed = 0,
  };

  inline void to_json(nlohmann::json& j, const LolChatQueueCustomGameSpectatorPolicy& v) {
    switch(v) {
      case LolChatQueueCustomGameSpectatorPolicy::FriendsAllowed:
        j = "FriendsAllowed";
      break;
      case LolChatQueueCustomGameSpectatorPolicy::LobbyAllowed:
        j = "LobbyAllowed";
      break;
      case LolChatQueueCustomGameSpectatorPolicy::AllAllowed:
        j = "AllAllowed";
      break;
      case LolChatQueueCustomGameSpectatorPolicy::NotAllowed:
        j = "NotAllowed";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolChatQueueCustomGameSpectatorPolicy& v) {
    const auto& s = j.get<std::string>();
    if(s == "FriendsAllowed"){
      v = LolChatQueueCustomGameSpectatorPolicy::FriendsAllowed;
      return;
    }
    if(s == "LobbyAllowed"){
      v = LolChatQueueCustomGameSpectatorPolicy::LobbyAllowed;
      return;
    }
    if(s == "AllAllowed"){
      v = LolChatQueueCustomGameSpectatorPolicy::AllAllowed;
      return;
    }
    if(s == "NotAllowed"){
      v = LolChatQueueCustomGameSpectatorPolicy::NotAllowed;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolChatQueueCustomGameSpectatorPolicy_HPP
