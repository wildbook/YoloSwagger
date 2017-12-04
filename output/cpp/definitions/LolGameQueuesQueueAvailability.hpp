#ifndef SWAGGER_TYPES_LolGameQueuesQueueAvailability_HPP
#define SWAGGER_TYPES_LolGameQueuesQueueAvailability_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolGameQueuesQueueAvailability {
    // 
    Available = 0,
    // 
    PlatformDisabled = 1,
    // 
    DoesntMeetRequirements = 2,
  };

  inline void to_json(nlohmann::json& j, const LolGameQueuesQueueAvailability& v) {
    switch(v) {
      case LolGameQueuesQueueAvailability::Available:
        j = "Available";
      break;
      case LolGameQueuesQueueAvailability::PlatformDisabled:
        j = "PlatformDisabled";
      break;
      case LolGameQueuesQueueAvailability::DoesntMeetRequirements:
        j = "DoesntMeetRequirements";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolGameQueuesQueueAvailability& v) {
    const auto& s = j.get<std::string>();
    if(s == "Available"){
      v = LolGameQueuesQueueAvailability::Available;
      return;
    }
    if(s == "PlatformDisabled"){
      v = LolGameQueuesQueueAvailability::PlatformDisabled;
      return;
    }
    if(s == "DoesntMeetRequirements"){
      v = LolGameQueuesQueueAvailability::DoesntMeetRequirements;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolGameQueuesQueueAvailability_HPP
