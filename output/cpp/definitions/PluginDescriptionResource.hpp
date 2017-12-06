#pragma once
#include <json.hpp>
#include <optional>
#include "PluginMetadataResource.hpp"
namespace leagueapi {
  struct PluginDescriptionResource_t {
    std::map<std::string, std::string> pluginDependencies;
    std::string name;
    PluginMetadataResource_t riotMeta;
    std::string version;
  };

  inline void to_json(nlohmann::json& j, const PluginDescriptionResource_t& v) {
    j["pluginDependencies"] = v.pluginDependencies;
    j["name"] = v.name;
    j["riotMeta"] = v.riotMeta;
    j["version"] = v.version;
  }

  inline void from_json(const nlohmann::json& j, PluginDescriptionResource_t& v) {
    v.pluginDependencies = j.at("pluginDependencies").get<std::map<std::string, std::string>>();
    v.name = j.at("name").get<std::string>();
    v.riotMeta = j.at("riotMeta").get<PluginMetadataResource_t>();
    v.version = j.at("version").get<std::string>();
  }
}
