#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct PluginResourceContract_t {
    std::string_t fullName;
    std::string_t version;
  };

  inline void to_json(nlohmann::json& j, const PluginResourceContract_t& v) {
    j["fullName"] = v.fullName;
    j["version"] = v.version;
  }

  inline void from_json(const nlohmann::json& j, PluginResourceContract_t& v) {
    v.fullName = j.at("fullName").get<std::string_t>();
    v.version = j.at("version").get<std::string_t>();
  }
  inline std::string to_string(const PluginResourceContract_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
