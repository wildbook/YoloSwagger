#ifndef SWAGGER_TYPES_LolLobbyQueueAvailability_HPP
#define SWAGGER_TYPES_LolLobbyQueueAvailability_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolLobbyQueueAvailability {
    // 
    Available = 0,
    // 
    PlatformDisabled = 1,
    // 
    DoesntMeetRequirements = 2,
  };

  inline void to_json(nlohmann::json& j, const LolLobbyQueueAvailability& v) {
    switch(v) {
      case LolLobbyQueueAvailability::Available:
        j = "Available";
      break;
      case LolLobbyQueueAvailability::PlatformDisabled:
        j = "PlatformDisabled";
      break;
      case LolLobbyQueueAvailability::DoesntMeetRequirements:
        j = "DoesntMeetRequirements";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolLobbyQueueAvailability& v) {
    const auto& s = j.get<std::string>();
    if(s == "Available"){
      v = LolLobbyQueueAvailability::Available;
      return;
    }
    if(s == "PlatformDisabled"){
      v = LolLobbyQueueAvailability::PlatformDisabled;
      return;
    }
    if(s == "DoesntMeetRequirements"){
      v = LolLobbyQueueAvailability::DoesntMeetRequirements;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolLobbyQueueAvailability_HPP
