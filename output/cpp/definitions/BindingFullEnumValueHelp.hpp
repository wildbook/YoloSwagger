#ifndef SWAGGER_TYPES_BindingFullEnumValueHelp_HPP
#define SWAGGER_TYPES_BindingFullEnumValueHelp_HPP
#include <json.hpp>
namespace leagueapi {
  // Describes an enumerator.
  struct BindingFullEnumValueHelp {
    // 
    std::string description;
    // 
    int32_t value;
    // 
    std::string name;
  };

  inline void to_json(nlohmann::json& j, const BindingFullEnumValueHelp& v) {
    j["description"] = v.description;
    j["value"] = v.value;
    j["name"] = v.name;
  }

  inline void from_json(const nlohmann::json& j, BindingFullEnumValueHelp& v) {
    v.description = j.at("description").get<std::string>;
    v.value = j.at("value").get<int32_t>;
    v.name = j.at("name").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_BindingFullEnumValueHelp_HPP
