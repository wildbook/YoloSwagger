#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LolGameflowGameflowAvailabilityState_t {
    Available_E = 0,
    Configuration_E = 5,
    InGameFlow_E = 4,
    Initializing_E = 1,
    Patching_E = 2,
    PlayerBanned_E = 3,
  };

  inline void to_json(nlohmann::json& j, const LolGameflowGameflowAvailabilityState_t& v) {
    switch(v) {
      case LolGameflowGameflowAvailabilityState_t::Available_E:
        j = "Available";
      break;
      case LolGameflowGameflowAvailabilityState_t::Configuration_E:
        j = "Configuration";
      break;
      case LolGameflowGameflowAvailabilityState_t::InGameFlow_E:
        j = "InGameFlow";
      break;
      case LolGameflowGameflowAvailabilityState_t::Initializing_E:
        j = "Initializing";
      break;
      case LolGameflowGameflowAvailabilityState_t::Patching_E:
        j = "Patching";
      break;
      case LolGameflowGameflowAvailabilityState_t::PlayerBanned_E:
        j = "PlayerBanned";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolGameflowGameflowAvailabilityState_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "Available"){
      v = LolGameflowGameflowAvailabilityState_t::Available_E;
      return;
    }
    if(s == "Configuration"){
      v = LolGameflowGameflowAvailabilityState_t::Configuration_E;
      return;
    }
    if(s == "InGameFlow"){
      v = LolGameflowGameflowAvailabilityState_t::InGameFlow_E;
      return;
    }
    if(s == "Initializing"){
      v = LolGameflowGameflowAvailabilityState_t::Initializing_E;
      return;
    }
    if(s == "Patching"){
      v = LolGameflowGameflowAvailabilityState_t::Patching_E;
      return;
    }
    if(s == "PlayerBanned"){
      v = LolGameflowGameflowAvailabilityState_t::PlayerBanned_E;
      return;
    }
  }
}
