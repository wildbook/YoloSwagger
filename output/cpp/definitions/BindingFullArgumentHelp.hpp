#pragma once
#include <json.hpp>
#include <optional>
#include "BindingFullTypeIdentifier.hpp"
namespace leagueapi {
  // Describes a function parameter.
  struct BindingFullArgumentHelp_t {
    std::string description;
    BindingFullTypeIdentifier_t type;
    std::string name;
    bool optional;
  };

  inline void to_json(nlohmann::json& j, const BindingFullArgumentHelp_t& v) {
    j["description"] = v.description;
    j["type"] = v.type;
    j["name"] = v.name;
    j["optional"] = v.optional;
  }

  inline void from_json(const nlohmann::json& j, BindingFullArgumentHelp_t& v) {
    v.description = j.at("description").get<std::string>();
    v.type = j.at("type").get<BindingFullTypeIdentifier_t>();
    v.name = j.at("name").get<std::string>();
    v.optional = j.at("optional").get<bool>();
  }
  inline std::string to_string(const BindingFullArgumentHelp_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
