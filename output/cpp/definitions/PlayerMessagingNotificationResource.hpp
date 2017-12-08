#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct PlayerMessagingNotificationResource_t {
    std::string_t body;
    std::string_t msgId;
    int32_t_t status;
    int32_t_t id;
    std::string_t title;
  };

  inline void to_json(nlohmann::json& j, const PlayerMessagingNotificationResource_t& v) {
    j["body"] = v.body;
    j["msgId"] = v.msgId;
    j["status"] = v.status;
    j["id"] = v.id;
    j["title"] = v.title;
  }

  inline void from_json(const nlohmann::json& j, PlayerMessagingNotificationResource_t& v) {
    v.body = j.at("body").get<std::string_t>();
    v.msgId = j.at("msgId").get<std::string_t>();
    v.status = j.at("status").get<int32_t_t>();
    v.id = j.at("id").get<int32_t_t>();
    v.title = j.at("title").get<std::string_t>();
  }
  inline std::string to_string(const PlayerMessagingNotificationResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
