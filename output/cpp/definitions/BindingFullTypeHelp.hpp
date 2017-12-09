#pragma once
#include <json.hpp>
#include <optional>
#include "BindingFullEnumValueHelp.hpp"
#include "BindingFullFieldHelp.hpp"
namespace leagueapi {
  // Describes a struct or enum type.
  struct BindingFullTypeHelp_t {
    std::vector<BindingFullFieldHelp_t> fields;
    std::string description;
    uint32_t size;
    std::vector<std::string> tags;
    std::string name;
    std::string nameSpace;
    std::vector<BindingFullEnumValueHelp_t> values;
  };

  inline void to_json(nlohmann::json& j, const BindingFullTypeHelp_t& v) {
    j["fields"] = v.fields;
    j["description"] = v.description;
    j["size"] = v.size;
    j["tags"] = v.tags;
    j["name"] = v.name;
    j["nameSpace"] = v.nameSpace;
    j["values"] = v.values;
  }

  inline void from_json(const nlohmann::json& j, BindingFullTypeHelp_t& v) {
    v.fields = j.at("fields").get<std::vector<BindingFullFieldHelp_t>>();
    v.description = j.at("description").get<std::string>();
    v.size = j.at("size").get<uint32_t>();
    v.tags = j.at("tags").get<std::vector<std::string>>();
    v.name = j.at("name").get<std::string>();
    v.nameSpace = j.at("nameSpace").get<std::string>();
    v.values = j.at("values").get<std::vector<BindingFullEnumValueHelp_t>>();
  }
  inline std::string to_string(const BindingFullTypeHelp_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
