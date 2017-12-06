#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolFeaturedModesFeaturedModesConfig_t {
    bool NotificationsEnabled;
    uint32_t MaxNotificationSaveDelayMinutes;
    uint32_t QueueToggleNotificationMinutesThreshold;
  };

  inline void to_json(nlohmann::json& j, const LolFeaturedModesFeaturedModesConfig_t& v) {
    j["NotificationsEnabled"] = v.NotificationsEnabled;
    j["MaxNotificationSaveDelayMinutes"] = v.MaxNotificationSaveDelayMinutes;
    j["QueueToggleNotificationMinutesThreshold"] = v.QueueToggleNotificationMinutesThreshold;
  }

  inline void from_json(const nlohmann::json& j, LolFeaturedModesFeaturedModesConfig_t& v) {
    v.NotificationsEnabled = j.at("NotificationsEnabled").get<bool>();
    v.MaxNotificationSaveDelayMinutes = j.at("MaxNotificationSaveDelayMinutes").get<uint32_t>();
    v.QueueToggleNotificationMinutesThreshold = j.at("QueueToggleNotificationMinutesThreshold").get<uint32_t>();
  }
}
