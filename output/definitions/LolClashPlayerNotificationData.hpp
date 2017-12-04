#ifndef SWAGGER_TYPES_LolClashPlayerNotificationData_HPP
#define SWAGGER_TYPES_LolClashPlayerNotificationData_HPP
#include <json.hpp>
#include "LolClashRosterNotifyReason.hpp"
#include "LolClashPlayerNotification.hpp"
#include "LolClashNotifyReason.hpp"
namespace leagueapi {
  // 
  struct LolClashPlayerNotificationData {
    // 
    LolClashPlayerNotification notification;
    // 
    LolClashNotifyReason notifyReason;
    // 
    LolClashRosterNotifyReason rosterNotifyReason;
    // 
    uint64_t sourceSummonerId;
    // 
    uint64_t targetSummonerId;
  };

  void to_json(nlohmann::json& j, const LolClashPlayerNotificationData& v) {
    j["notification"] = v.notification;
    j["notifyReason"] = v.notifyReason;
    j["rosterNotifyReason"] = v.rosterNotifyReason;
    j["sourceSummonerId"] = v.sourceSummonerId;
    j["targetSummonerId"] = v.targetSummonerId;
  }

  void from_json(const nlohmann::json& j, LolClashPlayerNotificationData& v) {
    v.notification = j.at("notification").get<LolClashPlayerNotification>;
    v.notifyReason = j.at("notifyReason").get<LolClashNotifyReason>;
    v.rosterNotifyReason = j.at("rosterNotifyReason").get<LolClashRosterNotifyReason>;
    v.sourceSummonerId = j.at("sourceSummonerId").get<uint64_t>;
    v.targetSummonerId = j.at("targetSummonerId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LolClashPlayerNotificationData_HPP
