#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LolFeaturedModesQueueAvailability_t {
    DoesntMeetRequirements_E = 2,
    PlatformDisabled_E = 1,
    Available_E = 0,
  };

  inline void to_json(nlohmann::json& j, const LolFeaturedModesQueueAvailability_t& v) {
    switch(v) {
      case LolFeaturedModesQueueAvailability_t::DoesntMeetRequirements_E:
        j = "DoesntMeetRequirements";
      break;
      case LolFeaturedModesQueueAvailability_t::PlatformDisabled_E:
        j = "PlatformDisabled";
      break;
      case LolFeaturedModesQueueAvailability_t::Available_E:
        j = "Available";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolFeaturedModesQueueAvailability_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "DoesntMeetRequirements"){
      v = LolFeaturedModesQueueAvailability_t::DoesntMeetRequirements_E;
      return;
    }
    if(s == "PlatformDisabled"){
      v = LolFeaturedModesQueueAvailability_t::PlatformDisabled_E;
      return;
    }
    if(s == "Available"){
      v = LolFeaturedModesQueueAvailability_t::Available_E;
      return;
    }
  }
}
