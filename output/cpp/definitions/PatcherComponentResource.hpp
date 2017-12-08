#pragma once
#include <json.hpp>
#include <optional>
#include "PatcherHeaderEntry.hpp"
#include "PatcherComponentResourceHistory.hpp"
#include "PatcherComponentResourceType.hpp"
namespace leagueapi {
  struct PatcherComponentResource_t {
    PatcherComponentResourceHistory_t history;
    std::string id;
    std::string locale;
    bool copy_to_solution;
    PatcherComponentResourceType_t type;
    std::string remote_path;
    std::string region;
    std::string install_dir;
    bool use_tls;
    std::vector<PatcherHeaderEntry_t> headers;
    std::string hostname;
  };

  inline void to_json(nlohmann::json& j, const PatcherComponentResource_t& v) {
    j["history"] = v.history;
    j["id"] = v.id;
    j["locale"] = v.locale;
    j["copy_to_solution"] = v.copy_to_solution;
    j["type"] = v.type;
    j["remote_path"] = v.remote_path;
    j["region"] = v.region;
    j["install_dir"] = v.install_dir;
    j["use_tls"] = v.use_tls;
    j["headers"] = v.headers;
    j["hostname"] = v.hostname;
  }

  inline void from_json(const nlohmann::json& j, PatcherComponentResource_t& v) {
    v.history = j.at("history").get<PatcherComponentResourceHistory_t>();
    v.id = j.at("id").get<std::string>();
    v.locale = j.at("locale").get<std::string>();
    v.copy_to_solution = j.at("copy_to_solution").get<bool>();
    v.type = j.at("type").get<PatcherComponentResourceType_t>();
    v.remote_path = j.at("remote_path").get<std::string>();
    v.region = j.at("region").get<std::string>();
    v.install_dir = j.at("install_dir").get<std::string>();
    v.use_tls = j.at("use_tls").get<bool>();
    v.headers = j.at("headers").get<std::vector<PatcherHeaderEntry_t>>();
    v.hostname = j.at("hostname").get<std::string>();
  }
  inline std::string to_string(const PatcherComponentResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
