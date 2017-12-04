#ifndef SWAGGER_TYPES_BindingFullEventHelp_HPP
#define SWAGGER_TYPES_BindingFullEventHelp_HPP
#include <json.hpp>
#include "BindingFullTypeIdentifier.hpp"
namespace leagueapi {
  // Describes an event.
  struct BindingFullEventHelp {
    // 
    std::string description;
    // 
    std::string name;
    // 
    std::string nameSpace;
    // 
    std::vector<std::string> tags;
    // 
    BindingFullTypeIdentifier type;
  };

  inline void to_json(nlohmann::json& j, const BindingFullEventHelp& v) {
    j["description"] = v.description;
    j["name"] = v.name;
    j["nameSpace"] = v.nameSpace;
    j["tags"] = v.tags;
    j["type"] = v.type;
  }

  inline void from_json(const nlohmann::json& j, BindingFullEventHelp& v) {
    v.description = j.at("description").get<std::string>;
    v.name = j.at("name").get<std::string>;
    v.nameSpace = j.at("nameSpace").get<std::string>;
    v.tags = j.at("tags").get<std::vector<std::string>>;
    v.type = j.at("type").get<BindingFullTypeIdentifier>;
  }

}
#endif // SWAGGER_TYPES_BindingFullEventHelp_HPP
