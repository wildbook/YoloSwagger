#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolFeaturedModesFeaturedModesConfig_t {
    uint32_t MaxNotificationSaveDelayMinutes;
    bool NotificationsEnabled;
    uint32_t QueueToggleNotificationMinutesThreshold;
  };

  inline void to_json(nlohmann::json& j, const LolFeaturedModesFeaturedModesConfig_t& v) {
    j["MaxNotificationSaveDelayMinutes"] = v.MaxNotificationSaveDelayMinutes;
    j["NotificationsEnabled"] = v.NotificationsEnabled;
    j["QueueToggleNotificationMinutesThreshold"] = v.QueueToggleNotificationMinutesThreshold;
  }

  inline void from_json(const nlohmann::json& j, LolFeaturedModesFeaturedModesConfig_t& v) {
    v.MaxNotificationSaveDelayMinutes = j.at("MaxNotificationSaveDelayMinutes").get<uint32_t>();
    v.NotificationsEnabled = j.at("NotificationsEnabled").get<bool>();
    v.QueueToggleNotificationMinutesThreshold = j.at("QueueToggleNotificationMinutesThreshold").get<uint32_t>();
  }
  inline std::string to_string(const LolFeaturedModesFeaturedModesConfig_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
