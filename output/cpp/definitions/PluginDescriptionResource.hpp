#pragma once
#include <json.hpp>
#include <optional>
#include "PluginMetadataResource.hpp"
namespace leagueapi {
  struct PluginDescriptionResource_t {
    std::string name;
    std::string version;
    std::map<std::string, std::string> pluginDependencies;
    PluginMetadataResource_t riotMeta;
  };

  inline void to_json(nlohmann::json& j, const PluginDescriptionResource_t& v) {
    j["name"] = v.name;
    j["version"] = v.version;
    j["pluginDependencies"] = v.pluginDependencies;
    j["riotMeta"] = v.riotMeta;
  }

  inline void from_json(const nlohmann::json& j, PluginDescriptionResource_t& v) {
    v.name = j.at("name").get<std::string>();
    v.version = j.at("version").get<std::string>();
    v.pluginDependencies = j.at("pluginDependencies").get<std::map<std::string, std::string>>();
    v.riotMeta = j.at("riotMeta").get<PluginMetadataResource_t>();
  }
  inline std::string to_string(const PluginDescriptionResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
