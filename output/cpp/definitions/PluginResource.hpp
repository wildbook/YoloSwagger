#pragma once
#include <json.hpp>
#include <optional>
#include "PluginResourceContract.hpp"
namespace leagueapi {
  struct PluginResource_t {
    bool standalone;
    std::string dynLibFileName;
    std::string shortName;
    bool isDynamicLibraryInited;
    std::string app;
    std::string subtype;
    std::string dynLibPath;
    std::string feature;
    std::string externalUri;
    int32_t orderDynamicLibraryLoaded;
    bool isDynamicLibraryLoaded;
    std::string fullName;
    std::string supertype;
    std::vector<std::string> assetBundleNames;
    std::string version;
    std::vector<PluginResourceContract_t> implementedContracts;
    std::map<std::string, std::string> mountedAssetBundles;
    std::vector<PluginResourceContract_t> dependencies;
    std::string pluginInfoApiSemVer;
    int32_t orderWADFileMounted;
    std::string threadingModel;
    int32_t orderDynamicLibraryInited;
  };

  inline void to_json(nlohmann::json& j, const PluginResource_t& v) {
    j["standalone"] = v.standalone;
    j["dynLibFileName"] = v.dynLibFileName;
    j["shortName"] = v.shortName;
    j["isDynamicLibraryInited"] = v.isDynamicLibraryInited;
    j["app"] = v.app;
    j["subtype"] = v.subtype;
    j["dynLibPath"] = v.dynLibPath;
    j["feature"] = v.feature;
    j["externalUri"] = v.externalUri;
    j["orderDynamicLibraryLoaded"] = v.orderDynamicLibraryLoaded;
    j["isDynamicLibraryLoaded"] = v.isDynamicLibraryLoaded;
    j["fullName"] = v.fullName;
    j["supertype"] = v.supertype;
    j["assetBundleNames"] = v.assetBundleNames;
    j["version"] = v.version;
    j["implementedContracts"] = v.implementedContracts;
    j["mountedAssetBundles"] = v.mountedAssetBundles;
    j["dependencies"] = v.dependencies;
    j["pluginInfoApiSemVer"] = v.pluginInfoApiSemVer;
    j["orderWADFileMounted"] = v.orderWADFileMounted;
    j["threadingModel"] = v.threadingModel;
    j["orderDynamicLibraryInited"] = v.orderDynamicLibraryInited;
  }

  inline void from_json(const nlohmann::json& j, PluginResource_t& v) {
    v.standalone = j.at("standalone").get<bool>();
    v.dynLibFileName = j.at("dynLibFileName").get<std::string>();
    v.shortName = j.at("shortName").get<std::string>();
    v.isDynamicLibraryInited = j.at("isDynamicLibraryInited").get<bool>();
    v.app = j.at("app").get<std::string>();
    v.subtype = j.at("subtype").get<std::string>();
    v.dynLibPath = j.at("dynLibPath").get<std::string>();
    v.feature = j.at("feature").get<std::string>();
    v.externalUri = j.at("externalUri").get<std::string>();
    v.orderDynamicLibraryLoaded = j.at("orderDynamicLibraryLoaded").get<int32_t>();
    v.isDynamicLibraryLoaded = j.at("isDynamicLibraryLoaded").get<bool>();
    v.fullName = j.at("fullName").get<std::string>();
    v.supertype = j.at("supertype").get<std::string>();
    v.assetBundleNames = j.at("assetBundleNames").get<std::vector<std::string>>();
    v.version = j.at("version").get<std::string>();
    v.implementedContracts = j.at("implementedContracts").get<std::vector<PluginResourceContract_t>>();
    v.mountedAssetBundles = j.at("mountedAssetBundles").get<std::map<std::string, std::string>>();
    v.dependencies = j.at("dependencies").get<std::vector<PluginResourceContract_t>>();
    v.pluginInfoApiSemVer = j.at("pluginInfoApiSemVer").get<std::string>();
    v.orderWADFileMounted = j.at("orderWADFileMounted").get<int32_t>();
    v.threadingModel = j.at("threadingModel").get<std::string>();
    v.orderDynamicLibraryInited = j.at("orderDynamicLibraryInited").get<int32_t>();
  }
  inline std::string to_string(const PluginResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
