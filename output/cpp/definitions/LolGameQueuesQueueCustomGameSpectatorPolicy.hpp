#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LolGameQueuesQueueCustomGameSpectatorPolicy_t {
    AllAllowed_E = 3,
    LobbyAllowed_E = 1,
    FriendsAllowed_E = 2,
    NotAllowed_E = 0,
  };

  inline void to_json(nlohmann::json& j, const LolGameQueuesQueueCustomGameSpectatorPolicy_t& v) {
    switch(v) {
      case LolGameQueuesQueueCustomGameSpectatorPolicy_t::AllAllowed_E:
        j = "AllAllowed";
      break;
      case LolGameQueuesQueueCustomGameSpectatorPolicy_t::LobbyAllowed_E:
        j = "LobbyAllowed";
      break;
      case LolGameQueuesQueueCustomGameSpectatorPolicy_t::FriendsAllowed_E:
        j = "FriendsAllowed";
      break;
      case LolGameQueuesQueueCustomGameSpectatorPolicy_t::NotAllowed_E:
        j = "NotAllowed";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolGameQueuesQueueCustomGameSpectatorPolicy_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "AllAllowed"){
      v = LolGameQueuesQueueCustomGameSpectatorPolicy_t::AllAllowed_E;
      return;
    }
    if(s == "LobbyAllowed"){
      v = LolGameQueuesQueueCustomGameSpectatorPolicy_t::LobbyAllowed_E;
      return;
    }
    if(s == "FriendsAllowed"){
      v = LolGameQueuesQueueCustomGameSpectatorPolicy_t::FriendsAllowed_E;
      return;
    }
    if(s == "NotAllowed"){
      v = LolGameQueuesQueueCustomGameSpectatorPolicy_t::NotAllowed_E;
      return;
    }
  }
  inline std::string to_string(const LolGameQueuesQueueCustomGameSpectatorPolicy_t& v) {
    switch(v) {
      case LolGameQueuesQueueCustomGameSpectatorPolicy_t::AllAllowed_E:
        return "AllAllowed";
      case LolGameQueuesQueueCustomGameSpectatorPolicy_t::LobbyAllowed_E:
        return "LobbyAllowed";
      case LolGameQueuesQueueCustomGameSpectatorPolicy_t::FriendsAllowed_E:
        return "FriendsAllowed";
      case LolGameQueuesQueueCustomGameSpectatorPolicy_t::NotAllowed_E:
        return "NotAllowed";
    }
  }

}
