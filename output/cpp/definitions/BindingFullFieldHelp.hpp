#pragma once
#include <json.hpp>
#include <optional>
#include "BindingFullTypeIdentifier.hpp"
namespace leagueapi {
  // Describes a member of a struct.
  struct BindingFullFieldHelp_t {
    std::string name;
    BindingFullTypeIdentifier_t type;
    uint32_t offset;
    std::string description;
    bool optional;
  };

  inline void to_json(nlohmann::json& j, const BindingFullFieldHelp_t& v) {
    j["name"] = v.name;
    j["type"] = v.type;
    j["offset"] = v.offset;
    j["description"] = v.description;
    j["optional"] = v.optional;
  }

  inline void from_json(const nlohmann::json& j, BindingFullFieldHelp_t& v) {
    v.name = j.at("name").get<std::string>();
    v.type = j.at("type").get<BindingFullTypeIdentifier_t>();
    v.offset = j.at("offset").get<uint32_t>();
    v.description = j.at("description").get<std::string>();
    v.optional = j.at("optional").get<bool>();
  }
  inline std::string to_string(const BindingFullFieldHelp_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
