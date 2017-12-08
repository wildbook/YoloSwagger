#pragma once
#include <json.hpp>
#include <optional>
#include "BindingFullTypeIdentifier.hpp"
namespace leagueapi {
  // Describes a function parameter.
  struct BindingFullArgumentHelp_t {
    BindingFullTypeIdentifier_t type;
    bool_t optional;
    std::string_t description;
    std::string_t name;
  };

  inline void to_json(nlohmann::json& j, const BindingFullArgumentHelp_t& v) {
    j["type"] = v.type;
    j["optional"] = v.optional;
    j["description"] = v.description;
    j["name"] = v.name;
  }

  inline void from_json(const nlohmann::json& j, BindingFullArgumentHelp_t& v) {
    v.type = j.at("type").get<BindingFullTypeIdentifier_t>();
    v.optional = j.at("optional").get<bool_t>();
    v.description = j.at("description").get<std::string_t>();
    v.name = j.at("name").get<std::string_t>();
  }
  inline std::string to_string(const BindingFullArgumentHelp_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
