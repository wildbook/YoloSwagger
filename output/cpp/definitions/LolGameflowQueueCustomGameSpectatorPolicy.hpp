#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LolGameflowQueueCustomGameSpectatorPolicy_t {
    FriendsAllowed_E = 2,
    LobbyAllowed_E = 1,
    AllAllowed_E = 3,
    NotAllowed_E = 0,
  };

  inline void to_json(nlohmann::json& j, const LolGameflowQueueCustomGameSpectatorPolicy_t& v) {
    switch(v) {
      case LolGameflowQueueCustomGameSpectatorPolicy_t::FriendsAllowed_E:
        j = "FriendsAllowed";
      break;
      case LolGameflowQueueCustomGameSpectatorPolicy_t::LobbyAllowed_E:
        j = "LobbyAllowed";
      break;
      case LolGameflowQueueCustomGameSpectatorPolicy_t::AllAllowed_E:
        j = "AllAllowed";
      break;
      case LolGameflowQueueCustomGameSpectatorPolicy_t::NotAllowed_E:
        j = "NotAllowed";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolGameflowQueueCustomGameSpectatorPolicy_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "FriendsAllowed"){
      v = LolGameflowQueueCustomGameSpectatorPolicy_t::FriendsAllowed_E;
      return;
    }
    if(s == "LobbyAllowed"){
      v = LolGameflowQueueCustomGameSpectatorPolicy_t::LobbyAllowed_E;
      return;
    }
    if(s == "AllAllowed"){
      v = LolGameflowQueueCustomGameSpectatorPolicy_t::AllAllowed_E;
      return;
    }
    if(s == "NotAllowed"){
      v = LolGameflowQueueCustomGameSpectatorPolicy_t::NotAllowed_E;
      return;
    }
  }
  inline std::string to_string(const LolGameflowQueueCustomGameSpectatorPolicy_t& v) {
    switch(v) {
      case LolGameflowQueueCustomGameSpectatorPolicy_t::FriendsAllowed_E:
        return "FriendsAllowed";
      case LolGameflowQueueCustomGameSpectatorPolicy_t::LobbyAllowed_E:
        return "LobbyAllowed";
      case LolGameflowQueueCustomGameSpectatorPolicy_t::AllAllowed_E:
        return "AllAllowed";
      case LolGameflowQueueCustomGameSpectatorPolicy_t::NotAllowed_E:
        return "NotAllowed";
    }
  }

}
