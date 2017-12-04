#ifndef SWAGGER_TYPES_LolClashRegisteredRosterNotification_HPP
#define SWAGGER_TYPES_LolClashRegisteredRosterNotification_HPP
#include <json.hpp>
#include "RosterDTO.hpp"
#include "LolClashRosterNotifyReason.hpp"
namespace leagueapi {
  // 
  struct LolClashRegisteredRosterNotification {
    // 
    LolClashRosterNotifyReason notifyReason;
    // 
    RosterDTO roster;
  };

  inline void to_json(nlohmann::json& j, const LolClashRegisteredRosterNotification& v) {
    j["notifyReason"] = v.notifyReason;
    j["roster"] = v.roster;
  }

  inline void from_json(const nlohmann::json& j, LolClashRegisteredRosterNotification& v) {
    v.notifyReason = j.at("notifyReason").get<LolClashRosterNotifyReason>;
    v.roster = j.at("roster").get<RosterDTO>;
  }

}
#endif // SWAGGER_TYPES_LolClashRegisteredRosterNotification_HPP
