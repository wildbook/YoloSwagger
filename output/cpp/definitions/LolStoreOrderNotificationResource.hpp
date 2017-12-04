#ifndef SWAGGER_TYPES_LolStoreOrderNotificationResource_HPP
#define SWAGGER_TYPES_LolStoreOrderNotificationResource_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolStoreOrderNotificationResource {
    // 
    std::string status;
    // 
    std::string eventType;
    // 
    std::string eventTypeId;
    // 
    uint64_t id;
  };

  inline void to_json(nlohmann::json& j, const LolStoreOrderNotificationResource& v) {
    j["status"] = v.status;
    j["eventType"] = v.eventType;
    j["eventTypeId"] = v.eventTypeId;
    j["id"] = v.id;
  }

  inline void from_json(const nlohmann::json& j, LolStoreOrderNotificationResource& v) {
    v.status = j.at("status").get<std::string>;
    v.eventType = j.at("eventType").get<std::string>;
    v.eventTypeId = j.at("eventTypeId").get<std::string>;
    v.id = j.at("id").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LolStoreOrderNotificationResource_HPP