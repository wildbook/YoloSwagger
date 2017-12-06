#pragma once
#include <json.hpp>
#include <optional>
#include "BindingFullEnumValueHelp.hpp"
#include "BindingFullFieldHelp.hpp"
namespace leagueapi {
  // Describes a struct or enum type.
  struct BindingFullTypeHelp_t {
    std::string name;
    std::vector<BindingFullEnumValueHelp_t> values;
    uint32_t size;
    std::string nameSpace;
    std::vector<BindingFullFieldHelp_t> fields;
    std::string description;
    std::vector<std::string> tags;
  };

  inline void to_json(nlohmann::json& j, const BindingFullTypeHelp_t& v) {
    j["name"] = v.name;
    j["values"] = v.values;
    j["size"] = v.size;
    j["nameSpace"] = v.nameSpace;
    j["fields"] = v.fields;
    j["description"] = v.description;
    j["tags"] = v.tags;
  }

  inline void from_json(const nlohmann::json& j, BindingFullTypeHelp_t& v) {
    v.name = j.at("name").get<std::string>();
    v.values = j.at("values").get<std::vector<BindingFullEnumValueHelp_t>>();
    v.size = j.at("size").get<uint32_t>();
    v.nameSpace = j.at("nameSpace").get<std::string>();
    v.fields = j.at("fields").get<std::vector<BindingFullFieldHelp_t>>();
    v.description = j.at("description").get<std::string>();
    v.tags = j.at("tags").get<std::vector<std::string>>();
  }
}
