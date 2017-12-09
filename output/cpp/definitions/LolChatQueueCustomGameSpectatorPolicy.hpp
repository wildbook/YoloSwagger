#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LolChatQueueCustomGameSpectatorPolicy_t {
    LobbyAllowed_E = 1,
    AllAllowed_E = 3,
    NotAllowed_E = 0,
    FriendsAllowed_E = 2,
  };

  inline void to_json(nlohmann::json& j, const LolChatQueueCustomGameSpectatorPolicy_t& v) {
    switch(v) {
      case LolChatQueueCustomGameSpectatorPolicy_t::LobbyAllowed_E:
        j = "LobbyAllowed";
      break;
      case LolChatQueueCustomGameSpectatorPolicy_t::AllAllowed_E:
        j = "AllAllowed";
      break;
      case LolChatQueueCustomGameSpectatorPolicy_t::NotAllowed_E:
        j = "NotAllowed";
      break;
      case LolChatQueueCustomGameSpectatorPolicy_t::FriendsAllowed_E:
        j = "FriendsAllowed";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolChatQueueCustomGameSpectatorPolicy_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "LobbyAllowed"){
      v = LolChatQueueCustomGameSpectatorPolicy_t::LobbyAllowed_E;
      return;
    }
    if(s == "AllAllowed"){
      v = LolChatQueueCustomGameSpectatorPolicy_t::AllAllowed_E;
      return;
    }
    if(s == "NotAllowed"){
      v = LolChatQueueCustomGameSpectatorPolicy_t::NotAllowed_E;
      return;
    }
    if(s == "FriendsAllowed"){
      v = LolChatQueueCustomGameSpectatorPolicy_t::FriendsAllowed_E;
      return;
    }
  }
  inline std::string to_string(const LolChatQueueCustomGameSpectatorPolicy_t& v) {
    switch(v) {
      case LolChatQueueCustomGameSpectatorPolicy_t::LobbyAllowed_E:
        return "LobbyAllowed";
      case LolChatQueueCustomGameSpectatorPolicy_t::AllAllowed_E:
        return "AllAllowed";
      case LolChatQueueCustomGameSpectatorPolicy_t::NotAllowed_E:
        return "NotAllowed";
      case LolChatQueueCustomGameSpectatorPolicy_t::FriendsAllowed_E:
        return "FriendsAllowed";
    }
  }

}
