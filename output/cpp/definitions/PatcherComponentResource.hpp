#pragma once
#include <json.hpp>
#include <optional>
#include "PatcherComponentResourceHistory.hpp"
#include "PatcherHeaderEntry.hpp"
#include "PatcherComponentResourceType.hpp"
namespace leagueapi {
  struct PatcherComponentResource_t {
    std::string install_dir;
    std::string region;
    std::string locale;
    std::string id;
    PatcherComponentResourceHistory_t history;
    bool copy_to_solution;
    std::string hostname;
    std::vector<PatcherHeaderEntry_t> headers;
    bool use_tls;
    std::string remote_path;
    PatcherComponentResourceType_t type;
  };

  inline void to_json(nlohmann::json& j, const PatcherComponentResource_t& v) {
    j["install_dir"] = v.install_dir;
    j["region"] = v.region;
    j["locale"] = v.locale;
    j["id"] = v.id;
    j["history"] = v.history;
    j["copy_to_solution"] = v.copy_to_solution;
    j["hostname"] = v.hostname;
    j["headers"] = v.headers;
    j["use_tls"] = v.use_tls;
    j["remote_path"] = v.remote_path;
    j["type"] = v.type;
  }

  inline void from_json(const nlohmann::json& j, PatcherComponentResource_t& v) {
    v.install_dir = j.at("install_dir").get<std::string>();
    v.region = j.at("region").get<std::string>();
    v.locale = j.at("locale").get<std::string>();
    v.id = j.at("id").get<std::string>();
    v.history = j.at("history").get<PatcherComponentResourceHistory_t>();
    v.copy_to_solution = j.at("copy_to_solution").get<bool>();
    v.hostname = j.at("hostname").get<std::string>();
    v.headers = j.at("headers").get<std::vector<PatcherHeaderEntry_t>>();
    v.use_tls = j.at("use_tls").get<bool>();
    v.remote_path = j.at("remote_path").get<std::string>();
    v.type = j.at("type").get<PatcherComponentResourceType_t>();
  }
  inline std::string to_string(const PatcherComponentResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
