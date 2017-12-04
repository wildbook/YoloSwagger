#ifndef SWAGGER_TYPES_LolClashRosterDynamicStateNotification_HPP
#define SWAGGER_TYPES_LolClashRosterDynamicStateNotification_HPP
#include <json.hpp>
#include "LolClashRosterNotifyReason.hpp"
#include "RosterDynamicStateDTO.hpp"
namespace leagueapi {
  // 
  struct LolClashRosterDynamicStateNotification {
    // 
    uint64_t sourcePlayerId;
    // 
    LolClashRosterNotifyReason notifyReason;
    // 
    RosterDynamicStateDTO rosterDynamicState;
  };

  inline void to_json(nlohmann::json& j, const LolClashRosterDynamicStateNotification& v) {
    j["sourcePlayerId"] = v.sourcePlayerId;
    j["notifyReason"] = v.notifyReason;
    j["rosterDynamicState"] = v.rosterDynamicState;
  }

  inline void from_json(const nlohmann::json& j, LolClashRosterDynamicStateNotification& v) {
    v.sourcePlayerId = j.at("sourcePlayerId").get<uint64_t>;
    v.notifyReason = j.at("notifyReason").get<LolClashRosterNotifyReason>;
    v.rosterDynamicState = j.at("rosterDynamicState").get<RosterDynamicStateDTO>;
  }

}
#endif // SWAGGER_TYPES_LolClashRosterDynamicStateNotification_HPP
