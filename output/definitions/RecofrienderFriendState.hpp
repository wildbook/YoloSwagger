#ifndef SWAGGER_TYPES_RecofrienderFriendState_HPP
#define SWAGGER_TYPES_RecofrienderFriendState_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class RecofrienderFriendState {
    // 
    BLOCKED = 2,
    // 
    FRIEND = 1,
    // 
    NONE = 0,
  };

  void to_json(nlohmann::json& j, const RecofrienderFriendState& v) {
    switch(v) {
      case RecofrienderFriendState::BLOCKED:
        j = "BLOCKED";
      break;
      case RecofrienderFriendState::FRIEND:
        j = "FRIEND";
      break;
      case RecofrienderFriendState::NONE:
        j = "NONE";
      break;
    }
  }

  void from_json(const nlohmann::json& j, RecofrienderFriendState& v) {
    const auto s& = j.get<std::string>();
    if(s == "BLOCKED"){
      v = RecofrienderFriendState::BLOCKED;
      return;
    }
    if(s == "FRIEND"){
      v = RecofrienderFriendState::FRIEND;
      return;
    }
    if(s == "NONE"){
      v = RecofrienderFriendState::NONE;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_RecofrienderFriendState_HPP
