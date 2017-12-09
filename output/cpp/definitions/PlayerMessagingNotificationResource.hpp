#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct PlayerMessagingNotificationResource_t {
    int32_t status;
    std::string msgId;
    std::string title;
    std::string body;
    int32_t id;
  };

  inline void to_json(nlohmann::json& j, const PlayerMessagingNotificationResource_t& v) {
    j["status"] = v.status;
    j["msgId"] = v.msgId;
    j["title"] = v.title;
    j["body"] = v.body;
    j["id"] = v.id;
  }

  inline void from_json(const nlohmann::json& j, PlayerMessagingNotificationResource_t& v) {
    v.status = j.at("status").get<int32_t>();
    v.msgId = j.at("msgId").get<std::string>();
    v.title = j.at("title").get<std::string>();
    v.body = j.at("body").get<std::string>();
    v.id = j.at("id").get<int32_t>();
  }
  inline std::string to_string(const PlayerMessagingNotificationResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
