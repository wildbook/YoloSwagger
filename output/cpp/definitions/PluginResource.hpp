#pragma once
#include <json.hpp>
#include <optional>
#include "PluginResourceContract.hpp"
namespace leagueapi {
  struct PluginResource_t {
    int32_t_t orderDynamicLibraryInited;
    bool_t isDynamicLibraryLoaded;
    std::string_t app;
    std::string_t dynLibFileName;
    std::string_t supertype;
    std::string_t pluginInfoApiSemVer;
    bool_t isDynamicLibraryInited;
    std::string_t fullName;
    std::string_t feature;
    int32_t_t orderWADFileMounted;
    std::string_t version;
    std::string_t threadingModel;
    int32_t_t orderDynamicLibraryLoaded;
    std::string_t externalUri;
    std::vector<PluginResourceContract_t> implementedContracts;
    std::map<std::string, std::string> mountedAssetBundles;
    std::vector<PluginResourceContract_t> dependencies;
    std::string_t shortName;
    bool_t standalone;
    std::vector<std::string> assetBundleNames;
    std::string_t subtype;
    std::string_t dynLibPath;
  };

  inline void to_json(nlohmann::json& j, const PluginResource_t& v) {
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

  inline void from_json(const nlohmann::json& j, PluginResource_t& v) {
    v.orderDynamicLibraryInited = j.at("orderDynamicLibraryInited").get<int32_t_t>();
    v.isDynamicLibraryLoaded = j.at("isDynamicLibraryLoaded").get<bool_t>();
    v.app = j.at("app").get<std::string_t>();
    v.dynLibFileName = j.at("dynLibFileName").get<std::string_t>();
    v.supertype = j.at("supertype").get<std::string_t>();
    v.pluginInfoApiSemVer = j.at("pluginInfoApiSemVer").get<std::string_t>();
    v.isDynamicLibraryInited = j.at("isDynamicLibraryInited").get<bool_t>();
    v.fullName = j.at("fullName").get<std::string_t>();
    v.feature = j.at("feature").get<std::string_t>();
    v.orderWADFileMounted = j.at("orderWADFileMounted").get<int32_t_t>();
    v.version = j.at("version").get<std::string_t>();
    v.threadingModel = j.at("threadingModel").get<std::string_t>();
    v.orderDynamicLibraryLoaded = j.at("orderDynamicLibraryLoaded").get<int32_t_t>();
    v.externalUri = j.at("externalUri").get<std::string_t>();
    v.implementedContracts = j.at("implementedContracts").get<std::vector<PluginResourceContract_t>>();
    v.mountedAssetBundles = j.at("mountedAssetBundles").get<std::map<std::string, std::string>>();
    v.dependencies = j.at("dependencies").get<std::vector<PluginResourceContract_t>>();
    v.shortName = j.at("shortName").get<std::string_t>();
    v.standalone = j.at("standalone").get<bool_t>();
    v.assetBundleNames = j.at("assetBundleNames").get<std::vector<std::string>>();
    v.subtype = j.at("subtype").get<std::string_t>();
    v.dynLibPath = j.at("dynLibPath").get<std::string_t>();
  }
  inline std::string to_string(const PluginResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
