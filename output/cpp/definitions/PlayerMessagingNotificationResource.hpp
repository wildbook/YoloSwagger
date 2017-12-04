#ifndef SWAGGER_TYPES_PlayerMessagingNotificationResource_HPP
#define SWAGGER_TYPES_PlayerMessagingNotificationResource_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct PlayerMessagingNotificationResource {
    // 
    std::string body;
    // 
    std::string msgId;
    // 
    int32_t status;
    // 
    int32_t id;
    // 
    std::string title;
  };

  inline void to_json(nlohmann::json& j, const PlayerMessagingNotificationResource& v) {
    j["body"] = v.body;
    j["msgId"] = v.msgId;
    j["status"] = v.status;
    j["id"] = v.id;
    j["title"] = v.title;
  }

  inline void from_json(const nlohmann::json& j, PlayerMessagingNotificationResource& v) {
    v.body = j.at("body").get<std::string>;
    v.msgId = j.at("msgId").get<std::string>;
    v.status = j.at("status").get<int32_t>;
    v.id = j.at("id").get<int32_t>;
    v.title = j.at("title").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_PlayerMessagingNotificationResource_HPP
