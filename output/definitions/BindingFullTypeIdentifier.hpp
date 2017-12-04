#ifndef SWAGGER_TYPES_BindingFullTypeIdentifier_HPP
#define SWAGGER_TYPES_BindingFullTypeIdentifier_HPP
#include <json.hpp>
namespace leagueapi {
  // Describes the type of a value.
  struct BindingFullTypeIdentifier {
    // 
    std::string elementType;
    // 
    std::string type;
  };

  void to_json(nlohmann::json& j, const BindingFullTypeIdentifier& v) {
    j["elementType"] = v.elementType;
    j["type"] = v.type;
  }

  void from_json(const nlohmann::json& j, BindingFullTypeIdentifier& v) {
    v.elementType = j.at("elementType").get<std::string>;
    v.type = j.at("type").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_BindingFullTypeIdentifier_HPP
