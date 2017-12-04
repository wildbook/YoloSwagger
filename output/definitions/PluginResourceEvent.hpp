#ifndef SWAGGER_TYPES_PluginResourceEvent_HPP
#define SWAGGER_TYPES_PluginResourceEvent_HPP
#include <json.hpp>
#include "PluginResourceEventType.hpp"
namespace leagueapi {
  // 
  struct PluginResourceEvent {
    // 
    nlohmann::json data;
    // 
    PluginResourceEventType eventType;
    // 
    std::string uri;
  };

  inline void to_json(nlohmann::json& j, const PluginResourceEvent& v) {
    j["data"] = v.data;
    j["eventType"] = v.eventType;
    j["uri"] = v.uri;
  }

  inline void from_json(const nlohmann::json& j, PluginResourceEvent& v) {
    v.data = j.at("data").get<nlohmann::json>;
    v.eventType = j.at("eventType").get<PluginResourceEventType>;
    v.uri = j.at("uri").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_PluginResourceEvent_HPP
