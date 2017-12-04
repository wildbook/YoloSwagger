#ifndef SWAGGER_TYPES_LolChatFriendRequestDirection_HPP
#define SWAGGER_TYPES_LolChatFriendRequestDirection_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolChatFriendRequestDirection {
    // 
    both = 2,
    // 
    out = 1,
    // 
    in = 0,
  };

  inline void to_json(nlohmann::json& j, const LolChatFriendRequestDirection& v) {
    switch(v) {
      case LolChatFriendRequestDirection::both:
        j = "both";
      break;
      case LolChatFriendRequestDirection::out:
        j = "out";
      break;
      case LolChatFriendRequestDirection::in:
        j = "in";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolChatFriendRequestDirection& v) {
    const auto& s = j.get<std::string>();
    if(s == "both"){
      v = LolChatFriendRequestDirection::both;
      return;
    }
    if(s == "out"){
      v = LolChatFriendRequestDirection::out;
      return;
    }
    if(s == "in"){
      v = LolChatFriendRequestDirection::in;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolChatFriendRequestDirection_HPP