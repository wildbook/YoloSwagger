#ifndef SWAGGER_TYPES_LolGameflowQueueCustomGameSpectatorPolicy_HPP
#define SWAGGER_TYPES_LolGameflowQueueCustomGameSpectatorPolicy_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolGameflowQueueCustomGameSpectatorPolicy {
    // 
    FriendsAllowed = 2,
    // 
    LobbyAllowed = 1,
    // 
    AllAllowed = 3,
    // 
    NotAllowed = 0,
  };

  inline void to_json(nlohmann::json& j, const LolGameflowQueueCustomGameSpectatorPolicy& v) {
    switch(v) {
      case LolGameflowQueueCustomGameSpectatorPolicy::FriendsAllowed:
        j = "FriendsAllowed";
      break;
      case LolGameflowQueueCustomGameSpectatorPolicy::LobbyAllowed:
        j = "LobbyAllowed";
      break;
      case LolGameflowQueueCustomGameSpectatorPolicy::AllAllowed:
        j = "AllAllowed";
      break;
      case LolGameflowQueueCustomGameSpectatorPolicy::NotAllowed:
        j = "NotAllowed";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolGameflowQueueCustomGameSpectatorPolicy& v) {
    const auto& s = j.get<std::string>();
    if(s == "FriendsAllowed"){
      v = LolGameflowQueueCustomGameSpectatorPolicy::FriendsAllowed;
      return;
    }
    if(s == "LobbyAllowed"){
      v = LolGameflowQueueCustomGameSpectatorPolicy::LobbyAllowed;
      return;
    }
    if(s == "AllAllowed"){
      v = LolGameflowQueueCustomGameSpectatorPolicy::AllAllowed;
      return;
    }
    if(s == "NotAllowed"){
      v = LolGameflowQueueCustomGameSpectatorPolicy::NotAllowed;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolGameflowQueueCustomGameSpectatorPolicy_HPP