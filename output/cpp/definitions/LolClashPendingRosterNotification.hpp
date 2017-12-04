#ifndef SWAGGER_TYPES_LolClashPendingRosterNotification_HPP
#define SWAGGER_TYPES_LolClashPendingRosterNotification_HPP
#include <json.hpp>
#include "LolClashNotifyReason.hpp"
#include "PendingRosterDTO.hpp"
namespace leagueapi {
  // 
  struct LolClashPendingRosterNotification {
    // 
    uint64_t sourcePlayerId;
    // 
    LolClashNotifyReason notifyReason;
    // 
    PendingRosterDTO pendingRoster;
    // 
    uint64_t targetPlayerId;
  };

  inline void to_json(nlohmann::json& j, const LolClashPendingRosterNotification& v) {
    j["sourcePlayerId"] = v.sourcePlayerId;
    j["notifyReason"] = v.notifyReason;
    j["pendingRoster"] = v.pendingRoster;
    j["targetPlayerId"] = v.targetPlayerId;
  }

  inline void from_json(const nlohmann::json& j, LolClashPendingRosterNotification& v) {
    v.sourcePlayerId = j.at("sourcePlayerId").get<uint64_t>;
    v.notifyReason = j.at("notifyReason").get<LolClashNotifyReason>;
    v.pendingRoster = j.at("pendingRoster").get<PendingRosterDTO>;
    v.targetPlayerId = j.at("targetPlayerId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LolClashPendingRosterNotification_HPP
