#pragma once
#include <json.hpp>
#include <optional>
#include "BindingFullTypeIdentifier.hpp"
namespace leagueapi {
  // Describes an event.
  struct BindingFullEventHelp_t {
    std::string nameSpace;
    std::string description;
    std::string name;
    BindingFullTypeIdentifier_t type;
    std::vector<std::string> tags;
  };

  inline void to_json(nlohmann::json& j, const BindingFullEventHelp_t& v) {
    j["nameSpace"] = v.nameSpace;
    j["description"] = v.description;
    j["name"] = v.name;
    j["type"] = v.type;
    j["tags"] = v.tags;
  }

  inline void from_json(const nlohmann::json& j, BindingFullEventHelp_t& v) {
    v.nameSpace = j.at("nameSpace").get<std::string>();
    v.description = j.at("description").get<std::string>();
    v.name = j.at("name").get<std::string>();
    v.type = j.at("type").get<BindingFullTypeIdentifier_t>();
    v.tags = j.at("tags").get<std::vector<std::string>>();
  }
}
