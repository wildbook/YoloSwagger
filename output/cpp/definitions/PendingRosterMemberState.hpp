#ifndef SWAGGER_TYPES_PendingRosterMemberState_HPP
#define SWAGGER_TYPES_PendingRosterMemberState_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class PendingRosterMemberState {
    // 
    READY = 2,
    // 
    FORCED_NOT_READY = 1,
    // 
    NOT_READY = 0,
    // 
    KICK = 4,
    // 
    LEFT = 3,
  };

  inline void to_json(nlohmann::json& j, const PendingRosterMemberState& v) {
    switch(v) {
      case PendingRosterMemberState::READY:
        j = "READY";
      break;
      case PendingRosterMemberState::FORCED_NOT_READY:
        j = "FORCED_NOT_READY";
      break;
      case PendingRosterMemberState::NOT_READY:
        j = "NOT_READY";
      break;
      case PendingRosterMemberState::KICK:
        j = "KICK";
      break;
      case PendingRosterMemberState::LEFT:
        j = "LEFT";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, PendingRosterMemberState& v) {
    const auto& s = j.get<std::string>();
    if(s == "READY"){
      v = PendingRosterMemberState::READY;
      return;
    }
    if(s == "FORCED_NOT_READY"){
      v = PendingRosterMemberState::FORCED_NOT_READY;
      return;
    }
    if(s == "NOT_READY"){
      v = PendingRosterMemberState::NOT_READY;
      return;
    }
    if(s == "KICK"){
      v = PendingRosterMemberState::KICK;
      return;
    }
    if(s == "LEFT"){
      v = PendingRosterMemberState::LEFT;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_PendingRosterMemberState_HPP
