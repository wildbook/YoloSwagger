#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolFeaturedModesFeaturedModesConfig_t {
    bool NotificationsEnabled;
    uint32_t QueueToggleNotificationMinutesThreshold;
    uint32_t MaxNotificationSaveDelayMinutes;
  };

  inline void to_json(nlohmann::json& j, const LolFeaturedModesFeaturedModesConfig_t& v) {
    j["NotificationsEnabled"] = v.NotificationsEnabled;
    j["QueueToggleNotificationMinutesThreshold"] = v.QueueToggleNotificationMinutesThreshold;
    j["MaxNotificationSaveDelayMinutes"] = v.MaxNotificationSaveDelayMinutes;
  }

  inline void from_json(const nlohmann::json& j, LolFeaturedModesFeaturedModesConfig_t& v) {
    v.NotificationsEnabled = j.at("NotificationsEnabled").get<bool>();
    v.QueueToggleNotificationMinutesThreshold = j.at("QueueToggleNotificationMinutesThreshold").get<uint32_t>();
    v.MaxNotificationSaveDelayMinutes = j.at("MaxNotificationSaveDelayMinutes").get<uint32_t>();
  }
  inline std::string to_string(const LolFeaturedModesFeaturedModesConfig_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
