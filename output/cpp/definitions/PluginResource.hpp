#pragma once
#include <json.hpp>
#include <optional>
#include "PluginResourceContract.hpp"
namespace leagueapi {
  struct PluginResource_t {
    std::string app;
    std::vector<std::string> assetBundleNames;
    std::vector<PluginResourceContract_t> dependencies;
    std::string dynLibFileName;
    std::string dynLibPath;
    std::string externalUri;
    std::string feature;
    std::string fullName;
    std::vector<PluginResourceContract_t> implementedContracts;
    bool isDynamicLibraryInited;
    bool isDynamicLibraryLoaded;
    std::map<std::string, std::string> mountedAssetBundles;
    int32_t orderDynamicLibraryInited;
    int32_t orderDynamicLibraryLoaded;
    int32_t orderWADFileMounted;
    std::string pluginInfoApiSemVer;
    std::string shortName;
    bool standalone;
    std::string subtype;
    std::string supertype;
    std::string threadingModel;
    std::string version;
  };

  inline void to_json(nlohmann::json& j, const PluginResource_t& v) {
    j["app"] = v.app;
    j["assetBundleNames"] = v.assetBundleNames;
    j["dependencies"] = v.dependencies;
    j["dynLibFileName"] = v.dynLibFileName;
    j["dynLibPath"] = v.dynLibPath;
    j["externalUri"] = v.externalUri;
    j["feature"] = v.feature;
    j["fullName"] = v.fullName;
    j["implementedContracts"] = v.implementedContracts;
    j["isDynamicLibraryInited"] = v.isDynamicLibraryInited;
    j["isDynamicLibraryLoaded"] = v.isDynamicLibraryLoaded;
    j["mountedAssetBundles"] = v.mountedAssetBundles;
    j["orderDynamicLibraryInited"] = v.orderDynamicLibraryInited;
    j["orderDynamicLibraryLoaded"] = v.orderDynamicLibraryLoaded;
    j["orderWADFileMounted"] = v.orderWADFileMounted;
    j["pluginInfoApiSemVer"] = v.pluginInfoApiSemVer;
    j["shortName"] = v.shortName;
    j["standalone"] = v.standalone;
    j["subtype"] = v.subtype;
    j["supertype"] = v.supertype;
    j["threadingModel"] = v.threadingModel;
    j["version"] = v.version;
  }

  inline void from_json(const nlohmann::json& j, PluginResource_t& v) {
    v.app = j.at("app").get<std::string>();
    v.assetBundleNames = j.at("assetBundleNames").get<std::vector<std::string>>();
    v.dependencies = j.at("dependencies").get<std::vector<PluginResourceContract_t>>();
    v.dynLibFileName = j.at("dynLibFileName").get<std::string>();
    v.dynLibPath = j.at("dynLibPath").get<std::string>();
    v.externalUri = j.at("externalUri").get<std::string>();
    v.feature = j.at("feature").get<std::string>();
    v.fullName = j.at("fullName").get<std::string>();
    v.implementedContracts = j.at("implementedContracts").get<std::vector<PluginResourceContract_t>>();
    v.isDynamicLibraryInited = j.at("isDynamicLibraryInited").get<bool>();
    v.isDynamicLibraryLoaded = j.at("isDynamicLibraryLoaded").get<bool>();
    v.mountedAssetBundles = j.at("mountedAssetBundles").get<std::map<std::string, std::string>>();
    v.orderDynamicLibraryInited = j.at("orderDynamicLibraryInited").get<int32_t>();
    v.orderDynamicLibraryLoaded = j.at("orderDynamicLibraryLoaded").get<int32_t>();
    v.orderWADFileMounted = j.at("orderWADFileMounted").get<int32_t>();
    v.pluginInfoApiSemVer = j.at("pluginInfoApiSemVer").get<std::string>();
    v.shortName = j.at("shortName").get<std::string>();
    v.standalone = j.at("standalone").get<bool>();
    v.subtype = j.at("subtype").get<std::string>();
    v.supertype = j.at("supertype").get<std::string>();
    v.threadingModel = j.at("threadingModel").get<std::string>();
    v.version = j.at("version").get<std::string>();
  }
}
