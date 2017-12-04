#ifndef SWAGGER_TYPES_PatcherNotification_HPP
#define SWAGGER_TYPES_PatcherNotification_HPP
#include <json.hpp>
#include "PatcherNotificationId.hpp"
namespace leagueapi {
  // 
  struct PatcherNotification {
    // 
    PatcherNotificationId notificationId;
    // 
    std::string id;
  };

  inline void to_json(nlohmann::json& j, const PatcherNotification& v) {
    j["notificationId"] = v.notificationId;
    j["id"] = v.id;
  }

  inline void from_json(const nlohmann::json& j, PatcherNotification& v) {
    v.notificationId = j.at("notificationId").get<PatcherNotificationId>;
    v.id = j.at("id").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_PatcherNotification_HPP
