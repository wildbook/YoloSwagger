#ifndef SWAGGER_TYPES_LolGameflowQueueAvailability_HPP
#define SWAGGER_TYPES_LolGameflowQueueAvailability_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolGameflowQueueAvailability {
    // 
    Available = 0,
    // 
    DoesntMeetRequirements = 2,
    // 
    PlatformDisabled = 1,
  };

  inline void to_json(nlohmann::json& j, const LolGameflowQueueAvailability& v) {
    switch(v) {
      case LolGameflowQueueAvailability::Available:
        j = "Available";
      break;
      case LolGameflowQueueAvailability::DoesntMeetRequirements:
        j = "DoesntMeetRequirements";
      break;
      case LolGameflowQueueAvailability::PlatformDisabled:
        j = "PlatformDisabled";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolGameflowQueueAvailability& v) {
    const auto& s = j.get<std::string>();
    if(s == "Available"){
      v = LolGameflowQueueAvailability::Available;
      return;
    }
    if(s == "DoesntMeetRequirements"){
      v = LolGameflowQueueAvailability::DoesntMeetRequirements;
      return;
    }
    if(s == "PlatformDisabled"){
      v = LolGameflowQueueAvailability::PlatformDisabled;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolGameflowQueueAvailability_HPP
