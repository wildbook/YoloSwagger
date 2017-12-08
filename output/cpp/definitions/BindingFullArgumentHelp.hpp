#pragma once
#include <json.hpp>
#include <optional>
#include "BindingFullTypeIdentifier.hpp"
namespace leagueapi {
  // Describes a function parameter.
  struct BindingFullArgumentHelp_t {
    bool optional;
    std::string description;
    std::string name;
    BindingFullTypeIdentifier_t type;
  };

  inline void to_json(nlohmann::json& j, const BindingFullArgumentHelp_t& v) {
    j["optional"] = v.optional;
    j["description"] = v.description;
    j["name"] = v.name;
    j["type"] = v.type;
  }

  inline void from_json(const nlohmann::json& j, BindingFullArgumentHelp_t& v) {
    v.optional = j.at("optional").get<bool>();
    v.description = j.at("description").get<std::string>();
    v.name = j.at("name").get<std::string>();
    v.type = j.at("type").get<BindingFullTypeIdentifier_t>();
  }
  inline std::string to_string(const BindingFullArgumentHelp_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
