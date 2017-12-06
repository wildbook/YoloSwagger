#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LolChatFriendRequestDirection_t {
    both_E = 2,
    in_E = 0,
    out_E = 1,
  };

  inline void to_json(nlohmann::json& j, const LolChatFriendRequestDirection_t& v) {
    switch(v) {
      case LolChatFriendRequestDirection_t::both_E:
        j = "both";
      break;
      case LolChatFriendRequestDirection_t::in_E:
        j = "in";
      break;
      case LolChatFriendRequestDirection_t::out_E:
        j = "out";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolChatFriendRequestDirection_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "both"){
      v = LolChatFriendRequestDirection_t::both_E;
      return;
    }
    if(s == "in"){
      v = LolChatFriendRequestDirection_t::in_E;
      return;
    }
    if(s == "out"){
      v = LolChatFriendRequestDirection_t::out_E;
      return;
    }
  }
}
