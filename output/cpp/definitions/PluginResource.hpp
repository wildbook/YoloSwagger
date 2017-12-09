#pragma once
#include <json.hpp>
#include <optional>
#include "PluginResourceContract.hpp"
namespace leagueapi {
  struct PluginResource_t {
    std::string externalUri;
    std::string version;
    std::vector<std::string> assetBundleNames;
    std::string dynLibPath;
    std::string subtype;
    int32_t orderDynamicLibraryLoaded;
    bool isDynamicLibraryLoaded;
    bool standalone;
    std::string dynLibFileName;
    std::string app;
    std::vector<PluginResourceContract_t> dependencies;
    std::string fullName;
    std::string feature;
    std::string shortName;
    int32_t orderDynamicLibraryInited;
    bool isDynamicLibraryInited;
    std::vector<PluginResourceContract_t> implementedContracts;
    std::map<std::string, std::string> mountedAssetBundles;
    int32_t orderWADFileMounted;
    std::string supertype;
    std::string threadingModel;
    std::string pluginInfoApiSemVer;
  };

  inline void to_json(nlohmann::json& j, const PluginResource_t& v) {
    j["externalUri"] = v.externalUri;
    j["version"] = v.version;
    j["assetBundleNames"] = v.assetBundleNames;
    j["dynLibPath"] = v.dynLibPath;
    j["subtype"] = v.subtype;
    j["orderDynamicLibraryLoaded"] = v.orderDynamicLibraryLoaded;
    j["isDynamicLibraryLoaded"] = v.isDynamicLibraryLoaded;
    j["standalone"] = v.standalone;
    j["dynLibFileName"] = v.dynLibFileName;
    j["app"] = v.app;
    j["dependencies"] = v.dependencies;
    j["fullName"] = v.fullName;
    j["feature"] = v.feature;
    j["shortName"] = v.shortName;
    j["orderDynamicLibraryInited"] = v.orderDynamicLibraryInited;
    j["isDynamicLibraryInited"] = v.isDynamicLibraryInited;
    j["implementedContracts"] = v.implementedContracts;
    j["mountedAssetBundles"] = v.mountedAssetBundles;
    j["orderWADFileMounted"] = v.orderWADFileMounted;
    j["supertype"] = v.supertype;
    j["threadingModel"] = v.threadingModel;
    j["pluginInfoApiSemVer"] = v.pluginInfoApiSemVer;
  }

  inline void from_json(const nlohmann::json& j, PluginResource_t& v) {
    v.externalUri = j.at("externalUri").get<std::string>();
    v.version = j.at("version").get<std::string>();
    v.assetBundleNames = j.at("assetBundleNames").get<std::vector<std::string>>();
    v.dynLibPath = j.at("dynLibPath").get<std::string>();
    v.subtype = j.at("subtype").get<std::string>();
    v.orderDynamicLibraryLoaded = j.at("orderDynamicLibraryLoaded").get<int32_t>();
    v.isDynamicLibraryLoaded = j.at("isDynamicLibraryLoaded").get<bool>();
    v.standalone = j.at("standalone").get<bool>();
    v.dynLibFileName = j.at("dynLibFileName").get<std::string>();
    v.app = j.at("app").get<std::string>();
    v.dependencies = j.at("dependencies").get<std::vector<PluginResourceContract_t>>();
    v.fullName = j.at("fullName").get<std::string>();
    v.feature = j.at("feature").get<std::string>();
    v.shortName = j.at("shortName").get<std::string>();
    v.orderDynamicLibraryInited = j.at("orderDynamicLibraryInited").get<int32_t>();
    v.isDynamicLibraryInited = j.at("isDynamicLibraryInited").get<bool>();
    v.implementedContracts = j.at("implementedContracts").get<std::vector<PluginResourceContract_t>>();
    v.mountedAssetBundles = j.at("mountedAssetBundles").get<std::map<std::string, std::string>>();
    v.orderWADFileMounted = j.at("orderWADFileMounted").get<int32_t>();
    v.supertype = j.at("supertype").get<std::string>();
    v.threadingModel = j.at("threadingModel").get<std::string>();
    v.pluginInfoApiSemVer = j.at("pluginInfoApiSemVer").get<std::string>();
  }
  inline std::string to_string(const PluginResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
