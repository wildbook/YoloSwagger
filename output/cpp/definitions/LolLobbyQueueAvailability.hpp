#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LolLobbyQueueAvailability_t {
    Available_E = 0,
    DoesntMeetRequirements_E = 2,
    PlatformDisabled_E = 1,
  };

  inline void to_json(nlohmann::json& j, const LolLobbyQueueAvailability_t& v) {
    switch(v) {
      case LolLobbyQueueAvailability_t::Available_E:
        j = "Available";
      break;
      case LolLobbyQueueAvailability_t::DoesntMeetRequirements_E:
        j = "DoesntMeetRequirements";
      break;
      case LolLobbyQueueAvailability_t::PlatformDisabled_E:
        j = "PlatformDisabled";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolLobbyQueueAvailability_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "Available"){
      v = LolLobbyQueueAvailability_t::Available_E;
      return;
    }
    if(s == "DoesntMeetRequirements"){
      v = LolLobbyQueueAvailability_t::DoesntMeetRequirements_E;
      return;
    }
    if(s == "PlatformDisabled"){
      v = LolLobbyQueueAvailability_t::PlatformDisabled_E;
      return;
    }
  }
}
