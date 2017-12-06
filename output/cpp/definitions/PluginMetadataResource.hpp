#pragma once
#include <json.hpp>
#include <optional>
#include "PluginThreadingModel.hpp"
namespace leagueapi {
  struct PluginMetadataResource_t {
    PluginThreadingModel_t threading;
    std::string app;
    std::string feature;
    std::vector<std::string> globalAssetBundles;
    std::string type;
    std::map<std::string, std::string> implements;
    std::map<std::string, nlohmann::json> perLocaleAssetBundles;
    std::string subtype;
    bool hasBundledAssets;
  };

  inline void to_json(nlohmann::json& j, const PluginMetadataResource_t& v) {
    j["threading"] = v.threading;
    j["app"] = v.app;
    j["feature"] = v.feature;
    j["globalAssetBundles"] = v.globalAssetBundles;
    j["type"] = v.type;
    j["implements"] = v.implements;
    j["perLocaleAssetBundles"] = v.perLocaleAssetBundles;
    j["subtype"] = v.subtype;
    j["hasBundledAssets"] = v.hasBundledAssets;
  }

  inline void from_json(const nlohmann::json& j, PluginMetadataResource_t& v) {
    v.threading = j.at("threading").get<PluginThreadingModel_t>();
    v.app = j.at("app").get<std::string>();
    v.feature = j.at("feature").get<std::string>();
    v.globalAssetBundles = j.at("globalAssetBundles").get<std::vector<std::string>>();
    v.type = j.at("type").get<std::string>();
    v.implements = j.at("implements").get<std::map<std::string, std::string>>();
    v.perLocaleAssetBundles = j.at("perLocaleAssetBundles").get<std::map<std::string, nlohmann::json>>();
    v.subtype = j.at("subtype").get<std::string>();
    v.hasBundledAssets = j.at("hasBundledAssets").get<bool>();
  }
}
