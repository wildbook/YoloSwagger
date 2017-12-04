#ifndef SWAGGER_TYPES_PluginDescriptionResource_HPP
#define SWAGGER_TYPES_PluginDescriptionResource_HPP
#include <json.hpp>
#include "PluginMetadataResource.hpp"
namespace leagueapi {
  // 
  struct PluginDescriptionResource {
    // 
    std::map<std::string, std::string> pluginDependencies;
    // 
    PluginMetadataResource riotMeta;
    // 
    std::string version;
    // 
    std::string name;
  };

  inline void to_json(nlohmann::json& j, const PluginDescriptionResource& v) {
    j["pluginDependencies"] = v.pluginDependencies;
    j["riotMeta"] = v.riotMeta;
    j["version"] = v.version;
    j["name"] = v.name;
  }

  inline void from_json(const nlohmann::json& j, PluginDescriptionResource& v) {
    v.pluginDependencies = j.at("pluginDependencies").get<std::map<std::string, std::string>>;
    v.riotMeta = j.at("riotMeta").get<PluginMetadataResource>;
    v.version = j.at("version").get<std::string>;
    v.name = j.at("name").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_PluginDescriptionResource_HPP
