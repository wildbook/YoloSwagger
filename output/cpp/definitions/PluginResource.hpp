#pragma once
#include <json.hpp>
#include <optional>
#include "PluginResourceContract.hpp"
namespace leagueapi {
  struct PluginResource_t {
    std::vector<std::string> assetBundleNames;
    std::string dynLibFileName;
    int32_t orderWADFileMounted;
    std::vector<PluginResourceContract_t> dependencies;
    std::string feature;
    std::string app;
    std::map<std::string, std::string> mountedAssetBundles;
    std::string pluginInfoApiSemVer;
    std::string dynLibPath;
    std::string subtype;
    int32_t orderDynamicLibraryLoaded;
    std::string shortName;
    std::vector<PluginResourceContract_t> implementedContracts;
    int32_t orderDynamicLibraryInited;
    std::string fullName;
    bool standalone;
    std::string externalUri;
    std::string version;
    std::string supertype;
    bool isDynamicLibraryLoaded;
    std::string threadingModel;
    bool isDynamicLibraryInited;
  };

  inline void to_json(nlohmann::json& j, const PluginResource_t& v) {
    j["assetBundleNames"] = v.assetBundleNames;
    j["dynLibFileName"] = v.dynLibFileName;
    j["orderWADFileMounted"] = v.orderWADFileMounted;
    j["dependencies"] = v.dependencies;
    j["feature"] = v.feature;
    j["app"] = v.app;
    j["mountedAssetBundles"] = v.mountedAssetBundles;
    j["pluginInfoApiSemVer"] = v.pluginInfoApiSemVer;
    j["dynLibPath"] = v.dynLibPath;
    j["subtype"] = v.subtype;
    j["orderDynamicLibraryLoaded"] = v.orderDynamicLibraryLoaded;
    j["shortName"] = v.shortName;
    j["implementedContracts"] = v.implementedContracts;
    j["orderDynamicLibraryInited"] = v.orderDynamicLibraryInited;
    j["fullName"] = v.fullName;
    j["standalone"] = v.standalone;
    j["externalUri"] = v.externalUri;
    j["version"] = v.version;
    j["supertype"] = v.supertype;
    j["isDynamicLibraryLoaded"] = v.isDynamicLibraryLoaded;
    j["threadingModel"] = v.threadingModel;
    j["isDynamicLibraryInited"] = v.isDynamicLibraryInited;
  }

  inline void from_json(const nlohmann::json& j, PluginResource_t& v) {
    v.assetBundleNames = j.at("assetBundleNames").get<std::vector<std::string>>();
    v.dynLibFileName = j.at("dynLibFileName").get<std::string>();
    v.orderWADFileMounted = j.at("orderWADFileMounted").get<int32_t>();
    v.dependencies = j.at("dependencies").get<std::vector<PluginResourceContract_t>>();
    v.feature = j.at("feature").get<std::string>();
    v.app = j.at("app").get<std::string>();
    v.mountedAssetBundles = j.at("mountedAssetBundles").get<std::map<std::string, std::string>>();
    v.pluginInfoApiSemVer = j.at("pluginInfoApiSemVer").get<std::string>();
    v.dynLibPath = j.at("dynLibPath").get<std::string>();
    v.subtype = j.at("subtype").get<std::string>();
    v.orderDynamicLibraryLoaded = j.at("orderDynamicLibraryLoaded").get<int32_t>();
    v.shortName = j.at("shortName").get<std::string>();
    v.implementedContracts = j.at("implementedContracts").get<std::vector<PluginResourceContract_t>>();
    v.orderDynamicLibraryInited = j.at("orderDynamicLibraryInited").get<int32_t>();
    v.fullName = j.at("fullName").get<std::string>();
    v.standalone = j.at("standalone").get<bool>();
    v.externalUri = j.at("externalUri").get<std::string>();
    v.version = j.at("version").get<std::string>();
    v.supertype = j.at("supertype").get<std::string>();
    v.isDynamicLibraryLoaded = j.at("isDynamicLibraryLoaded").get<bool>();
    v.threadingModel = j.at("threadingModel").get<std::string>();
    v.isDynamicLibraryInited = j.at("isDynamicLibraryInited").get<bool>();
  }
  inline std::string to_string(const PluginResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
