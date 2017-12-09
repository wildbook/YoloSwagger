#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  // Describes an enumerator.
  struct BindingFullEnumValueHelp_t {
    std::string name;
    int32_t value;
    std::string description;
  };

  inline void to_json(nlohmann::json& j, const BindingFullEnumValueHelp_t& v) {
    j["name"] = v.name;
    j["value"] = v.value;
    j["description"] = v.description;
  }

  inline void from_json(const nlohmann::json& j, BindingFullEnumValueHelp_t& v) {
    v.name = j.at("name").get<std::string>();
    v.value = j.at("value").get<int32_t>();
    v.description = j.at("description").get<std::string>();
  }
  inline std::string to_string(const BindingFullEnumValueHelp_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
