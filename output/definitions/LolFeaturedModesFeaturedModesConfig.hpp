#ifndef SWAGGER_TYPES_LolFeaturedModesFeaturedModesConfig_HPP
#define SWAGGER_TYPES_LolFeaturedModesFeaturedModesConfig_HPP
#include <json.hpp>
namespace test {
  // 
  struct LolFeaturedModesFeaturedModesConfig {
'    // 
    uint32_t MaxNotificationSaveDelayMinutes;
    // 
    bool NotificationsEnabled;
    // 
    uint32_t QueueToggleNotificationMinutesThreshold;
  };

  void to_json(nlohmann::json& j, const LolFeaturedModesFeaturedModesConfig& v) {
    j["MaxNotificationSaveDelayMinutes"] = v.MaxNotificationSaveDelayMinutes;
    j["NotificationsEnabled"] = v.NotificationsEnabled;
    j["QueueToggleNotificationMinutesThreshold"] = v.QueueToggleNotificationMinutesThreshold;
  }

  void from_json(const nlohmann::json& j, LolFeaturedModesFeaturedModesConfig& v) {
    v.MaxNotificationSaveDelayMinutes = j.at("MaxNotificationSaveDelayMinutes").get<uint32_t>;
    v.NotificationsEnabled = j.at("NotificationsEnabled").get<bool>;
    v.QueueToggleNotificationMinutesThreshold = j.at("QueueToggleNotificationMinutesThreshold").get<uint32_t>;
  }

}
#endif // SWAGGER_TYPES_LolFeaturedModesFeaturedModesConfig_HPP
