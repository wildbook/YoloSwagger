#ifndef SWAGGER_TYPES_LolFeaturedModesGameflowAvailabilityState_HPP
#define SWAGGER_TYPES_LolFeaturedModesGameflowAvailabilityState_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolFeaturedModesGameflowAvailabilityState {
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

  void to_json(nlohmann::json& j, const LolFeaturedModesGameflowAvailabilityState& v) {
    switch(v) {
      case LolFeaturedModesGameflowAvailabilityState::Available:
        j = "Available";
      break;
      case LolFeaturedModesGameflowAvailabilityState::Configuration:
        j = "Configuration";
      break;
      case LolFeaturedModesGameflowAvailabilityState::InGameFlow:
        j = "InGameFlow";
      break;
      case LolFeaturedModesGameflowAvailabilityState::Initializing:
        j = "Initializing";
      break;
      case LolFeaturedModesGameflowAvailabilityState::Patching:
        j = "Patching";
      break;
      case LolFeaturedModesGameflowAvailabilityState::PlayerBanned:
        j = "PlayerBanned";
      break;
    }
  }

  void from_json(const nlohmann::json& j, LolFeaturedModesGameflowAvailabilityState& v) {
    const auto s& = j.get<std::string>();
    if(s == "Available"){
      v = LolFeaturedModesGameflowAvailabilityState::Available;
      return;
    }
    if(s == "Configuration"){
      v = LolFeaturedModesGameflowAvailabilityState::Configuration;
      return;
    }
    if(s == "InGameFlow"){
      v = LolFeaturedModesGameflowAvailabilityState::InGameFlow;
      return;
    }
    if(s == "Initializing"){
      v = LolFeaturedModesGameflowAvailabilityState::Initializing;
      return;
    }
    if(s == "Patching"){
      v = LolFeaturedModesGameflowAvailabilityState::Patching;
      return;
    }
    if(s == "PlayerBanned"){
      v = LolFeaturedModesGameflowAvailabilityState::PlayerBanned;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolFeaturedModesGameflowAvailabilityState_HPP
