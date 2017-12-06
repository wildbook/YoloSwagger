#pragma once
#include <json.hpp>
#include <optional>
#include "BindingFullTypeIdentifier.hpp"
namespace leagueapi {
  // Describes a member of a struct.
  struct BindingFullFieldHelp_t {
    std::string description;
    std::string name;
    uint32_t offset;
    BindingFullTypeIdentifier_t type;
    bool optional;
  };

  inline void to_json(nlohmann::json& j, const BindingFullFieldHelp_t& v) {
    j["description"] = v.description;
    j["name"] = v.name;
    j["offset"] = v.offset;
    j["type"] = v.type;
    j["optional"] = v.optional;
  }

  inline void from_json(const nlohmann::json& j, BindingFullFieldHelp_t& v) {
    v.description = j.at("description").get<std::string>();
    v.name = j.at("name").get<std::string>();
    v.offset = j.at("offset").get<uint32_t>();
    v.type = j.at("type").get<BindingFullTypeIdentifier_t>();
    v.optional = j.at("optional").get<bool>();
  }
}
