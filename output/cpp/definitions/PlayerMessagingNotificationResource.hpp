#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct PlayerMessagingNotificationResource_t {
    std::string body;
    int32_t id;
    std::string msgId;
    std::string title;
    int32_t status;
  };

  inline void to_json(nlohmann::json& j, const PlayerMessagingNotificationResource_t& v) {
    j["body"] = v.body;
    j["id"] = v.id;
    j["msgId"] = v.msgId;
    j["title"] = v.title;
    j["status"] = v.status;
  }

  inline void from_json(const nlohmann::json& j, PlayerMessagingNotificationResource_t& v) {
    v.body = j.at("body").get<std::string>();
    v.id = j.at("id").get<int32_t>();
    v.msgId = j.at("msgId").get<std::string>();
    v.title = j.at("title").get<std::string>();
    v.status = j.at("status").get<int32_t>();
  }
  inline std::string to_string(const PlayerMessagingNotificationResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
