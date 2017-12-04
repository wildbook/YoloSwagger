#ifndef SWAGGER_TYPES_LolLootLootRecipeGdsResource_HPP
#define SWAGGER_TYPES_LolLootLootRecipeGdsResource_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolLootLootRecipeGdsResource {
    // 
    std::string placeholder;
  };

  inline void to_json(nlohmann::json& j, const LolLootLootRecipeGdsResource& v) {
    j["placeholder"] = v.placeholder;
  }

  inline void from_json(const nlohmann::json& j, LolLootLootRecipeGdsResource& v) {
    v.placeholder = j.at("placeholder").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolLootLootRecipeGdsResource_HPP
