#ifndef SWAGGER_TYPES_LolMatchmakingQueueCustomGameSpectatorPolicy_HPP
#define SWAGGER_TYPES_LolMatchmakingQueueCustomGameSpectatorPolicy_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolMatchmakingQueueCustomGameSpectatorPolicy {
    // 
    AllAllowed = 3,
    // 
    FriendsAllowed = 2,
    // 
    LobbyAllowed = 1,
    // 
    NotAllowed = 0,
  };

  inline void to_json(nlohmann::json& j, const LolMatchmakingQueueCustomGameSpectatorPolicy& v) {
    switch(v) {
      case LolMatchmakingQueueCustomGameSpectatorPolicy::AllAllowed:
        j = "AllAllowed";
      break;
      case LolMatchmakingQueueCustomGameSpectatorPolicy::FriendsAllowed:
        j = "FriendsAllowed";
      break;
      case LolMatchmakingQueueCustomGameSpectatorPolicy::LobbyAllowed:
        j = "LobbyAllowed";
      break;
      case LolMatchmakingQueueCustomGameSpectatorPolicy::NotAllowed:
        j = "NotAllowed";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolMatchmakingQueueCustomGameSpectatorPolicy& v) {
    const auto s& = j.get<std::string>();
    if(s == "AllAllowed"){
      v = LolMatchmakingQueueCustomGameSpectatorPolicy::AllAllowed;
      return;
    }
    if(s == "FriendsAllowed"){
      v = LolMatchmakingQueueCustomGameSpectatorPolicy::FriendsAllowed;
      return;
    }
    if(s == "LobbyAllowed"){
      v = LolMatchmakingQueueCustomGameSpectatorPolicy::LobbyAllowed;
      return;
    }
    if(s == "NotAllowed"){
      v = LolMatchmakingQueueCustomGameSpectatorPolicy::NotAllowed;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolMatchmakingQueueCustomGameSpectatorPolicy_HPP
