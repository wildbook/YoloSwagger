#pragma once
#include <json.hpp>
#include <optional>
#include "PluginResourceEventType.hpp"
namespace leagueapi {
  struct PluginResourceEvent_t {
    nlohmann::json data;
    std::string uri;
    PluginResourceEventType_t eventType;
  };

  inline void to_json(nlohmann::json& j, const PluginResourceEvent_t& v) {
    j["data"] = v.data;
    j["uri"] = v.uri;
    j["eventType"] = v.eventType;
  }

  inline void from_json(const nlohmann::json& j, PluginResourceEvent_t& v) {
    v.data = j.at("data").get<nlohmann::json>();
    v.uri = j.at("uri").get<std::string>();
    v.eventType = j.at("eventType").get<PluginResourceEventType_t>();
  }
  inline std::string to_string(const PluginResourceEvent_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
