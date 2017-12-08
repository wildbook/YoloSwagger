#pragma once
#include <json.hpp>
#include <optional>
#include "LolClashPlayerNotification.hpp"
#include "LolClashNotifyReason.hpp"
#include "LolClashRosterNotifyReason.hpp"
namespace leagueapi {
  struct LolClashPlayerNotificationData_t {
    uint64_t sourceSummonerId;
    LolClashPlayerNotification_t notification;
    LolClashNotifyReason_t notifyReason;
    LolClashRosterNotifyReason_t rosterNotifyReason;
    uint64_t targetSummonerId;
  };

  inline void to_json(nlohmann::json& j, const LolClashPlayerNotificationData_t& v) {
    j["sourceSummonerId"] = v.sourceSummonerId;
    j["notification"] = v.notification;
    j["notifyReason"] = v.notifyReason;
    j["rosterNotifyReason"] = v.rosterNotifyReason;
    j["targetSummonerId"] = v.targetSummonerId;
  }

  inline void from_json(const nlohmann::json& j, LolClashPlayerNotificationData_t& v) {
    v.sourceSummonerId = j.at("sourceSummonerId").get<uint64_t>();
    v.notification = j.at("notification").get<LolClashPlayerNotification_t>();
    v.notifyReason = j.at("notifyReason").get<LolClashNotifyReason_t>();
    v.rosterNotifyReason = j.at("rosterNotifyReason").get<LolClashRosterNotifyReason_t>();
    v.targetSummonerId = j.at("targetSummonerId").get<uint64_t>();
  }
  inline std::string to_string(const LolClashPlayerNotificationData_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
