#ifndef SWAGGER_TYPES_PluginResourceEvent_HPP
#define SWAGGER_TYPES_PluginResourceEvent_HPP
#include <json.hpp>
#include "PluginResourceEventType.hpp"
namespace leagueapi {
  // 
  struct PluginResourceEvent {
    // 
    PluginResourceEventType eventType;
    // 
    nlohmann::json data;
    // 
    std::string uri;
  };

  inline void to_json(nlohmann::json& j, const PluginResourceEvent& v) {
    j["eventType"] = v.eventType;
    j["data"] = v.data;
    j["uri"] = v.uri;
  }

  inline void from_json(const nlohmann::json& j, PluginResourceEvent& v) {
    v.eventType = j.at("eventType").get<PluginResourceEventType>;
    v.data = j.at("data").get<nlohmann::json>;
    v.uri = j.at("uri").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_PluginResourceEvent_HPP
