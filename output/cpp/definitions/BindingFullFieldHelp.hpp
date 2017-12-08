#pragma once
#include <json.hpp>
#include <optional>
#include "BindingFullTypeIdentifier.hpp"
namespace leagueapi {
  // Describes a member of a struct.
  struct BindingFullFieldHelp_t {
    BindingFullTypeIdentifier_t type;
    uint32_t offset;
    bool optional;
    std::string description;
    std::string name;
  };

  inline void to_json(nlohmann::json& j, const BindingFullFieldHelp_t& v) {
    j["type"] = v.type;
    j["offset"] = v.offset;
    j["optional"] = v.optional;
    j["description"] = v.description;
    j["name"] = v.name;
  }

  inline void from_json(const nlohmann::json& j, BindingFullFieldHelp_t& v) {
    v.type = j.at("type").get<BindingFullTypeIdentifier_t>();
    v.offset = j.at("offset").get<uint32_t>();
    v.optional = j.at("optional").get<bool>();
    v.description = j.at("description").get<std::string>();
    v.name = j.at("name").get<std::string>();
  }
  inline std::string to_string(const BindingFullFieldHelp_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
