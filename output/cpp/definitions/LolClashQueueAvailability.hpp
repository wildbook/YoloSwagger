#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LolClashQueueAvailability_t {
    DoesntMeetRequirements_E = 2,
    Available_E = 0,
    PlatformDisabled_E = 1,
  };

  inline void to_json(nlohmann::json& j, const LolClashQueueAvailability_t& v) {
    switch(v) {
      case LolClashQueueAvailability_t::DoesntMeetRequirements_E:
        j = "DoesntMeetRequirements";
      break;
      case LolClashQueueAvailability_t::Available_E:
        j = "Available";
      break;
      case LolClashQueueAvailability_t::PlatformDisabled_E:
        j = "PlatformDisabled";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolClashQueueAvailability_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "DoesntMeetRequirements"){
      v = LolClashQueueAvailability_t::DoesntMeetRequirements_E;
      return;
    }
    if(s == "Available"){
      v = LolClashQueueAvailability_t::Available_E;
      return;
    }
    if(s == "PlatformDisabled"){
      v = LolClashQueueAvailability_t::PlatformDisabled_E;
      return;
    }
  }
  inline std::string to_string(const LolClashQueueAvailability_t& v) {
    switch(v) {
      case LolClashQueueAvailability_t::DoesntMeetRequirements_E:
        return "DoesntMeetRequirements";
      case LolClashQueueAvailability_t::Available_E:
        return "Available";
      case LolClashQueueAvailability_t::PlatformDisabled_E:
        return "PlatformDisabled";
    }
  }

}
