#pragma once
#include <json.hpp>
#include <optional>
#include "PluginResourceContract.hpp"
namespace leagueapi {
  struct PluginResource_t {
    std::map<std::string, std::string> mountedAssetBundles;
    std::vector<std::string> assetBundleNames;
    bool isDynamicLibraryLoaded;
    int32_t orderWADFileMounted;
    std::string threadingModel;
    int32_t orderDynamicLibraryLoaded;
    int32_t orderDynamicLibraryInited;
    std::vector<PluginResourceContract_t> dependencies;
    std::string supertype;
    std::string shortName;
    std::string fullName;
    bool isDynamicLibraryInited;
    std::string dynLibPath;
    std::string externalUri;
    std::vector<PluginResourceContract_t> implementedContracts;
    std::string pluginInfoApiSemVer;
    bool standalone;
    std::string feature;
    std::string dynLibFileName;
    std::string version;
    std::string subtype;
    std::string app;
  };

  inline void to_json(nlohmann::json& j, const PluginResource_t& v) {
    j["mountedAssetBundles"] = v.mountedAssetBundles;
    j["assetBundleNames"] = v.assetBundleNames;
    j["isDynamicLibraryLoaded"] = v.isDynamicLibraryLoaded;
    j["orderWADFileMounted"] = v.orderWADFileMounted;
    j["threadingModel"] = v.threadingModel;
    j["orderDynamicLibraryLoaded"] = v.orderDynamicLibraryLoaded;
    j["orderDynamicLibraryInited"] = v.orderDynamicLibraryInited;
    j["dependencies"] = v.dependencies;
    j["supertype"] = v.supertype;
    j["shortName"] = v.shortName;
    j["fullName"] = v.fullName;
    j["isDynamicLibraryInited"] = v.isDynamicLibraryInited;
    j["dynLibPath"] = v.dynLibPath;
    j["externalUri"] = v.externalUri;
    j["implementedContracts"] = v.implementedContracts;
    j["pluginInfoApiSemVer"] = v.pluginInfoApiSemVer;
    j["standalone"] = v.standalone;
    j["feature"] = v.feature;
    j["dynLibFileName"] = v.dynLibFileName;
    j["version"] = v.version;
    j["subtype"] = v.subtype;
    j["app"] = v.app;
  }

  inline void from_json(const nlohmann::json& j, PluginResource_t& v) {
    v.mountedAssetBundles = j.at("mountedAssetBundles").get<std::map<std::string, std::string>>();
    v.assetBundleNames = j.at("assetBundleNames").get<std::vector<std::string>>();
    v.isDynamicLibraryLoaded = j.at("isDynamicLibraryLoaded").get<bool>();
    v.orderWADFileMounted = j.at("orderWADFileMounted").get<int32_t>();
    v.threadingModel = j.at("threadingModel").get<std::string>();
    v.orderDynamicLibraryLoaded = j.at("orderDynamicLibraryLoaded").get<int32_t>();
    v.orderDynamicLibraryInited = j.at("orderDynamicLibraryInited").get<int32_t>();
    v.dependencies = j.at("dependencies").get<std::vector<PluginResourceContract_t>>();
    v.supertype = j.at("supertype").get<std::string>();
    v.shortName = j.at("shortName").get<std::string>();
    v.fullName = j.at("fullName").get<std::string>();
    v.isDynamicLibraryInited = j.at("isDynamicLibraryInited").get<bool>();
    v.dynLibPath = j.at("dynLibPath").get<std::string>();
    v.externalUri = j.at("externalUri").get<std::string>();
    v.implementedContracts = j.at("implementedContracts").get<std::vector<PluginResourceContract_t>>();
    v.pluginInfoApiSemVer = j.at("pluginInfoApiSemVer").get<std::string>();
    v.standalone = j.at("standalone").get<bool>();
    v.feature = j.at("feature").get<std::string>();
    v.dynLibFileName = j.at("dynLibFileName").get<std::string>();
    v.version = j.at("version").get<std::string>();
    v.subtype = j.at("subtype").get<std::string>();
    v.app = j.at("app").get<std::string>();
  }
  inline std::string to_string(const PluginResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
