#ifndef SWAGGER_TYPES_LolGameflowGameflowAvailabilityState_HPP
#define SWAGGER_TYPES_LolGameflowGameflowAvailabilityState_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolGameflowGameflowAvailabilityState {
    // 
    Available = 0,
    // 
    InGameFlow = 4,
    // 
    Patching = 2,
    // 
    PlayerBanned = 3,
    // 
    Initializing = 1,
    // 
    Configuration = 5,
  };

  inline void to_json(nlohmann::json& j, const LolGameflowGameflowAvailabilityState& v) {
    switch(v) {
      case LolGameflowGameflowAvailabilityState::Available:
        j = "Available";
      break;
      case LolGameflowGameflowAvailabilityState::InGameFlow:
        j = "InGameFlow";
      break;
      case LolGameflowGameflowAvailabilityState::Patching:
        j = "Patching";
      break;
      case LolGameflowGameflowAvailabilityState::PlayerBanned:
        j = "PlayerBanned";
      break;
      case LolGameflowGameflowAvailabilityState::Initializing:
        j = "Initializing";
      break;
      case LolGameflowGameflowAvailabilityState::Configuration:
        j = "Configuration";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolGameflowGameflowAvailabilityState& v) {
    const auto& s = j.get<std::string>();
    if(s == "Available"){
      v = LolGameflowGameflowAvailabilityState::Available;
      return;
    }
    if(s == "InGameFlow"){
      v = LolGameflowGameflowAvailabilityState::InGameFlow;
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
    if(s == "Initializing"){
      v = LolGameflowGameflowAvailabilityState::Initializing;
      return;
    }
    if(s == "Configuration"){
      v = LolGameflowGameflowAvailabilityState::Configuration;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolGameflowGameflowAvailabilityState_HPP
