#pragma once
#include <json.hpp>
#include <optional>
#include "LolClashPlayerNotification.hpp"
#include "LolClashNotifyReason.hpp"
#include "LolClashRosterNotifyReason.hpp"
namespace leagueapi {
  struct LolClashPlayerNotificationData_t {
    LolClashNotifyReason_t notifyReason;
    LolClashRosterNotifyReason_t rosterNotifyReason;
    uint64_t targetSummonerId;
    LolClashPlayerNotification_t notification;
    uint64_t sourceSummonerId;
  };

  inline void to_json(nlohmann::json& j, const LolClashPlayerNotificationData_t& v) {
    j["notifyReason"] = v.notifyReason;
    j["rosterNotifyReason"] = v.rosterNotifyReason;
    j["targetSummonerId"] = v.targetSummonerId;
    j["notification"] = v.notification;
    j["sourceSummonerId"] = v.sourceSummonerId;
  }

  inline void from_json(const nlohmann::json& j, LolClashPlayerNotificationData_t& v) {
    v.notifyReason = j.at("notifyReason").get<LolClashNotifyReason_t>();
    v.rosterNotifyReason = j.at("rosterNotifyReason").get<LolClashRosterNotifyReason_t>();
    v.targetSummonerId = j.at("targetSummonerId").get<uint64_t>();
    v.notification = j.at("notification").get<LolClashPlayerNotification_t>();
    v.sourceSummonerId = j.at("sourceSummonerId").get<uint64_t>();
  }
  inline std::string to_string(const LolClashPlayerNotificationData_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
