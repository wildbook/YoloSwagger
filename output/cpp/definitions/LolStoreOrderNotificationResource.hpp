#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolStoreOrderNotificationResource_t {
    std::string status;
    std::string eventTypeId;
    std::string eventType;
    uint64_t id;
  };

  inline void to_json(nlohmann::json& j, const LolStoreOrderNotificationResource_t& v) {
    j["status"] = v.status;
    j["eventTypeId"] = v.eventTypeId;
    j["eventType"] = v.eventType;
    j["id"] = v.id;
  }

  inline void from_json(const nlohmann::json& j, LolStoreOrderNotificationResource_t& v) {
    v.status = j.at("status").get<std::string>();
    v.eventTypeId = j.at("eventTypeId").get<std::string>();
    v.eventType = j.at("eventType").get<std::string>();
    v.id = j.at("id").get<uint64_t>();
  }
  inline std::string to_string(const LolStoreOrderNotificationResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
