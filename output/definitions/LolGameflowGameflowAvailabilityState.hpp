#ifndef SWAGGER_TYPES_LolGameflowGameflowAvailabilityState_HPP
#define SWAGGER_TYPES_LolGameflowGameflowAvailabilityState_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolGameflowGameflowAvailabilityState {
    // 
    Available = 0,
    // 
    Configuration = 5,
    // 
    InGameFlow = 4,
    // 
    Initializing = 1,
    // 
    Patching = 2,
    // 
    PlayerBanned = 3,
  };

  inline void to_json(nlohmann::json& j, const LolGameflowGameflowAvailabilityState& v) {
    switch(v) {
      case LolGameflowGameflowAvailabilityState::Available:
        j = "Available";
      break;
      case LolGameflowGameflowAvailabilityState::Configuration:
        j = "Configuration";
      break;
      case LolGameflowGameflowAvailabilityState::InGameFlow:
        j = "InGameFlow";
      break;
      case LolGameflowGameflowAvailabilityState::Initializing:
        j = "Initializing";
      break;
      case LolGameflowGameflowAvailabilityState::Patching:
        j = "Patching";
      break;
      case LolGameflowGameflowAvailabilityState::PlayerBanned:
        j = "PlayerBanned";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolGameflowGameflowAvailabilityState& v) {
    const auto s& = j.get<std::string>();
    if(s == "Available"){
      v = LolGameflowGameflowAvailabilityState::Available;
      return;
    }
    if(s == "Configuration"){
      v = LolGameflowGameflowAvailabilityState::Configuration;
      return;
    }
    if(s == "InGameFlow"){
      v = LolGameflowGameflowAvailabilityState::InGameFlow;
      return;
    }
    if(s == "Initializing"){
      v = LolGameflowGameflowAvailabilityState::Initializing;
      return;
    }
    if(s == "Patching"){
      v = LolGameflowGameflowAvailabilityState::Patching;
      return;
    }
    if(s == "PlayerBanned"){
      v = LolGameflowGameflowAvailabilityState::PlayerBanned;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolGameflowGameflowAvailabilityState_HPP
