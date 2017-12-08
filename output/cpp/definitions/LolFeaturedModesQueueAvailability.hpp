#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LolFeaturedModesQueueAvailability_t {
    Available_E = 0,
    PlatformDisabled_E = 1,
    DoesntMeetRequirements_E = 2,
  };

  inline void to_json(nlohmann::json& j, const LolFeaturedModesQueueAvailability_t& v) {
    switch(v) {
      case LolFeaturedModesQueueAvailability_t::Available_E:
        j = "Available";
      break;
      case LolFeaturedModesQueueAvailability_t::PlatformDisabled_E:
        j = "PlatformDisabled";
      break;
      case LolFeaturedModesQueueAvailability_t::DoesntMeetRequirements_E:
        j = "DoesntMeetRequirements";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolFeaturedModesQueueAvailability_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "Available"){
      v = LolFeaturedModesQueueAvailability_t::Available_E;
      return;
    }
    if(s == "PlatformDisabled"){
      v = LolFeaturedModesQueueAvailability_t::PlatformDisabled_E;
      return;
    }
    if(s == "DoesntMeetRequirements"){
      v = LolFeaturedModesQueueAvailability_t::DoesntMeetRequirements_E;
      return;
    }
  }
  inline std::string to_string(const LolFeaturedModesQueueAvailability_t& v) {
    switch(v) {
      case LolFeaturedModesQueueAvailability_t::Available_E:
        return "Available";
      case LolFeaturedModesQueueAvailability_t::PlatformDisabled_E:
        return "PlatformDisabled";
      case LolFeaturedModesQueueAvailability_t::DoesntMeetRequirements_E:
        return "DoesntMeetRequirements";
    }
  }

}
