#ifndef SWAGGER_TYPES_LolLootLootRecipeGdsResource_HPP
#define SWAGGER_TYPES_LolLootLootRecipeGdsResource_HPP
#include <json.hpp>
namespace test {
  // 
  struct LolLootLootRecipeGdsResource {
'    // 
    std::string placeholder;
  };

  void to_json(nlohmann::json& j, const LolLootLootRecipeGdsResource& v) {
    j["placeholder"] = v.placeholder;
  }

  void from_json(const nlohmann::json& j, LolLootLootRecipeGdsResource& v) {
    v.placeholder = j.at("placeholder").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolLootLootRecipeGdsResource_HPP
