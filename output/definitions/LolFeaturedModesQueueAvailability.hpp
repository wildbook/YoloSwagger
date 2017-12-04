#ifndef SWAGGER_TYPES_LolFeaturedModesQueueAvailability_HPP
#define SWAGGER_TYPES_LolFeaturedModesQueueAvailability_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolFeaturedModesQueueAvailability {
    // 
    Available = 0,
    // 
    DoesntMeetRequirements = 2,
    // 
    PlatformDisabled = 1,
  };

  void to_json(nlohmann::json& j, const LolFeaturedModesQueueAvailability& v) {
    switch(v) {
      case LolFeaturedModesQueueAvailability::Available:
        j = "Available";
      break;
      case LolFeaturedModesQueueAvailability::DoesntMeetRequirements:
        j = "DoesntMeetRequirements";
      break;
      case LolFeaturedModesQueueAvailability::PlatformDisabled:
        j = "PlatformDisabled";
      break;
    }
  }

  void from_json(const nlohmann::json& j, LolFeaturedModesQueueAvailability& v) {
    const auto s& = j.get<std::string>();
    if(s == "Available"){
      v = LolFeaturedModesQueueAvailability::Available;
      return;
    }
    if(s == "DoesntMeetRequirements"){
      v = LolFeaturedModesQueueAvailability::DoesntMeetRequirements;
      return;
    }
    if(s == "PlatformDisabled"){
      v = LolFeaturedModesQueueAvailability::PlatformDisabled;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolFeaturedModesQueueAvailability_HPP
