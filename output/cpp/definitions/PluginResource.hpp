#pragma once
#include <json.hpp>
#include <optional>
#include "PluginResourceContract.hpp"
namespace leagueapi {
  struct PluginResource_t {
    int32_t orderDynamicLibraryLoaded;
    std::string fullName;
    std::map<std::string, std::string> mountedAssetBundles;
    std::vector<PluginResourceContract_t> implementedContracts;
    std::string version;
    std::string shortName;
    bool standalone;
    std::string feature;
    std::string supertype;
    std::string externalUri;
    std::string pluginInfoApiSemVer;
    std::string app;
    std::string dynLibFileName;
    std::string threadingModel;
    bool isDynamicLibraryLoaded;
    bool isDynamicLibraryInited;
    std::string dynLibPath;
    std::string subtype;
    std::vector<PluginResourceContract_t> dependencies;
    int32_t orderDynamicLibraryInited;
    int32_t orderWADFileMounted;
    std::vector<std::string> assetBundleNames;
  };

  inline void to_json(nlohmann::json& j, const PluginResource_t& v) {
    j["orderDynamicLibraryLoaded"] = v.orderDynamicLibraryLoaded;
    j["fullName"] = v.fullName;
    j["mountedAssetBundles"] = v.mountedAssetBundles;
    j["implementedContracts"] = v.implementedContracts;
    j["version"] = v.version;
    j["shortName"] = v.shortName;
    j["standalone"] = v.standalone;
    j["feature"] = v.feature;
    j["supertype"] = v.supertype;
    j["externalUri"] = v.externalUri;
    j["pluginInfoApiSemVer"] = v.pluginInfoApiSemVer;
    j["app"] = v.app;
    j["dynLibFileName"] = v.dynLibFileName;
    j["threadingModel"] = v.threadingModel;
    j["isDynamicLibraryLoaded"] = v.isDynamicLibraryLoaded;
    j["isDynamicLibraryInited"] = v.isDynamicLibraryInited;
    j["dynLibPath"] = v.dynLibPath;
    j["subtype"] = v.subtype;
    j["dependencies"] = v.dependencies;
    j["orderDynamicLibraryInited"] = v.orderDynamicLibraryInited;
    j["orderWADFileMounted"] = v.orderWADFileMounted;
    j["assetBundleNames"] = v.assetBundleNames;
  }

  inline void from_json(const nlohmann::json& j, PluginResource_t& v) {
    v.orderDynamicLibraryLoaded = j.at("orderDynamicLibraryLoaded").get<int32_t>();
    v.fullName = j.at("fullName").get<std::string>();
    v.mountedAssetBundles = j.at("mountedAssetBundles").get<std::map<std::string, std::string>>();
    v.implementedContracts = j.at("implementedContracts").get<std::vector<PluginResourceContract_t>>();
    v.version = j.at("version").get<std::string>();
    v.shortName = j.at("shortName").get<std::string>();
    v.standalone = j.at("standalone").get<bool>();
    v.feature = j.at("feature").get<std::string>();
    v.supertype = j.at("supertype").get<std::string>();
    v.externalUri = j.at("externalUri").get<std::string>();
    v.pluginInfoApiSemVer = j.at("pluginInfoApiSemVer").get<std::string>();
    v.app = j.at("app").get<std::string>();
    v.dynLibFileName = j.at("dynLibFileName").get<std::string>();
    v.threadingModel = j.at("threadingModel").get<std::string>();
    v.isDynamicLibraryLoaded = j.at("isDynamicLibraryLoaded").get<bool>();
    v.isDynamicLibraryInited = j.at("isDynamicLibraryInited").get<bool>();
    v.dynLibPath = j.at("dynLibPath").get<std::string>();
    v.subtype = j.at("subtype").get<std::string>();
    v.dependencies = j.at("dependencies").get<std::vector<PluginResourceContract_t>>();
    v.orderDynamicLibraryInited = j.at("orderDynamicLibraryInited").get<int32_t>();
    v.orderWADFileMounted = j.at("orderWADFileMounted").get<int32_t>();
    v.assetBundleNames = j.at("assetBundleNames").get<std::vector<std::string>>();
  }
}
