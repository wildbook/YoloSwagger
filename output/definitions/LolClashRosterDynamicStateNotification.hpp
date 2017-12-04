#ifndef SWAGGER_TYPES_LolClashRosterDynamicStateNotification_HPP
#define SWAGGER_TYPES_LolClashRosterDynamicStateNotification_HPP
#include <json.hpp>
#include "LolClashRosterNotifyReason.hpp"
#include "RosterDynamicStateDTO.hpp"
namespace leagueapi {
  // 
  struct LolClashRosterDynamicStateNotification {
    // 
    LolClashRosterNotifyReason notifyReason;
    // 
    RosterDynamicStateDTO rosterDynamicState;
    // 
    uint64_t sourcePlayerId;
  };

  inline void to_json(nlohmann::json& j, const LolClashRosterDynamicStateNotification& v) {
    j["notifyReason"] = v.notifyReason;
    j["rosterDynamicState"] = v.rosterDynamicState;
    j["sourcePlayerId"] = v.sourcePlayerId;
  }

  inline void from_json(const nlohmann::json& j, LolClashRosterDynamicStateNotification& v) {
    v.notifyReason = j.at("notifyReason").get<LolClashRosterNotifyReason>;
    v.rosterDynamicState = j.at("rosterDynamicState").get<RosterDynamicStateDTO>;
    v.sourcePlayerId = j.at("sourcePlayerId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LolClashRosterDynamicStateNotification_HPP
