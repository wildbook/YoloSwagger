#ifndef SWAGGER_TYPES_LeaverBusterNotificationResource_HPP
#define SWAGGER_TYPES_LeaverBusterNotificationResource_HPP
#include <json.hpp>
#include "LeaverBusterNotificationType.hpp"
namespace test {
  // 
  struct LeaverBusterNotificationResource {
'    // 
    uint32_t id;
    // 
    std::string msgId;
    // 
    int32_t punishedGamesRemaining;
    // 
    LeaverBusterNotificationType type;
  };

  void to_json(nlohmann::json& j, const LeaverBusterNotificationResource& v) {
    j["id"] = v.id;
    j["msgId"] = v.msgId;
    j["punishedGamesRemaining"] = v.punishedGamesRemaining;
    j["type"] = v.type;
  }

  void from_json(const nlohmann::json& j, LeaverBusterNotificationResource& v) {
    v.id = j.at("id").get<uint32_t>;
    v.msgId = j.at("msgId").get<std::string>;
    v.punishedGamesRemaining = j.at("punishedGamesRemaining").get<int32_t>;
    v.type = j.at("type").get<LeaverBusterNotificationType>;
  }

}
#endif // SWAGGER_TYPES_LeaverBusterNotificationResource_HPP
