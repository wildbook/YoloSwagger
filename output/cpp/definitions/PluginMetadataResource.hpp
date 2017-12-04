#ifndef SWAGGER_TYPES_PluginMetadataResource_HPP
#define SWAGGER_TYPES_PluginMetadataResource_HPP
#include <json.hpp>
#include "PluginThreadingModel.hpp"
namespace leagueapi {
  // 
  struct PluginMetadataResource {
    // 
    std::map<std::string, std::string> implements;
    // 
    bool hasBundledAssets;
    // 
    std::map<std::string, nlohmann::json> perLocaleAssetBundles;
    // 
    std::string app;
    // 
    std::string feature;
    // 
    std::string subtype;
    // 
    PluginThreadingModel threading;
    // 
    std::vector<std::string> globalAssetBundles;
    // 
    std::string type;
  };

  inline void to_json(nlohmann::json& j, const PluginMetadataResource& v) {
    j["implements"] = v.implements;
    j["hasBundledAssets"] = v.hasBundledAssets;
    j["perLocaleAssetBundles"] = v.perLocaleAssetBundles;
    j["app"] = v.app;
    j["feature"] = v.feature;
    j["subtype"] = v.subtype;
    j["threading"] = v.threading;
    j["globalAssetBundles"] = v.globalAssetBundles;
    j["type"] = v.type;
  }

  inline void from_json(const nlohmann::json& j, PluginMetadataResource& v) {
    v.implements = j.at("implements").get<std::map<std::string, std::string>>;
    v.hasBundledAssets = j.at("hasBundledAssets").get<bool>;
    v.perLocaleAssetBundles = j.at("perLocaleAssetBundles").get<std::map<std::string, nlohmann::json>>;
    v.app = j.at("app").get<std::string>;
    v.feature = j.at("feature").get<std::string>;
    v.subtype = j.at("subtype").get<std::string>;
    v.threading = j.at("threading").get<PluginThreadingModel>;
    v.globalAssetBundles = j.at("globalAssetBundles").get<std::vector<std::string>>;
    v.type = j.at("type").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_PluginMetadataResource_HPP
