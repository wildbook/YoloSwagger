#pragma once
#include <json.hpp>
#include <optional>
#include "PluginThreadingModel.hpp"
namespace leagueapi {
  struct PluginMetadataResource_t {
    std::string app;
    std::map<std::string, std::string> implements;
    std::vector<std::string> globalAssetBundles;
    std::string type;
    bool hasBundledAssets;
    std::map<std::string, nlohmann::json> perLocaleAssetBundles;
    PluginThreadingModel_t threading;
    std::string feature;
    std::string subtype;
  };

  inline void to_json(nlohmann::json& j, const PluginMetadataResource_t& v) {
    j["app"] = v.app;
    j["implements"] = v.implements;
    j["globalAssetBundles"] = v.globalAssetBundles;
    j["type"] = v.type;
    j["hasBundledAssets"] = v.hasBundledAssets;
    j["perLocaleAssetBundles"] = v.perLocaleAssetBundles;
    j["threading"] = v.threading;
    j["feature"] = v.feature;
    j["subtype"] = v.subtype;
  }

  inline void from_json(const nlohmann::json& j, PluginMetadataResource_t& v) {
    v.app = j.at("app").get<std::string>();
    v.implements = j.at("implements").get<std::map<std::string, std::string>>();
    v.globalAssetBundles = j.at("globalAssetBundles").get<std::vector<std::string>>();
    v.type = j.at("type").get<std::string>();
    v.hasBundledAssets = j.at("hasBundledAssets").get<bool>();
    v.perLocaleAssetBundles = j.at("perLocaleAssetBundles").get<std::map<std::string, nlohmann::json>>();
    v.threading = j.at("threading").get<PluginThreadingModel_t>();
    v.feature = j.at("feature").get<std::string>();
    v.subtype = j.at("subtype").get<std::string>();
  }
  inline std::string to_string(const PluginMetadataResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
