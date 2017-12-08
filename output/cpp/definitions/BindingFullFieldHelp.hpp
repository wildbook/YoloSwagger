#pragma once
#include <json.hpp>
#include <optional>
#include "BindingFullTypeIdentifier.hpp"
namespace leagueapi {
  // Describes a member of a struct.
  struct BindingFullFieldHelp_t {
    bool optional;
    std::string description;
    std::string name;
    BindingFullTypeIdentifier_t type;
    uint32_t offset;
  };

  inline void to_json(nlohmann::json& j, const BindingFullFieldHelp_t& v) {
    j["optional"] = v.optional;
    j["description"] = v.description;
    j["name"] = v.name;
    j["type"] = v.type;
    j["offset"] = v.offset;
  }

  inline void from_json(const nlohmann::json& j, BindingFullFieldHelp_t& v) {
    v.optional = j.at("optional").get<bool>();
    v.description = j.at("description").get<std::string>();
    v.name = j.at("name").get<std::string>();
    v.type = j.at("type").get<BindingFullTypeIdentifier_t>();
    v.offset = j.at("offset").get<uint32_t>();
  }
  inline std::string to_string(const BindingFullFieldHelp_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
