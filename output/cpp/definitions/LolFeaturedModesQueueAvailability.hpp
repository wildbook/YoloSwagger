#ifndef SWAGGER_TYPES_LolFeaturedModesQueueAvailability_HPP
#define SWAGGER_TYPES_LolFeaturedModesQueueAvailability_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolFeaturedModesQueueAvailability {
    // 
    Available = 0,
    // 
    PlatformDisabled = 1,
    // 
    DoesntMeetRequirements = 2,
  };

  inline void to_json(nlohmann::json& j, const LolFeaturedModesQueueAvailability& v) {
    switch(v) {
      case LolFeaturedModesQueueAvailability::Available:
        j = "Available";
      break;
      case LolFeaturedModesQueueAvailability::PlatformDisabled:
        j = "PlatformDisabled";
      break;
      case LolFeaturedModesQueueAvailability::DoesntMeetRequirements:
        j = "DoesntMeetRequirements";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolFeaturedModesQueueAvailability& v) {
    const auto& s = j.get<std::string>();
    if(s == "Available"){
      v = LolFeaturedModesQueueAvailability::Available;
      return;
    }
    if(s == "PlatformDisabled"){
      v = LolFeaturedModesQueueAvailability::PlatformDisabled;
      return;
    }
    if(s == "DoesntMeetRequirements"){
      v = LolFeaturedModesQueueAvailability::DoesntMeetRequirements;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolFeaturedModesQueueAvailability_HPP
