#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  // Describes an enumerator.
  struct BindingFullEnumValueHelp_t {
    std::string description;
    std::string name;
    int32_t value;
  };

  inline void to_json(nlohmann::json& j, const BindingFullEnumValueHelp_t& v) {
    j["description"] = v.description;
    j["name"] = v.name;
    j["value"] = v.value;
  }

  inline void from_json(const nlohmann::json& j, BindingFullEnumValueHelp_t& v) {
    v.description = j.at("description").get<std::string>();
    v.name = j.at("name").get<std::string>();
    v.value = j.at("value").get<int32_t>();
  }
  inline std::string to_string(const BindingFullEnumValueHelp_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
