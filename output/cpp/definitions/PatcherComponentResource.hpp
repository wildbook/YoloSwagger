#pragma once
#include <json.hpp>
#include <optional>
#include "PatcherHeaderEntry.hpp"
#include "PatcherComponentResourceType.hpp"
#include "PatcherComponentResourceHistory.hpp"
namespace leagueapi {
  struct PatcherComponentResource_t {
    std::string_t install_dir;
    std::string_t locale;
    std::string_t region;
    std::string_t hostname;
    std::string_t remote_path;
    bool_t use_tls;
    std::vector<PatcherHeaderEntry_t> headers;
    bool_t copy_to_solution;
    PatcherComponentResourceType_t type;
    std::string_t id;
    PatcherComponentResourceHistory_t history;
  };

  inline void to_json(nlohmann::json& j, const PatcherComponentResource_t& v) {
    j["install_dir"] = v.install_dir;
    j["locale"] = v.locale;
    j["region"] = v.region;
    j["hostname"] = v.hostname;
    j["remote_path"] = v.remote_path;
    j["use_tls"] = v.use_tls;
    j["headers"] = v.headers;
    j["copy_to_solution"] = v.copy_to_solution;
    j["type"] = v.type;
    j["id"] = v.id;
    j["history"] = v.history;
  }

  inline void from_json(const nlohmann::json& j, PatcherComponentResource_t& v) {
    v.install_dir = j.at("install_dir").get<std::string_t>();
    v.locale = j.at("locale").get<std::string_t>();
    v.region = j.at("region").get<std::string_t>();
    v.hostname = j.at("hostname").get<std::string_t>();
    v.remote_path = j.at("remote_path").get<std::string_t>();
    v.use_tls = j.at("use_tls").get<bool_t>();
    v.headers = j.at("headers").get<std::vector<PatcherHeaderEntry_t>>();
    v.copy_to_solution = j.at("copy_to_solution").get<bool_t>();
    v.type = j.at("type").get<PatcherComponentResourceType_t>();
    v.id = j.at("id").get<std::string_t>();
    v.history = j.at("history").get<PatcherComponentResourceHistory_t>();
  }
  inline std::string to_string(const PatcherComponentResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
