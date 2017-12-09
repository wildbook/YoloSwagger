#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolFeaturedModesFeaturedModesConfig_t {
    uint32_t MaxNotificationSaveDelayMinutes;
    uint32_t QueueToggleNotificationMinutesThreshold;
    bool NotificationsEnabled;
  };

  inline void to_json(nlohmann::json& j, const LolFeaturedModesFeaturedModesConfig_t& v) {
    j["MaxNotificationSaveDelayMinutes"] = v.MaxNotificationSaveDelayMinutes;
    j["QueueToggleNotificationMinutesThreshold"] = v.QueueToggleNotificationMinutesThreshold;
    j["NotificationsEnabled"] = v.NotificationsEnabled;
  }

  inline void from_json(const nlohmann::json& j, LolFeaturedModesFeaturedModesConfig_t& v) {
    v.MaxNotificationSaveDelayMinutes = j.at("MaxNotificationSaveDelayMinutes").get<uint32_t>();
    v.QueueToggleNotificationMinutesThreshold = j.at("QueueToggleNotificationMinutesThreshold").get<uint32_t>();
    v.NotificationsEnabled = j.at("NotificationsEnabled").get<bool>();
  }
  inline std::string to_string(const LolFeaturedModesFeaturedModesConfig_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
