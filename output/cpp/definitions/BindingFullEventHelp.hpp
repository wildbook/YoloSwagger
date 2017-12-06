#pragma once
#include <json.hpp>
#include <optional>
#include "BindingFullTypeIdentifier.hpp"
namespace leagueapi {
  // Describes an event.
  struct BindingFullEventHelp_t {
    std::string description;
    std::string name;
    std::string nameSpace;
    std::vector<std::string> tags;
    BindingFullTypeIdentifier_t type;
  };

  inline void to_json(nlohmann::json& j, const BindingFullEventHelp_t& v) {
    j["description"] = v.description;
    j["name"] = v.name;
    j["nameSpace"] = v.nameSpace;
    j["tags"] = v.tags;
    j["type"] = v.type;
  }

  inline void from_json(const nlohmann::json& j, BindingFullEventHelp_t& v) {
    v.description = j.at("description").get<std::string>();
    v.name = j.at("name").get<std::string>();
    v.nameSpace = j.at("nameSpace").get<std::string>();
    v.tags = j.at("tags").get<std::vector<std::string>>();
    v.type = j.at("type").get<BindingFullTypeIdentifier_t>();
  }
}
