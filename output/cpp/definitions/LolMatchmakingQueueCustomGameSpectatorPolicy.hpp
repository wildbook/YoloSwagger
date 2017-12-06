#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LolMatchmakingQueueCustomGameSpectatorPolicy_t {
    AllAllowed_E = 3,
    FriendsAllowed_E = 2,
    LobbyAllowed_E = 1,
    NotAllowed_E = 0,
  };

  inline void to_json(nlohmann::json& j, const LolMatchmakingQueueCustomGameSpectatorPolicy_t& v) {
    switch(v) {
      case LolMatchmakingQueueCustomGameSpectatorPolicy_t::AllAllowed_E:
        j = "AllAllowed";
      break;
      case LolMatchmakingQueueCustomGameSpectatorPolicy_t::FriendsAllowed_E:
        j = "FriendsAllowed";
      break;
      case LolMatchmakingQueueCustomGameSpectatorPolicy_t::LobbyAllowed_E:
        j = "LobbyAllowed";
      break;
      case LolMatchmakingQueueCustomGameSpectatorPolicy_t::NotAllowed_E:
        j = "NotAllowed";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolMatchmakingQueueCustomGameSpectatorPolicy_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "AllAllowed"){
      v = LolMatchmakingQueueCustomGameSpectatorPolicy_t::AllAllowed_E;
      return;
    }
    if(s == "FriendsAllowed"){
      v = LolMatchmakingQueueCustomGameSpectatorPolicy_t::FriendsAllowed_E;
      return;
    }
    if(s == "LobbyAllowed"){
      v = LolMatchmakingQueueCustomGameSpectatorPolicy_t::LobbyAllowed_E;
      return;
    }
    if(s == "NotAllowed"){
      v = LolMatchmakingQueueCustomGameSpectatorPolicy_t::NotAllowed_E;
      return;
    }
  }
}
