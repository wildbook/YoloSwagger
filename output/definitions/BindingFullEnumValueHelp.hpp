#ifndef SWAGGER_TYPES_BindingFullEnumValueHelp_HPP
#define SWAGGER_TYPES_BindingFullEnumValueHelp_HPP
#include <json.hpp>
namespace leagueapi {
  // Describes an enumerator.
  struct BindingFullEnumValueHelp {
    // 
    std::string description;
    // 
    std::string name;
    // 
    int32_t value;
  };

  inline void to_json(nlohmann::json& j, const BindingFullEnumValueHelp& v) {
    j["description"] = v.description;
    j["name"] = v.name;
    j["value"] = v.value;
  }

  inline void from_json(const nlohmann::json& j, BindingFullEnumValueHelp& v) {
    v.description = j.at("description").get<std::string>;
    v.name = j.at("name").get<std::string>;
    v.value = j.at("value").get<int32_t>;
  }

}
#endif // SWAGGER_TYPES_BindingFullEnumValueHelp_HPP
