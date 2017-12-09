#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolStoreOrderNotificationResource_t {
    std::string eventTypeId;
    std::string status;
    uint64_t id;
    std::string eventType;
  };

  inline void to_json(nlohmann::json& j, const LolStoreOrderNotificationResource_t& v) {
    j["eventTypeId"] = v.eventTypeId;
    j["status"] = v.status;
    j["id"] = v.id;
    j["eventType"] = v.eventType;
  }

  inline void from_json(const nlohmann::json& j, LolStoreOrderNotificationResource_t& v) {
    v.eventTypeId = j.at("eventTypeId").get<std::string>();
    v.status = j.at("status").get<std::string>();
    v.id = j.at("id").get<uint64_t>();
    v.eventType = j.at("eventType").get<std::string>();
  }
  inline std::string to_string(const LolStoreOrderNotificationResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
