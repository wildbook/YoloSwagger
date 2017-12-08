#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolStoreOrderNotificationResource_t {
    std::string status;
    std::string eventType;
    std::string eventTypeId;
    uint64_t id;
  };

  inline void to_json(nlohmann::json& j, const LolStoreOrderNotificationResource_t& v) {
    j["status"] = v.status;
    j["eventType"] = v.eventType;
    j["eventTypeId"] = v.eventTypeId;
    j["id"] = v.id;
  }

  inline void from_json(const nlohmann::json& j, LolStoreOrderNotificationResource_t& v) {
    v.status = j.at("status").get<std::string>();
    v.eventType = j.at("eventType").get<std::string>();
    v.eventTypeId = j.at("eventTypeId").get<std::string>();
    v.id = j.at("id").get<uint64_t>();
  }
  inline std::string to_string(const LolStoreOrderNotificationResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
