#pragma once
#include <json.hpp>
#include <optional>
#include "BindingFullFieldHelp.hpp"
#include "BindingFullEnumValueHelp.hpp"
namespace leagueapi {
  // Describes a struct or enum type.
  struct BindingFullTypeHelp_t {
    std::string_t description;
    std::vector<std::string> tags;
    std::vector<BindingFullFieldHelp_t> fields;
    std::string_t nameSpace;
    std::string_t name;
    std::vector<BindingFullEnumValueHelp_t> values;
    uint32_t_t size;
  };

  inline void to_json(nlohmann::json& j, const BindingFullTypeHelp_t& v) {
    j["description"] = v.description;
    j["tags"] = v.tags;
    j["fields"] = v.fields;
    j["nameSpace"] = v.nameSpace;
    j["name"] = v.name;
    j["values"] = v.values;
    j["size"] = v.size;
  }

  inline void from_json(const nlohmann::json& j, BindingFullTypeHelp_t& v) {
    v.description = j.at("description").get<std::string_t>();
    v.tags = j.at("tags").get<std::vector<std::string>>();
    v.fields = j.at("fields").get<std::vector<BindingFullFieldHelp_t>>();
    v.nameSpace = j.at("nameSpace").get<std::string_t>();
    v.name = j.at("name").get<std::string_t>();
    v.values = j.at("values").get<std::vector<BindingFullEnumValueHelp_t>>();
    v.size = j.at("size").get<uint32_t_t>();
  }
  inline std::string to_string(const BindingFullTypeHelp_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
