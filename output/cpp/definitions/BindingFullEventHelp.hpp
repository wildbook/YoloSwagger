#ifndef SWAGGER_TYPES_BindingFullEventHelp_HPP
#define SWAGGER_TYPES_BindingFullEventHelp_HPP
#include <json.hpp>
#include "BindingFullTypeIdentifier.hpp"
namespace leagueapi {
  // Describes an event.
  struct BindingFullEventHelp {
    // 
    BindingFullTypeIdentifier type;
    // 
    std::vector<std::string> tags;
    // 
    std::string nameSpace;
    // 
    std::string description;
    // 
    std::string name;
  };

  inline void to_json(nlohmann::json& j, const BindingFullEventHelp& v) {
    j["type"] = v.type;
    j["tags"] = v.tags;
    j["nameSpace"] = v.nameSpace;
    j["description"] = v.description;
    j["name"] = v.name;
  }

  inline void from_json(const nlohmann::json& j, BindingFullEventHelp& v) {
    v.type = j.at("type").get<BindingFullTypeIdentifier>;
    v.tags = j.at("tags").get<std::vector<std::string>>;
    v.nameSpace = j.at("nameSpace").get<std::string>;
    v.description = j.at("description").get<std::string>;
    v.name = j.at("name").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_BindingFullEventHelp_HPP
