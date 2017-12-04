#ifndef SWAGGER_TYPES_PatcherNotification_HPP
#define SWAGGER_TYPES_PatcherNotification_HPP
#include <json.hpp>
#include "PatcherNotificationId.hpp"
namespace test {
  // 
  struct PatcherNotification {
'    // 
    std::string id;
    // 
    PatcherNotificationId notificationId;
  };

  void to_json(nlohmann::json& j, const PatcherNotification& v) {
    j["id"] = v.id;
    j["notificationId"] = v.notificationId;
  }

  void from_json(const nlohmann::json& j, PatcherNotification& v) {
    v.id = j.at("id").get<std::string>;
    v.notificationId = j.at("notificationId").get<PatcherNotificationId>;
  }

}
#endif // SWAGGER_TYPES_PatcherNotification_HPP
