#pragma once
#include <json.hpp>
#include <optional>
#include "BindingFullTypeIdentifier.hpp"
namespace leagueapi {
  // Describes an event.
  struct BindingFullEventHelp_t {
    std::vector<std::string> tags;
    std::string description;
    std::string name;
    BindingFullTypeIdentifier_t type;
    std::string nameSpace;
  };

  inline void to_json(nlohmann::json& j, const BindingFullEventHelp_t& v) {
    j["tags"] = v.tags;
    j["description"] = v.description;
    j["name"] = v.name;
    j["type"] = v.type;
    j["nameSpace"] = v.nameSpace;
  }

  inline void from_json(const nlohmann::json& j, BindingFullEventHelp_t& v) {
    v.tags = j.at("tags").get<std::vector<std::string>>();
    v.description = j.at("description").get<std::string>();
    v.name = j.at("name").get<std::string>();
    v.type = j.at("type").get<BindingFullTypeIdentifier_t>();
    v.nameSpace = j.at("nameSpace").get<std::string>();
  }
  inline std::string to_string(const BindingFullEventHelp_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
