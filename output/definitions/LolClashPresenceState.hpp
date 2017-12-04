#ifndef SWAGGER_TYPES_LolClashPresenceState_HPP
#define SWAGGER_TYPES_LolClashPresenceState_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolClashPresenceState {
    // 
    LOCKED_IN = 1,
    // 
    NONE = 0,
    // 
    SCOUTING = 2,
  };

  inline void to_json(nlohmann::json& j, const LolClashPresenceState& v) {
    switch(v) {
      case LolClashPresenceState::LOCKED_IN:
        j = "LOCKED_IN";
      break;
      case LolClashPresenceState::NONE:
        j = "NONE";
      break;
      case LolClashPresenceState::SCOUTING:
        j = "SCOUTING";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolClashPresenceState& v) {
    const auto s& = j.get<std::string>();
    if(s == "LOCKED_IN"){
      v = LolClashPresenceState::LOCKED_IN;
      return;
    }
    if(s == "NONE"){
      v = LolClashPresenceState::NONE;
      return;
    }
    if(s == "SCOUTING"){
      v = LolClashPresenceState::SCOUTING;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolClashPresenceState_HPP
