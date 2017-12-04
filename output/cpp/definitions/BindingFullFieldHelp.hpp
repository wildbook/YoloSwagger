#ifndef SWAGGER_TYPES_BindingFullFieldHelp_HPP
#define SWAGGER_TYPES_BindingFullFieldHelp_HPP
#include <json.hpp>
#include "BindingFullTypeIdentifier.hpp"
namespace leagueapi {
  // Describes a member of a struct.
  struct BindingFullFieldHelp {
    // 
    BindingFullTypeIdentifier type;
    // 
    uint32_t offset;
    // 
    bool optional;
    // 
    std::string description;
    // 
    std::string name;
  };

  inline void to_json(nlohmann::json& j, const BindingFullFieldHelp& v) {
    j["type"] = v.type;
    j["offset"] = v.offset;
    j["optional"] = v.optional;
    j["description"] = v.description;
    j["name"] = v.name;
  }

  inline void from_json(const nlohmann::json& j, BindingFullFieldHelp& v) {
    v.type = j.at("type").get<BindingFullTypeIdentifier>;
    v.offset = j.at("offset").get<uint32_t>;
    v.optional = j.at("optional").get<bool>;
    v.description = j.at("description").get<std::string>;
    v.name = j.at("name").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_BindingFullFieldHelp_HPP
