#ifndef SWAGGER_TYPES_LolQueueEligibilityQueueAvailability_HPP
#define SWAGGER_TYPES_LolQueueEligibilityQueueAvailability_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolQueueEligibilityQueueAvailability {
    // 
    Available = 0,
    // 
    PlatformDisabled = 1,
    // 
    DoesntMeetRequirements = 2,
  };

  inline void to_json(nlohmann::json& j, const LolQueueEligibilityQueueAvailability& v) {
    switch(v) {
      case LolQueueEligibilityQueueAvailability::Available:
        j = "Available";
      break;
      case LolQueueEligibilityQueueAvailability::PlatformDisabled:
        j = "PlatformDisabled";
      break;
      case LolQueueEligibilityQueueAvailability::DoesntMeetRequirements:
        j = "DoesntMeetRequirements";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolQueueEligibilityQueueAvailability& v) {
    const auto& s = j.get<std::string>();
    if(s == "Available"){
      v = LolQueueEligibilityQueueAvailability::Available;
      return;
    }
    if(s == "PlatformDisabled"){
      v = LolQueueEligibilityQueueAvailability::PlatformDisabled;
      return;
    }
    if(s == "DoesntMeetRequirements"){
      v = LolQueueEligibilityQueueAvailability::DoesntMeetRequirements;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolQueueEligibilityQueueAvailability_HPP