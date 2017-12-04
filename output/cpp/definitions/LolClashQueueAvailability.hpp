#ifndef SWAGGER_TYPES_LolClashQueueAvailability_HPP
#define SWAGGER_TYPES_LolClashQueueAvailability_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolClashQueueAvailability {
    // 
    Available = 0,
    // 
    PlatformDisabled = 1,
    // 
    DoesntMeetRequirements = 2,
  };

  inline void to_json(nlohmann::json& j, const LolClashQueueAvailability& v) {
    switch(v) {
      case LolClashQueueAvailability::Available:
        j = "Available";
      break;
      case LolClashQueueAvailability::PlatformDisabled:
        j = "PlatformDisabled";
      break;
      case LolClashQueueAvailability::DoesntMeetRequirements:
        j = "DoesntMeetRequirements";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolClashQueueAvailability& v) {
    const auto& s = j.get<std::string>();
    if(s == "Available"){
      v = LolClashQueueAvailability::Available;
      return;
    }
    if(s == "PlatformDisabled"){
      v = LolClashQueueAvailability::PlatformDisabled;
      return;
    }
    if(s == "DoesntMeetRequirements"){
      v = LolClashQueueAvailability::DoesntMeetRequirements;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolClashQueueAvailability_HPP
