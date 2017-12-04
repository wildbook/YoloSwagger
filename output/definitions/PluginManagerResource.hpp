#ifndef SWAGGER_TYPES_PluginManagerResource_HPP
#define SWAGGER_TYPES_PluginManagerResource_HPP
#include <json.hpp>
#include "PluginManagerState.hpp"
namespace test {
  // 
  struct PluginManagerResource {
'    // 
    PluginManagerState state;
  };

  void to_json(nlohmann::json& j, const PluginManagerResource& v) {
    j["state"] = v.state;
  }

  void from_json(const nlohmann::json& j, PluginManagerResource& v) {
    v.state = j.at("state").get<PluginManagerState>;
  }

}
#endif // SWAGGER_TYPES_PluginManagerResource_HPP
