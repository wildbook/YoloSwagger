#ifndef SWAGGER_TYPES_BindingFullFieldHelp_HPP
#define SWAGGER_TYPES_BindingFullFieldHelp_HPP
#include <json.hpp>
#include "BindingFullTypeIdentifier.hpp"
namespace leagueapi {
  // Describes a member of a struct.
  struct BindingFullFieldHelp {
    // 
    std::string description;
    // 
    std::string name;
    // 
    uint32_t offset;
    // 
    bool optional;
    // 
    BindingFullTypeIdentifier type;
  };

  void to_json(nlohmann::json& j, const BindingFullFieldHelp& v) {
    j["description"] = v.description;
    j["name"] = v.name;
    j["offset"] = v.offset;
    j["optional"] = v.optional;
    j["type"] = v.type;
  }

  void from_json(const nlohmann::json& j, BindingFullFieldHelp& v) {
    v.description = j.at("description").get<std::string>;
    v.name = j.at("name").get<std::string>;
    v.offset = j.at("offset").get<uint32_t>;
    v.optional = j.at("optional").get<bool>;
    v.type = j.at("type").get<BindingFullTypeIdentifier>;
  }

}
#endif // SWAGGER_TYPES_BindingFullFieldHelp_HPP
