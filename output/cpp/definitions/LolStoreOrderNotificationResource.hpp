#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolStoreOrderNotificationResource_t {
    std::string_t status;
    std::string_t eventType;
    std::string_t eventTypeId;
    uint64_t_t id;
  };

  inline void to_json(nlohmann::json& j, const LolStoreOrderNotificationResource_t& v) {
    j["status"] = v.status;
    j["eventType"] = v.eventType;
    j["eventTypeId"] = v.eventTypeId;
    j["id"] = v.id;
  }

  inline void from_json(const nlohmann::json& j, LolStoreOrderNotificationResource_t& v) {
    v.status = j.at("status").get<std::string_t>();
    v.eventType = j.at("eventType").get<std::string_t>();
    v.eventTypeId = j.at("eventTypeId").get<std::string_t>();
    v.id = j.at("id").get<uint64_t_t>();
  }
  inline std::string to_string(const LolStoreOrderNotificationResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
