#pragma once
#include <json.hpp>
#include <optional>
#include "BindingFullFieldHelp.hpp"
#include "BindingFullEnumValueHelp.hpp"
namespace leagueapi {
  // Describes a struct or enum type.
  struct BindingFullTypeHelp_t {
    std::string description;
    std::vector<BindingFullFieldHelp_t> fields;
    std::string name;
    std::string nameSpace;
    uint32_t size;
    std::vector<std::string> tags;
    std::vector<BindingFullEnumValueHelp_t> values;
  };

  inline void to_json(nlohmann::json& j, const BindingFullTypeHelp_t& v) {
    j["description"] = v.description;
    j["fields"] = v.fields;
    j["name"] = v.name;
    j["nameSpace"] = v.nameSpace;
    j["size"] = v.size;
    j["tags"] = v.tags;
    j["values"] = v.values;
  }

  inline void from_json(const nlohmann::json& j, BindingFullTypeHelp_t& v) {
    v.description = j.at("description").get<std::string>();
    v.fields = j.at("fields").get<std::vector<BindingFullFieldHelp_t>>();
    v.name = j.at("name").get<std::string>();
    v.nameSpace = j.at("nameSpace").get<std::string>();
    v.size = j.at("size").get<uint32_t>();
    v.tags = j.at("tags").get<std::vector<std::string>>();
    v.values = j.at("values").get<std::vector<BindingFullEnumValueHelp_t>>();
  }
}
