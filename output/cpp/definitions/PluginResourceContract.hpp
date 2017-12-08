#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct PluginResourceContract_t {
    std::string version;
    std::string fullName;
  };

  inline void to_json(nlohmann::json& j, const PluginResourceContract_t& v) {
    j["version"] = v.version;
    j["fullName"] = v.fullName;
  }

  inline void from_json(const nlohmann::json& j, PluginResourceContract_t& v) {
    v.version = j.at("version").get<std::string>();
    v.fullName = j.at("fullName").get<std::string>();
  }
  inline std::string to_string(const PluginResourceContract_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
