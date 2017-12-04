#ifndef SWAGGER_TYPES_BindingFullTypeHelp_HPP
#define SWAGGER_TYPES_BindingFullTypeHelp_HPP
#include <json.hpp>
#include "BindingFullFieldHelp.hpp"
#include "BindingFullEnumValueHelp.hpp"
namespace leagueapi {
  // Describes a struct or enum type.
  struct BindingFullTypeHelp {
    // 
    std::string description;
    // 
    std::vector<std::string> tags;
    // 
    std::vector<BindingFullFieldHelp> fields;
    // 
    std::string nameSpace;
    // 
    std::string name;
    // 
    std::vector<BindingFullEnumValueHelp> values;
    // 
    uint32_t size;
  };

  inline void to_json(nlohmann::json& j, const BindingFullTypeHelp& v) {
    j["description"] = v.description;
    j["tags"] = v.tags;
    j["fields"] = v.fields;
    j["nameSpace"] = v.nameSpace;
    j["name"] = v.name;
    j["values"] = v.values;
    j["size"] = v.size;
  }

  inline void from_json(const nlohmann::json& j, BindingFullTypeHelp& v) {
    v.description = j.at("description").get<std::string>;
    v.tags = j.at("tags").get<std::vector<std::string>>;
    v.fields = j.at("fields").get<std::vector<BindingFullFieldHelp>>;
    v.nameSpace = j.at("nameSpace").get<std::string>;
    v.name = j.at("name").get<std::string>;
    v.values = j.at("values").get<std::vector<BindingFullEnumValueHelp>>;
    v.size = j.at("size").get<uint32_t>;
  }

}
#endif // SWAGGER_TYPES_BindingFullTypeHelp_HPP
