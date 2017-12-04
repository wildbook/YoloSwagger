#ifndef SWAGGER_TYPES_LolLobbyQueueAvailability_HPP
#define SWAGGER_TYPES_LolLobbyQueueAvailability_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolLobbyQueueAvailability {
    // 
    Available = 0,
    // 
    DoesntMeetRequirements = 2,
    // 
    PlatformDisabled = 1,
  };

  void to_json(nlohmann::json& j, const LolLobbyQueueAvailability& v) {
    switch(v) {
      case LolLobbyQueueAvailability::Available:
        j = "Available";
      break;
      case LolLobbyQueueAvailability::DoesntMeetRequirements:
        j = "DoesntMeetRequirements";
      break;
      case LolLobbyQueueAvailability::PlatformDisabled:
        j = "PlatformDisabled";
      break;
    }
  }

  void from_json(const nlohmann::json& j, LolLobbyQueueAvailability& v) {
    const auto s& = j.get<std::string>();
    if(s == "Available"){
      v = LolLobbyQueueAvailability::Available;
      return;
    }
    if(s == "DoesntMeetRequirements"){
      v = LolLobbyQueueAvailability::DoesntMeetRequirements;
      return;
    }
    if(s == "PlatformDisabled"){
      v = LolLobbyQueueAvailability::PlatformDisabled;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolLobbyQueueAvailability_HPP
