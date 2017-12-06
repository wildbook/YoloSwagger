#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolStoreOrderNotificationResource_t {
    std::string eventType;
    uint64_t id;
    std::string eventTypeId;
    std::string status;
  };

  inline void to_json(nlohmann::json& j, const LolStoreOrderNotificationResource_t& v) {
    j["eventType"] = v.eventType;
    j["id"] = v.id;
    j["eventTypeId"] = v.eventTypeId;
    j["status"] = v.status;
  }

  inline void from_json(const nlohmann::json& j, LolStoreOrderNotificationResource_t& v) {
    v.eventType = j.at("eventType").get<std::string>();
    v.id = j.at("id").get<uint64_t>();
    v.eventTypeId = j.at("eventTypeId").get<std::string>();
    v.status = j.at("status").get<std::string>();
  }
}
