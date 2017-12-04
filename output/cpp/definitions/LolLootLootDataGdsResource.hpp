#ifndef SWAGGER_TYPES_LolLootLootDataGdsResource_HPP
#define SWAGGER_TYPES_LolLootLootDataGdsResource_HPP
#include <json.hpp>
#include "LolLootLootItemGdsResource.hpp"
#include "LolLootLootRecipeGdsResource.hpp"
namespace leagueapi {
  // 
  struct LolLootLootDataGdsResource {
    // 
    std::vector<LolLootLootRecipeGdsResource> LootRecipes;
    // 
    std::vector<LolLootLootItemGdsResource> LootItems;
  };

  inline void to_json(nlohmann::json& j, const LolLootLootDataGdsResource& v) {
    j["LootRecipes"] = v.LootRecipes;
    j["LootItems"] = v.LootItems;
  }

  inline void from_json(const nlohmann::json& j, LolLootLootDataGdsResource& v) {
    v.LootRecipes = j.at("LootRecipes").get<std::vector<LolLootLootRecipeGdsResource>>;
    v.LootItems = j.at("LootItems").get<std::vector<LolLootLootItemGdsResource>>;
  }

}
#endif // SWAGGER_TYPES_LolLootLootDataGdsResource_HPP
