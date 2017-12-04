#ifndef SWAGGER_TYPES_PluginDescriptionResource_HPP
#define SWAGGER_TYPES_PluginDescriptionResource_HPP
#include <json.hpp>
#include "PluginMetadataResource.hpp"
namespace test {
  // 
  struct PluginDescriptionResource {
'    // 
    std::string name;
    // 
    std::map<std::string, std::string> pluginDependencies;
    // 
    PluginMetadataResource riotMeta;
    // 
    std::string version;
  };

  void to_json(nlohmann::json& j, const PluginDescriptionResource& v) {
    j["name"] = v.name;
    j["pluginDependencies"] = v.pluginDependencies;
    j["riotMeta"] = v.riotMeta;
    j["version"] = v.version;
  }

  void from_json(const nlohmann::json& j, PluginDescriptionResource& v) {
    v.name = j.at("name").get<std::string>;
    v.pluginDependencies = j.at("pluginDependencies").get<std::map<std::string, std::string>>;
    v.riotMeta = j.at("riotMeta").get<PluginMetadataResource>;
    v.version = j.at("version").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_PluginDescriptionResource_HPP
