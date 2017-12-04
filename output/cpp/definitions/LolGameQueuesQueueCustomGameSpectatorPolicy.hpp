#ifndef SWAGGER_TYPES_LolGameQueuesQueueCustomGameSpectatorPolicy_HPP
#define SWAGGER_TYPES_LolGameQueuesQueueCustomGameSpectatorPolicy_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolGameQueuesQueueCustomGameSpectatorPolicy {
    // 
    FriendsAllowed = 2,
    // 
    LobbyAllowed = 1,
    // 
    AllAllowed = 3,
    // 
    NotAllowed = 0,
  };

  inline void to_json(nlohmann::json& j, const LolGameQueuesQueueCustomGameSpectatorPolicy& v) {
    switch(v) {
      case LolGameQueuesQueueCustomGameSpectatorPolicy::FriendsAllowed:
        j = "FriendsAllowed";
      break;
      case LolGameQueuesQueueCustomGameSpectatorPolicy::LobbyAllowed:
        j = "LobbyAllowed";
      break;
      case LolGameQueuesQueueCustomGameSpectatorPolicy::AllAllowed:
        j = "AllAllowed";
      break;
      case LolGameQueuesQueueCustomGameSpectatorPolicy::NotAllowed:
        j = "NotAllowed";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolGameQueuesQueueCustomGameSpectatorPolicy& v) {
    const auto& s = j.get<std::string>();
    if(s == "FriendsAllowed"){
      v = LolGameQueuesQueueCustomGameSpectatorPolicy::FriendsAllowed;
      return;
    }
    if(s == "LobbyAllowed"){
      v = LolGameQueuesQueueCustomGameSpectatorPolicy::LobbyAllowed;
      return;
    }
    if(s == "AllAllowed"){
      v = LolGameQueuesQueueCustomGameSpectatorPolicy::AllAllowed;
      return;
    }
    if(s == "NotAllowed"){
      v = LolGameQueuesQueueCustomGameSpectatorPolicy::NotAllowed;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolGameQueuesQueueCustomGameSpectatorPolicy_HPP
