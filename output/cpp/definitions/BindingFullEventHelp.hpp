#pragma once
#include <json.hpp>
#include <optional>
#include "BindingFullTypeIdentifier.hpp"
namespace leagueapi {
  // Describes an event.
  struct BindingFullEventHelp_t {
    std::string description;
    BindingFullTypeIdentifier_t type;
    std::string name;
    std::vector<std::string> tags;
    std::string nameSpace;
  };

  inline void to_json(nlohmann::json& j, const BindingFullEventHelp_t& v) {
    j["description"] = v.description;
    j["type"] = v.type;
    j["name"] = v.name;
    j["tags"] = v.tags;
    j["nameSpace"] = v.nameSpace;
  }

  inline void from_json(const nlohmann::json& j, BindingFullEventHelp_t& v) {
    v.description = j.at("description").get<std::string>();
    v.type = j.at("type").get<BindingFullTypeIdentifier_t>();
    v.name = j.at("name").get<std::string>();
    v.tags = j.at("tags").get<std::vector<std::string>>();
    v.nameSpace = j.at("nameSpace").get<std::string>();
  }
  inline std::string to_string(const BindingFullEventHelp_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
