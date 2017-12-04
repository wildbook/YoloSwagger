#ifndef SWAGGER_TYPES_LolChatQueueCustomGameSpectatorPolicy_HPP
#define SWAGGER_TYPES_LolChatQueueCustomGameSpectatorPolicy_HPP
#include <json.hpp>
namespace test {
  // 
  enum class LolChatQueueCustomGameSpectatorPolicy {
'    // 
    AllAllowed = 3,
    // 
    FriendsAllowed = 2,
    // 
    LobbyAllowed = 1,
    // 
    NotAllowed = 0,
  };

  void to_json(nlohmann::json& j, const LolChatQueueCustomGameSpectatorPolicy& v) {
    switch(v) {
      case LolChatQueueCustomGameSpectatorPolicy::AllAllowed:
        j = "AllAllowed";
      break;
      case LolChatQueueCustomGameSpectatorPolicy::FriendsAllowed:
        j = "FriendsAllowed";
      break;
      case LolChatQueueCustomGameSpectatorPolicy::LobbyAllowed:
        j = "LobbyAllowed";
      break;
      case LolChatQueueCustomGameSpectatorPolicy::NotAllowed:
        j = "NotAllowed";
      break;
    }
  }

  void from_json(const nlohmann::json& j, LolChatQueueCustomGameSpectatorPolicy& v) {
    const auto s& = j.get<std::string>();
    if(s == "AllAllowed"){
      v = LolChatQueueCustomGameSpectatorPolicy::AllAllowed;
      return;
    }
    if(s == "FriendsAllowed"){
      v = LolChatQueueCustomGameSpectatorPolicy::FriendsAllowed;
      return;
    }
    if(s == "LobbyAllowed"){
      v = LolChatQueueCustomGameSpectatorPolicy::LobbyAllowed;
      return;
    }
    if(s == "NotAllowed"){
      v = LolChatQueueCustomGameSpectatorPolicy::NotAllowed;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolChatQueueCustomGameSpectatorPolicy_HPP
