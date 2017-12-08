#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LolLobbyQueueCustomGameSpectatorPolicy_t {
    NotAllowed_E = 0,
    FriendsAllowed_E = 2,
    LobbyAllowed_E = 1,
    AllAllowed_E = 3,
  };

  inline void to_json(nlohmann::json& j, const LolLobbyQueueCustomGameSpectatorPolicy_t& v) {
    switch(v) {
      case LolLobbyQueueCustomGameSpectatorPolicy_t::NotAllowed_E:
        j = "NotAllowed";
      break;
      case LolLobbyQueueCustomGameSpectatorPolicy_t::FriendsAllowed_E:
        j = "FriendsAllowed";
      break;
      case LolLobbyQueueCustomGameSpectatorPolicy_t::LobbyAllowed_E:
        j = "LobbyAllowed";
      break;
      case LolLobbyQueueCustomGameSpectatorPolicy_t::AllAllowed_E:
        j = "AllAllowed";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolLobbyQueueCustomGameSpectatorPolicy_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "NotAllowed"){
      v = LolLobbyQueueCustomGameSpectatorPolicy_t::NotAllowed_E;
      return;
    }
    if(s == "FriendsAllowed"){
      v = LolLobbyQueueCustomGameSpectatorPolicy_t::FriendsAllowed_E;
      return;
    }
    if(s == "LobbyAllowed"){
      v = LolLobbyQueueCustomGameSpectatorPolicy_t::LobbyAllowed_E;
      return;
    }
    if(s == "AllAllowed"){
      v = LolLobbyQueueCustomGameSpectatorPolicy_t::AllAllowed_E;
      return;
    }
  }
  inline std::string to_string(const LolLobbyQueueCustomGameSpectatorPolicy_t& v) {
    switch(v) {
      case LolLobbyQueueCustomGameSpectatorPolicy_t::NotAllowed_E:
        return "NotAllowed";
      case LolLobbyQueueCustomGameSpectatorPolicy_t::FriendsAllowed_E:
        return "FriendsAllowed";
      case LolLobbyQueueCustomGameSpectatorPolicy_t::LobbyAllowed_E:
        return "LobbyAllowed";
      case LolLobbyQueueCustomGameSpectatorPolicy_t::AllAllowed_E:
        return "AllAllowed";
    }
  }

}
