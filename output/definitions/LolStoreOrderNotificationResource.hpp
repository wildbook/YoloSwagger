#ifndef SWAGGER_TYPES_LolStoreOrderNotificationResource_HPP
#define SWAGGER_TYPES_LolStoreOrderNotificationResource_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolStoreOrderNotificationResource {
    // 
    std::string eventType;
    // 
    std::string eventTypeId;
    // 
    uint64_t id;
    // 
    std::string status;
  };

  void to_json(nlohmann::json& j, const LolStoreOrderNotificationResource& v) {
    j["eventType"] = v.eventType;
    j["eventTypeId"] = v.eventTypeId;
    j["id"] = v.id;
    j["status"] = v.status;
  }

  void from_json(const nlohmann::json& j, LolStoreOrderNotificationResource& v) {
    v.eventType = j.at("eventType").get<std::string>;
    v.eventTypeId = j.at("eventTypeId").get<std::string>;
    v.id = j.at("id").get<uint64_t>;
    v.status = j.at("status").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolStoreOrderNotificationResource_HPP
