#ifndef SWAGGER_TYPES_LolClashPlayerNotificationData_HPP
#define SWAGGER_TYPES_LolClashPlayerNotificationData_HPP
#include <json.hpp>
#include "LolClashPlayerNotification.hpp"
#include "LolClashNotifyReason.hpp"
#include "LolClashRosterNotifyReason.hpp"
namespace leagueapi {
  // 
  struct LolClashPlayerNotificationData {
    // 
    uint64_t sourceSummonerId;
    // 
    LolClashPlayerNotification notification;
    // 
    LolClashNotifyReason notifyReason;
    // 
    LolClashRosterNotifyReason rosterNotifyReason;
    // 
    uint64_t targetSummonerId;
  };

  inline void to_json(nlohmann::json& j, const LolClashPlayerNotificationData& v) {
    j["sourceSummonerId"] = v.sourceSummonerId;
    j["notification"] = v.notification;
    j["notifyReason"] = v.notifyReason;
    j["rosterNotifyReason"] = v.rosterNotifyReason;
    j["targetSummonerId"] = v.targetSummonerId;
  }

  inline void from_json(const nlohmann::json& j, LolClashPlayerNotificationData& v) {
    v.sourceSummonerId = j.at("sourceSummonerId").get<uint64_t>;
    v.notification = j.at("notification").get<LolClashPlayerNotification>;
    v.notifyReason = j.at("notifyReason").get<LolClashNotifyReason>;
    v.rosterNotifyReason = j.at("rosterNotifyReason").get<LolClashRosterNotifyReason>;
    v.targetSummonerId = j.at("targetSummonerId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LolClashPlayerNotificationData_HPP
