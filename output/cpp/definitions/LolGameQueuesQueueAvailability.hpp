#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LolGameQueuesQueueAvailability_t {
    Available_E = 0,
    DoesntMeetRequirements_E = 2,
    PlatformDisabled_E = 1,
  };

  inline void to_json(nlohmann::json& j, const LolGameQueuesQueueAvailability_t& v) {
    switch(v) {
      case LolGameQueuesQueueAvailability_t::Available_E:
        j = "Available";
      break;
      case LolGameQueuesQueueAvailability_t::DoesntMeetRequirements_E:
        j = "DoesntMeetRequirements";
      break;
      case LolGameQueuesQueueAvailability_t::PlatformDisabled_E:
        j = "PlatformDisabled";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolGameQueuesQueueAvailability_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "Available"){
      v = LolGameQueuesQueueAvailability_t::Available_E;
      return;
    }
    if(s == "DoesntMeetRequirements"){
      v = LolGameQueuesQueueAvailability_t::DoesntMeetRequirements_E;
      return;
    }
    if(s == "PlatformDisabled"){
      v = LolGameQueuesQueueAvailability_t::PlatformDisabled_E;
      return;
    }
  }
}
