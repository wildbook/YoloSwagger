#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LolLobbyLobbyPartyRewardType_t {
    Ip_E = 1,
    Icon_E = 2,
    None_E = 9999,
  };

  inline void to_json(nlohmann::json& j, const LolLobbyLobbyPartyRewardType_t& v) {
    switch(v) {
      case LolLobbyLobbyPartyRewardType_t::Ip_E:
        j = "Ip";
      break;
      case LolLobbyLobbyPartyRewardType_t::Icon_E:
        j = "Icon";
      break;
      case LolLobbyLobbyPartyRewardType_t::None_E:
        j = "None";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolLobbyLobbyPartyRewardType_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "Ip"){
      v = LolLobbyLobbyPartyRewardType_t::Ip_E;
      return;
    }
    if(s == "Icon"){
      v = LolLobbyLobbyPartyRewardType_t::Icon_E;
      return;
    }
    if(s == "None"){
      v = LolLobbyLobbyPartyRewardType_t::None_E;
      return;
    }
  }
  inline std::string to_string(const LolLobbyLobbyPartyRewardType_t& v) {
    switch(v) {
      case LolLobbyLobbyPartyRewardType_t::Ip_E:
        return "Ip";
      case LolLobbyLobbyPartyRewardType_t::Icon_E:
        return "Icon";
      case LolLobbyLobbyPartyRewardType_t::None_E:
        return "None";
    }
  }

}
