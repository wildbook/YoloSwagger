#pragma once
#include <json.hpp>
#include <optional>
#include "PatcherComponentResourceHistory.hpp"
#include "PatcherHeaderEntry.hpp"
#include "PatcherComponentResourceType.hpp"
namespace leagueapi {
  struct PatcherComponentResource_t {
    PatcherComponentResourceType_t type;
    PatcherComponentResourceHistory_t history;
    bool use_tls;
    std::string id;
    bool copy_to_solution;
    std::vector<PatcherHeaderEntry_t> headers;
    std::string region;
    std::string install_dir;
    std::string remote_path;
    std::string hostname;
    std::string locale;
  };

  inline void to_json(nlohmann::json& j, const PatcherComponentResource_t& v) {
    j["type"] = v.type;
    j["history"] = v.history;
    j["use_tls"] = v.use_tls;
    j["id"] = v.id;
    j["copy_to_solution"] = v.copy_to_solution;
    j["headers"] = v.headers;
    j["region"] = v.region;
    j["install_dir"] = v.install_dir;
    j["remote_path"] = v.remote_path;
    j["hostname"] = v.hostname;
    j["locale"] = v.locale;
  }

  inline void from_json(const nlohmann::json& j, PatcherComponentResource_t& v) {
    v.type = j.at("type").get<PatcherComponentResourceType_t>();
    v.history = j.at("history").get<PatcherComponentResourceHistory_t>();
    v.use_tls = j.at("use_tls").get<bool>();
    v.id = j.at("id").get<std::string>();
    v.copy_to_solution = j.at("copy_to_solution").get<bool>();
    v.headers = j.at("headers").get<std::vector<PatcherHeaderEntry_t>>();
    v.region = j.at("region").get<std::string>();
    v.install_dir = j.at("install_dir").get<std::string>();
    v.remote_path = j.at("remote_path").get<std::string>();
    v.hostname = j.at("hostname").get<std::string>();
    v.locale = j.at("locale").get<std::string>();
  }
}
