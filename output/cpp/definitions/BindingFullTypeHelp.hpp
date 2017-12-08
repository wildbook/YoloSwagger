#pragma once
#include <json.hpp>
#include <optional>
#include "BindingFullFieldHelp.hpp"
#include "BindingFullEnumValueHelp.hpp"
namespace leagueapi {
  // Describes a struct or enum type.
  struct BindingFullTypeHelp_t {
    uint32_t size;
    std::string nameSpace;
    std::vector<std::string> tags;
    std::string description;
    std::vector<BindingFullFieldHelp_t> fields;
    std::vector<BindingFullEnumValueHelp_t> values;
    std::string name;
  };

  inline void to_json(nlohmann::json& j, const BindingFullTypeHelp_t& v) {
    j["size"] = v.size;
    j["nameSpace"] = v.nameSpace;
    j["tags"] = v.tags;
    j["description"] = v.description;
    j["fields"] = v.fields;
    j["values"] = v.values;
    j["name"] = v.name;
  }

  inline void from_json(const nlohmann::json& j, BindingFullTypeHelp_t& v) {
    v.size = j.at("size").get<uint32_t>();
    v.nameSpace = j.at("nameSpace").get<std::string>();
    v.tags = j.at("tags").get<std::vector<std::string>>();
    v.description = j.at("description").get<std::string>();
    v.fields = j.at("fields").get<std::vector<BindingFullFieldHelp_t>>();
    v.values = j.at("values").get<std::vector<BindingFullEnumValueHelp_t>>();
    v.name = j.at("name").get<std::string>();
  }
  inline std::string to_string(const BindingFullTypeHelp_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
