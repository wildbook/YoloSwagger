#ifndef SWAGGER_TYPES_PluginMetadataResource_HPP
#define SWAGGER_TYPES_PluginMetadataResource_HPP
#include <json.hpp>
#include "PluginThreadingModel.hpp"
namespace test {
  // 
  struct PluginMetadataResource {
'    // 
    std::string app;
    // 
    std::string feature;
    // 
    std::vector<std::string> globalAssetBundles;
    // 
    bool hasBundledAssets;
    // 
    std::map<std::string, std::string> implements;
    // 
    std::map<std::string, nlohmann::json> perLocaleAssetBundles;
    // 
    std::string subtype;
    // 
    PluginThreadingModel threading;
    // 
    std::string type;
  };

  void to_json(nlohmann::json& j, const PluginMetadataResource& v) {
    j["app"] = v.app;
    j["feature"] = v.feature;
    j["globalAssetBundles"] = v.globalAssetBundles;
    j["hasBundledAssets"] = v.hasBundledAssets;
    j["implements"] = v.implements;
    j["perLocaleAssetBundles"] = v.perLocaleAssetBundles;
    j["subtype"] = v.subtype;
    j["threading"] = v.threading;
    j["type"] = v.type;
  }

  void from_json(const nlohmann::json& j, PluginMetadataResource& v) {
    v.app = j.at("app").get<std::string>;
    v.feature = j.at("feature").get<std::string>;
    v.globalAssetBundles = j.at("globalAssetBundles").get<std::vector<std::string>>;
    v.hasBundledAssets = j.at("hasBundledAssets").get<bool>;
    v.implements = j.at("implements").get<std::map<std::string, std::string>>;
    v.perLocaleAssetBundles = j.at("perLocaleAssetBundles").get<std::map<std::string, nlohmann::json>>;
    v.subtype = j.at("subtype").get<std::string>;
    v.threading = j.at("threading").get<PluginThreadingModel>;
    v.type = j.at("type").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_PluginMetadataResource_HPP
