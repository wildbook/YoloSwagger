#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  // Describes an enumerator.
  struct BindingFullEnumValueHelp_t {
    std::string_t description;
    int32_t_t value;
    std::string_t name;
  };

  inline void to_json(nlohmann::json& j, const BindingFullEnumValueHelp_t& v) {
    j["description"] = v.description;
    j["value"] = v.value;
    j["name"] = v.name;
  }

  inline void from_json(const nlohmann::json& j, BindingFullEnumValueHelp_t& v) {
    v.description = j.at("description").get<std::string_t>();
    v.value = j.at("value").get<int32_t_t>();
    v.name = j.at("name").get<std::string_t>();
  }
  inline std::string to_string(const BindingFullEnumValueHelp_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
