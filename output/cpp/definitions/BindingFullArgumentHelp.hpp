#ifndef SWAGGER_TYPES_BindingFullArgumentHelp_HPP
#define SWAGGER_TYPES_BindingFullArgumentHelp_HPP
#include <json.hpp>
#include "BindingFullTypeIdentifier.hpp"
namespace leagueapi {
  // Describes a function parameter.
  struct BindingFullArgumentHelp {
    // 
    BindingFullTypeIdentifier type;
    // 
    bool optional;
    // 
    std::string description;
    // 
    std::string name;
  };

  inline void to_json(nlohmann::json& j, const BindingFullArgumentHelp& v) {
    j["type"] = v.type;
    j["optional"] = v.optional;
    j["description"] = v.description;
    j["name"] = v.name;
  }

  inline void from_json(const nlohmann::json& j, BindingFullArgumentHelp& v) {
    v.type = j.at("type").get<BindingFullTypeIdentifier>;
    v.optional = j.at("optional").get<bool>;
    v.description = j.at("description").get<std::string>;
    v.name = j.at("name").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_BindingFullArgumentHelp_HPP
