#pragma once
#include <json.hpp>
#include <optional>
#include "PluginResourceEventType.hpp"
namespace leagueapi {
  struct PluginResourceEvent_t {
    PluginResourceEventType_t eventType;
    std::string uri;
    nlohmann::json data;
  };

  inline void to_json(nlohmann::json& j, const PluginResourceEvent_t& v) {
    j["eventType"] = v.eventType;
    j["uri"] = v.uri;
    j["data"] = v.data;
  }

  inline void from_json(const nlohmann::json& j, PluginResourceEvent_t& v) {
    v.eventType = j.at("eventType").get<PluginResourceEventType_t>();
    v.uri = j.at("uri").get<std::string>();
    v.data = j.at("data").get<nlohmann::json>();
  }
  inline std::string to_string(const PluginResourceEvent_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
