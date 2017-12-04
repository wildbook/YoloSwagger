#ifndef SWAGGER_TYPES_BindingFullArgumentHelp_HPP
#define SWAGGER_TYPES_BindingFullArgumentHelp_HPP
#include <json.hpp>
#include "BindingFullTypeIdentifier.hpp"
namespace leagueapi {
  // Describes a function parameter.
  struct BindingFullArgumentHelp {
    // 
    std::string description;
    // 
    std::string name;
    // 
    bool optional;
    // 
    BindingFullTypeIdentifier type;
  };

  void to_json(nlohmann::json& j, const BindingFullArgumentHelp& v) {
    j["description"] = v.description;
    j["name"] = v.name;
    j["optional"] = v.optional;
    j["type"] = v.type;
  }

  void from_json(const nlohmann::json& j, BindingFullArgumentHelp& v) {
    v.description = j.at("description").get<std::string>;
    v.name = j.at("name").get<std::string>;
    v.optional = j.at("optional").get<bool>;
    v.type = j.at("type").get<BindingFullTypeIdentifier>;
  }

}
#endif // SWAGGER_TYPES_BindingFullArgumentHelp_HPP
