#pragma once
#include <json.hpp>
#include <optional>
#include "PluginResourceEventType.hpp"
namespace leagueapi {
  struct PluginResourceEvent_t {
    nlohmann::json data;
    PluginResourceEventType_t eventType;
    std::string uri;
  };

  inline void to_json(nlohmann::json& j, const PluginResourceEvent_t& v) {
    j["data"] = v.data;
    j["eventType"] = v.eventType;
    j["uri"] = v.uri;
  }

  inline void from_json(const nlohmann::json& j, PluginResourceEvent_t& v) {
    v.data = j.at("data").get<nlohmann::json>();
    v.eventType = j.at("eventType").get<PluginResourceEventType_t>();
    v.uri = j.at("uri").get<std::string>();
  }
}
