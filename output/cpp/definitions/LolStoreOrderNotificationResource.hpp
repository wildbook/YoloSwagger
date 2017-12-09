#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolStoreOrderNotificationResource_t {
    uint64_t id;
    std::string eventTypeId;
    std::string eventType;
    std::string status;
  };

  inline void to_json(nlohmann::json& j, const LolStoreOrderNotificationResource_t& v) {
    j["id"] = v.id;
    j["eventTypeId"] = v.eventTypeId;
    j["eventType"] = v.eventType;
    j["status"] = v.status;
  }

  inline void from_json(const nlohmann::json& j, LolStoreOrderNotificationResource_t& v) {
    v.id = j.at("id").get<uint64_t>();
    v.eventTypeId = j.at("eventTypeId").get<std::string>();
    v.eventType = j.at("eventType").get<std::string>();
    v.status = j.at("status").get<std::string>();
  }
  inline std::string to_string(const LolStoreOrderNotificationResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
