#pragma once
#include <json.hpp>
#include <optional>
#include "PatcherComponentResourceType.hpp"
#include "PatcherComponentResourceHistory.hpp"
#include "PatcherHeaderEntry.hpp"
namespace leagueapi {
  struct PatcherComponentResource_t {
    bool copy_to_solution;
    std::string locale;
    std::vector<PatcherHeaderEntry_t> headers;
    std::string hostname;
    PatcherComponentResourceHistory_t history;
    std::string install_dir;
    bool use_tls;
    std::string region;
    std::string id;
    PatcherComponentResourceType_t type;
    std::string remote_path;
  };

  inline void to_json(nlohmann::json& j, const PatcherComponentResource_t& v) {
    j["copy_to_solution"] = v.copy_to_solution;
    j["locale"] = v.locale;
    j["headers"] = v.headers;
    j["hostname"] = v.hostname;
    j["history"] = v.history;
    j["install_dir"] = v.install_dir;
    j["use_tls"] = v.use_tls;
    j["region"] = v.region;
    j["id"] = v.id;
    j["type"] = v.type;
    j["remote_path"] = v.remote_path;
  }

  inline void from_json(const nlohmann::json& j, PatcherComponentResource_t& v) {
    v.copy_to_solution = j.at("copy_to_solution").get<bool>();
    v.locale = j.at("locale").get<std::string>();
    v.headers = j.at("headers").get<std::vector<PatcherHeaderEntry_t>>();
    v.hostname = j.at("hostname").get<std::string>();
    v.history = j.at("history").get<PatcherComponentResourceHistory_t>();
    v.install_dir = j.at("install_dir").get<std::string>();
    v.use_tls = j.at("use_tls").get<bool>();
    v.region = j.at("region").get<std::string>();
    v.id = j.at("id").get<std::string>();
    v.type = j.at("type").get<PatcherComponentResourceType_t>();
    v.remote_path = j.at("remote_path").get<std::string>();
  }
  inline std::string to_string(const PatcherComponentResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
