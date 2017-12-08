#pragma once
#include <json.hpp>
#include <optional>
#include "LolClashRosterNotifyReason.hpp"
#include "LolClashPlayerNotification.hpp"
#include "LolClashNotifyReason.hpp"
namespace leagueapi {
  struct LolClashPlayerNotificationData_t {
    uint64_t targetSummonerId;
    LolClashNotifyReason_t notifyReason;
    LolClashRosterNotifyReason_t rosterNotifyReason;
    LolClashPlayerNotification_t notification;
    uint64_t sourceSummonerId;
  };

  inline void to_json(nlohmann::json& j, const LolClashPlayerNotificationData_t& v) {
    j["targetSummonerId"] = v.targetSummonerId;
    j["notifyReason"] = v.notifyReason;
    j["rosterNotifyReason"] = v.rosterNotifyReason;
    j["notification"] = v.notification;
    j["sourceSummonerId"] = v.sourceSummonerId;
  }

  inline void from_json(const nlohmann::json& j, LolClashPlayerNotificationData_t& v) {
    v.targetSummonerId = j.at("targetSummonerId").get<uint64_t>();
    v.notifyReason = j.at("notifyReason").get<LolClashNotifyReason_t>();
    v.rosterNotifyReason = j.at("rosterNotifyReason").get<LolClashRosterNotifyReason_t>();
    v.notification = j.at("notification").get<LolClashPlayerNotification_t>();
    v.sourceSummonerId = j.at("sourceSummonerId").get<uint64_t>();
  }
  inline std::string to_string(const LolClashPlayerNotificationData_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
