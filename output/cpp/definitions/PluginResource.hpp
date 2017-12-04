#ifndef SWAGGER_TYPES_PluginResource_HPP
#define SWAGGER_TYPES_PluginResource_HPP
#include <json.hpp>
#include "PluginResourceContract.hpp"
namespace leagueapi {
  // 
  struct PluginResource {
    // 
    int32_t orderDynamicLibraryInited;
    // 
    bool isDynamicLibraryLoaded;
    // 
    std::string app;
    // 
    std::string dynLibFileName;
    // 
    std::string supertype;
    // 
    std::string pluginInfoApiSemVer;
    // 
    bool isDynamicLibraryInited;
    // 
    std::string fullName;
    // 
    std::string feature;
    // 
    int32_t orderWADFileMounted;
    // 
    std::string version;
    // 
    std::string threadingModel;
    // 
    int32_t orderDynamicLibraryLoaded;
    // 
    std::string externalUri;
    // 
    std::vector<PluginResourceContract> implementedContracts;
    // 
    std::map<std::string, std::string> mountedAssetBundles;
    // 
    std::vector<PluginResourceContract> dependencies;
    // 
    std::string shortName;
    // 
    bool standalone;
    // 
    std::vector<std::string> assetBundleNames;
    // 
    std::string subtype;
    // 
    std::string dynLibPath;
  };

  inline void to_json(nlohmann::json& j, const PluginResource& v) {
    j["orderDynamicLibraryInited"] = v.orderDynamicLibraryInited;
    j["isDynamicLibraryLoaded"] = v.isDynamicLibraryLoaded;
    j["app"] = v.app;
    j["dynLibFileName"] = v.dynLibFileName;
    j["supertype"] = v.supertype;
    j["pluginInfoApiSemVer"] = v.pluginInfoApiSemVer;
    j["isDynamicLibraryInited"] = v.isDynamicLibraryInited;
    j["fullName"] = v.fullName;
    j["feature"] = v.feature;
    j["orderWADFileMounted"] = v.orderWADFileMounted;
    j["version"] = v.version;
    j["threadingModel"] = v.threadingModel;
    j["orderDynamicLibraryLoaded"] = v.orderDynamicLibraryLoaded;
    j["externalUri"] = v.externalUri;
    j["implementedContracts"] = v.implementedContracts;
    j["mountedAssetBundles"] = v.mountedAssetBundles;
    j["dependencies"] = v.dependencies;
    j["shortName"] = v.shortName;
    j["standalone"] = v.standalone;
    j["assetBundleNames"] = v.assetBundleNames;
    j["subtype"] = v.subtype;
    j["dynLibPath"] = v.dynLibPath;
  }

  inline void from_json(const nlohmann::json& j, PluginResource& v) {
    v.orderDynamicLibraryInited = j.at("orderDynamicLibraryInited").get<int32_t>;
    v.isDynamicLibraryLoaded = j.at("isDynamicLibraryLoaded").get<bool>;
    v.app = j.at("app").get<std::string>;
    v.dynLibFileName = j.at("dynLibFileName").get<std::string>;
    v.supertype = j.at("supertype").get<std::string>;
    v.pluginInfoApiSemVer = j.at("pluginInfoApiSemVer").get<std::string>;
    v.isDynamicLibraryInited = j.at("isDynamicLibraryInited").get<bool>;
    v.fullName = j.at("fullName").get<std::string>;
    v.feature = j.at("feature").get<std::string>;
    v.orderWADFileMounted = j.at("orderWADFileMounted").get<int32_t>;
    v.version = j.at("version").get<std::string>;
    v.threadingModel = j.at("threadingModel").get<std::string>;
    v.orderDynamicLibraryLoaded = j.at("orderDynamicLibraryLoaded").get<int32_t>;
    v.externalUri = j.at("externalUri").get<std::string>;
    v.implementedContracts = j.at("implementedContracts").get<std::vector<PluginResourceContract>>;
    v.mountedAssetBundles = j.at("mountedAssetBundles").get<std::map<std::string, std::string>>;
    v.dependencies = j.at("dependencies").get<std::vector<PluginResourceContract>>;
    v.shortName = j.at("shortName").get<std::string>;
    v.standalone = j.at("standalone").get<bool>;
    v.assetBundleNames = j.at("assetBundleNames").get<std::vector<std::string>>;
    v.subtype = j.at("subtype").get<std::string>;
    v.dynLibPath = j.at("dynLibPath").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_PluginResource_HPP
