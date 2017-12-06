#pragma once
#include <json.hpp>
#include <optional>
#include "PatcherNotificationId.hpp"
namespace leagueapi {
  struct PatcherNotification_t {
    std::string id;
    PatcherNotificationId_t notificationId;
  };

  inline void to_json(nlohmann::json& j, const PatcherNotification_t& v) {
    j["id"] = v.id;
    j["notificationId"] = v.notificationId;
  }

  inline void from_json(const nlohmann::json& j, PatcherNotification_t& v) {
    v.id = j.at("id").get<std::string>();
    v.notificationId = j.at("notificationId").get<PatcherNotificationId_t>();
  }
}
