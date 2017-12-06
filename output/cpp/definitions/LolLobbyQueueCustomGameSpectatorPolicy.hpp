#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LolLobbyQueueCustomGameSpectatorPolicy_t {
    AllAllowed_E = 3,
    NotAllowed_E = 0,
    LobbyAllowed_E = 1,
    FriendsAllowed_E = 2,
  };

  inline void to_json(nlohmann::json& j, const LolLobbyQueueCustomGameSpectatorPolicy_t& v) {
    switch(v) {
      case LolLobbyQueueCustomGameSpectatorPolicy_t::AllAllowed_E:
        j = "AllAllowed";
      break;
      case LolLobbyQueueCustomGameSpectatorPolicy_t::NotAllowed_E:
        j = "NotAllowed";
      break;
      case LolLobbyQueueCustomGameSpectatorPolicy_t::LobbyAllowed_E:
        j = "LobbyAllowed";
      break;
      case LolLobbyQueueCustomGameSpectatorPolicy_t::FriendsAllowed_E:
        j = "FriendsAllowed";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolLobbyQueueCustomGameSpectatorPolicy_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "AllAllowed"){
      v = LolLobbyQueueCustomGameSpectatorPolicy_t::AllAllowed_E;
      return;
    }
    if(s == "NotAllowed"){
      v = LolLobbyQueueCustomGameSpectatorPolicy_t::NotAllowed_E;
      return;
    }
    if(s == "LobbyAllowed"){
      v = LolLobbyQueueCustomGameSpectatorPolicy_t::LobbyAllowed_E;
      return;
    }
    if(s == "FriendsAllowed"){
      v = LolLobbyQueueCustomGameSpectatorPolicy_t::FriendsAllowed_E;
      return;
    }
  }
}
