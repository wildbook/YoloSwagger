#pragma once
#include <json.hpp>
#include <optional>
#include "PluginThreadingModel.hpp"
namespace leagueapi {
  struct PluginMetadataResource_t {
    std::map<std::string, std::string> implements;
    std::vector<std::string> globalAssetBundles;
    bool hasBundledAssets;
    std::string subtype;
    std::map<std::string, nlohmann::json> perLocaleAssetBundles;
    std::string app;
    std::string feature;
    std::string type;
    PluginThreadingModel_t threading;
  };

  inline void to_json(nlohmann::json& j, const PluginMetadataResource_t& v) {
    j["implements"] = v.implements;
    j["globalAssetBundles"] = v.globalAssetBundles;
    j["hasBundledAssets"] = v.hasBundledAssets;
    j["subtype"] = v.subtype;
    j["perLocaleAssetBundles"] = v.perLocaleAssetBundles;
    j["app"] = v.app;
    j["feature"] = v.feature;
    j["type"] = v.type;
    j["threading"] = v.threading;
  }

  inline void from_json(const nlohmann::json& j, PluginMetadataResource_t& v) {
    v.implements = j.at("implements").get<std::map<std::string, std::string>>();
    v.globalAssetBundles = j.at("globalAssetBundles").get<std::vector<std::string>>();
    v.hasBundledAssets = j.at("hasBundledAssets").get<bool>();
    v.subtype = j.at("subtype").get<std::string>();
    v.perLocaleAssetBundles = j.at("perLocaleAssetBundles").get<std::map<std::string, nlohmann::json>>();
    v.app = j.at("app").get<std::string>();
    v.feature = j.at("feature").get<std::string>();
    v.type = j.at("type").get<std::string>();
    v.threading = j.at("threading").get<PluginThreadingModel_t>();
  }
  inline std::string to_string(const PluginMetadataResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
