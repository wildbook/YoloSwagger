#pragma once
#include <json.hpp>
#include <optional>
#include "PluginThreadingModel.hpp"
namespace leagueapi {
  struct PluginMetadataResource_t {
    bool hasBundledAssets;
    std::map<std::string, std::string> implements;
    std::map<std::string, nlohmann::json> perLocaleAssetBundles;
    std::string app;
    PluginThreadingModel_t threading;
    std::string subtype;
    std::string feature;
    std::vector<std::string> globalAssetBundles;
    std::string type;
  };

  inline void to_json(nlohmann::json& j, const PluginMetadataResource_t& v) {
    j["hasBundledAssets"] = v.hasBundledAssets;
    j["implements"] = v.implements;
    j["perLocaleAssetBundles"] = v.perLocaleAssetBundles;
    j["app"] = v.app;
    j["threading"] = v.threading;
    j["subtype"] = v.subtype;
    j["feature"] = v.feature;
    j["globalAssetBundles"] = v.globalAssetBundles;
    j["type"] = v.type;
  }

  inline void from_json(const nlohmann::json& j, PluginMetadataResource_t& v) {
    v.hasBundledAssets = j.at("hasBundledAssets").get<bool>();
    v.implements = j.at("implements").get<std::map<std::string, std::string>>();
    v.perLocaleAssetBundles = j.at("perLocaleAssetBundles").get<std::map<std::string, nlohmann::json>>();
    v.app = j.at("app").get<std::string>();
    v.threading = j.at("threading").get<PluginThreadingModel_t>();
    v.subtype = j.at("subtype").get<std::string>();
    v.feature = j.at("feature").get<std::string>();
    v.globalAssetBundles = j.at("globalAssetBundles").get<std::vector<std::string>>();
    v.type = j.at("type").get<std::string>();
  }
  inline std::string to_string(const PluginMetadataResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
