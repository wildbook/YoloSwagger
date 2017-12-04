#ifndef SWAGGER_TYPES_RecofrienderFriendState_HPP
#define SWAGGER_TYPES_RecofrienderFriendState_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class RecofrienderFriendState {
    // 
    NONE = 0,
    // 
    FRIEND = 1,
    // 
    BLOCKED = 2,
  };

  inline void to_json(nlohmann::json& j, const RecofrienderFriendState& v) {
    switch(v) {
      case RecofrienderFriendState::NONE:
        j = "NONE";
      break;
      case RecofrienderFriendState::FRIEND:
        j = "FRIEND";
      break;
      case RecofrienderFriendState::BLOCKED:
        j = "BLOCKED";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, RecofrienderFriendState& v) {
    const auto& s = j.get<std::string>();
    if(s == "NONE"){
      v = RecofrienderFriendState::NONE;
      return;
    }
    if(s == "FRIEND"){
      v = RecofrienderFriendState::FRIEND;
      return;
    }
    if(s == "BLOCKED"){
      v = RecofrienderFriendState::BLOCKED;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_RecofrienderFriendState_HPP
