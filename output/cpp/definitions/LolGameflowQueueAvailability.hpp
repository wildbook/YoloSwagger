#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LolGameflowQueueAvailability_t {
    DoesntMeetRequirements_E = 2,
    PlatformDisabled_E = 1,
    Available_E = 0,
  };

  inline void to_json(nlohmann::json& j, const LolGameflowQueueAvailability_t& v) {
    switch(v) {
      case LolGameflowQueueAvailability_t::DoesntMeetRequirements_E:
        j = "DoesntMeetRequirements";
      break;
      case LolGameflowQueueAvailability_t::PlatformDisabled_E:
        j = "PlatformDisabled";
      break;
      case LolGameflowQueueAvailability_t::Available_E:
        j = "Available";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolGameflowQueueAvailability_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "DoesntMeetRequirements"){
      v = LolGameflowQueueAvailability_t::DoesntMeetRequirements_E;
      return;
    }
    if(s == "PlatformDisabled"){
      v = LolGameflowQueueAvailability_t::PlatformDisabled_E;
      return;
    }
    if(s == "Available"){
      v = LolGameflowQueueAvailability_t::Available_E;
      return;
    }
  }
}
