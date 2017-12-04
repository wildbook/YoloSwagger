#ifndef SWAGGER_TYPES_LolGameQueuesQueueAvailability_HPP
#define SWAGGER_TYPES_LolGameQueuesQueueAvailability_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolGameQueuesQueueAvailability {
    // 
    Available = 0,
    // 
    DoesntMeetRequirements = 2,
    // 
    PlatformDisabled = 1,
  };

  void to_json(nlohmann::json& j, const LolGameQueuesQueueAvailability& v) {
    switch(v) {
      case LolGameQueuesQueueAvailability::Available:
        j = "Available";
      break;
      case LolGameQueuesQueueAvailability::DoesntMeetRequirements:
        j = "DoesntMeetRequirements";
      break;
      case LolGameQueuesQueueAvailability::PlatformDisabled:
        j = "PlatformDisabled";
      break;
    }
  }

  void from_json(const nlohmann::json& j, LolGameQueuesQueueAvailability& v) {
    const auto s& = j.get<std::string>();
    if(s == "Available"){
      v = LolGameQueuesQueueAvailability::Available;
      return;
    }
    if(s == "DoesntMeetRequirements"){
      v = LolGameQueuesQueueAvailability::DoesntMeetRequirements;
      return;
    }
    if(s == "PlatformDisabled"){
      v = LolGameQueuesQueueAvailability::PlatformDisabled;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolGameQueuesQueueAvailability_HPP
