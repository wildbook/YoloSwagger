#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LolChatFriendRequestDirection_t {
    out_E = 1,
    in_E = 0,
    both_E = 2,
  };

  inline void to_json(nlohmann::json& j, const LolChatFriendRequestDirection_t& v) {
    switch(v) {
      case LolChatFriendRequestDirection_t::out_E:
        j = "out";
      break;
      case LolChatFriendRequestDirection_t::in_E:
        j = "in";
      break;
      case LolChatFriendRequestDirection_t::both_E:
        j = "both";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolChatFriendRequestDirection_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "out"){
      v = LolChatFriendRequestDirection_t::out_E;
      return;
    }
    if(s == "in"){
      v = LolChatFriendRequestDirection_t::in_E;
      return;
    }
    if(s == "both"){
      v = LolChatFriendRequestDirection_t::both_E;
      return;
    }
  }
  inline std::string to_string(const LolChatFriendRequestDirection_t& v) {
    switch(v) {
      case LolChatFriendRequestDirection_t::out_E:
        return "out";
      case LolChatFriendRequestDirection_t::in_E:
        return "in";
      case LolChatFriendRequestDirection_t::both_E:
        return "both";
    }
  }

}
