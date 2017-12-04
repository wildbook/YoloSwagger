#ifndef SWAGGER_TYPES_LeaverBusterNotificationResource_HPP
#define SWAGGER_TYPES_LeaverBusterNotificationResource_HPP
#include <json.hpp>
#include "LeaverBusterNotificationType.hpp"
namespace leagueapi {
  // 
  struct LeaverBusterNotificationResource {
    // 
    std::string msgId;
    // 
    LeaverBusterNotificationType type;
    // 
    uint32_t id;
    // 
    int32_t punishedGamesRemaining;
  };

  inline void to_json(nlohmann::json& j, const LeaverBusterNotificationResource& v) {
    j["msgId"] = v.msgId;
    j["type"] = v.type;
    j["id"] = v.id;
    j["punishedGamesRemaining"] = v.punishedGamesRemaining;
  }

  inline void from_json(const nlohmann::json& j, LeaverBusterNotificationResource& v) {
    v.msgId = j.at("msgId").get<std::string>;
    v.type = j.at("type").get<LeaverBusterNotificationType>;
    v.id = j.at("id").get<uint32_t>;
    v.punishedGamesRemaining = j.at("punishedGamesRemaining").get<int32_t>;
  }

}
#endif // SWAGGER_TYPES_LeaverBusterNotificationResource_HPP
