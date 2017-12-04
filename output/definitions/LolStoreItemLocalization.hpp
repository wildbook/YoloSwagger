#ifndef SWAGGER_TYPES_LolStoreItemLocalization_HPP
#define SWAGGER_TYPES_LolStoreItemLocalization_HPP
#include <json.hpp>
namespace test {
  // 
  struct LolStoreItemLocalization {
'    // 
    std::string description;
    // 
    std::string language;
    // 
    std::string name;
  };

  void to_json(nlohmann::json& j, const LolStoreItemLocalization& v) {
    j["description"] = v.description;
    j["language"] = v.language;
    j["name"] = v.name;
  }

  void from_json(const nlohmann::json& j, LolStoreItemLocalization& v) {
    v.description = j.at("description").get<std::string>;
    v.language = j.at("language").get<std::string>;
    v.name = j.at("name").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolStoreItemLocalization_HPP
