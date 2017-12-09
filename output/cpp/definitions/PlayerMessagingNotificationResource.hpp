#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct PlayerMessagingNotificationResource_t {
    int32_t status;
    std::string title;
    int32_t id;
    std::string body;
    std::string msgId;
  };

  inline void to_json(nlohmann::json& j, const PlayerMessagingNotificationResource_t& v) {
    j["status"] = v.status;
    j["title"] = v.title;
    j["id"] = v.id;
    j["body"] = v.body;
    j["msgId"] = v.msgId;
  }

  inline void from_json(const nlohmann::json& j, PlayerMessagingNotificationResource_t& v) {
    v.status = j.at("status").get<int32_t>();
    v.title = j.at("title").get<std::string>();
    v.id = j.at("id").get<int32_t>();
    v.body = j.at("body").get<std::string>();
    v.msgId = j.at("msgId").get<std::string>();
  }
  inline std::string to_string(const PlayerMessagingNotificationResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
