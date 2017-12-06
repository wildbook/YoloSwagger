#pragma once
#include <json.hpp>
#include <optional>
#include "PatcherComponentResourceHistory.hpp"
#include "PatcherHeaderEntry.hpp"
#include "PatcherComponentResourceType.hpp"
namespace leagueapi {
  struct PatcherComponentResource_t {
    bool copy_to_solution;
    std::vector<PatcherHeaderEntry_t> headers;
    PatcherComponentResourceHistory_t history;
    std::string hostname;
    std::string id;
    std::string install_dir;
    std::string locale;
    std::string region;
    std::string remote_path;
    PatcherComponentResourceType_t type;
    bool use_tls;
  };

  inline void to_json(nlohmann::json& j, const PatcherComponentResource_t& v) {
    j["copy_to_solution"] = v.copy_to_solution;
    j["headers"] = v.headers;
    j["history"] = v.history;
    j["hostname"] = v.hostname;
    j["id"] = v.id;
    j["install_dir"] = v.install_dir;
    j["locale"] = v.locale;
    j["region"] = v.region;
    j["remote_path"] = v.remote_path;
    j["type"] = v.type;
    j["use_tls"] = v.use_tls;
  }

  inline void from_json(const nlohmann::json& j, PatcherComponentResource_t& v) {
    v.copy_to_solution = j.at("copy_to_solution").get<bool>();
    v.headers = j.at("headers").get<std::vector<PatcherHeaderEntry_t>>();
    v.history = j.at("history").get<PatcherComponentResourceHistory_t>();
    v.hostname = j.at("hostname").get<std::string>();
    v.id = j.at("id").get<std::string>();
    v.install_dir = j.at("install_dir").get<std::string>();
    v.locale = j.at("locale").get<std::string>();
    v.region = j.at("region").get<std::string>();
    v.remote_path = j.at("remote_path").get<std::string>();
    v.type = j.at("type").get<PatcherComponentResourceType_t>();
    v.use_tls = j.at("use_tls").get<bool>();
  }
}
