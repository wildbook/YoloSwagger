#pragma once
#include <json.hpp>
#include <optional>
#include "BindingFullFieldHelp.hpp"
#include "BindingFullEnumValueHelp.hpp"
namespace leagueapi {
  // Describes a struct or enum type.
  struct BindingFullTypeHelp_t {
    std::string description;
    std::string name;
    std::vector<std::string> tags;
    std::vector<BindingFullFieldHelp_t> fields;
    uint32_t size;
    std::vector<BindingFullEnumValueHelp_t> values;
    std::string nameSpace;
  };

  inline void to_json(nlohmann::json& j, const BindingFullTypeHelp_t& v) {
    j["description"] = v.description;
    j["name"] = v.name;
    j["tags"] = v.tags;
    j["fields"] = v.fields;
    j["size"] = v.size;
    j["values"] = v.values;
    j["nameSpace"] = v.nameSpace;
  }

  inline void from_json(const nlohmann::json& j, BindingFullTypeHelp_t& v) {
    v.description = j.at("description").get<std::string>();
    v.name = j.at("name").get<std::string>();
    v.tags = j.at("tags").get<std::vector<std::string>>();
    v.fields = j.at("fields").get<std::vector<BindingFullFieldHelp_t>>();
    v.size = j.at("size").get<uint32_t>();
    v.values = j.at("values").get<std::vector<BindingFullEnumValueHelp_t>>();
    v.nameSpace = j.at("nameSpace").get<std::string>();
  }
  inline std::string to_string(const BindingFullTypeHelp_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
