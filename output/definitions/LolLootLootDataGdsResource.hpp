#ifndef SWAGGER_TYPES_LolLootLootDataGdsResource_HPP
#define SWAGGER_TYPES_LolLootLootDataGdsResource_HPP
#include <json.hpp>
#include "LolLootLootItemGdsResource.hpp"
#include "LolLootLootRecipeGdsResource.hpp"
namespace leagueapi {
  // 
  struct LolLootLootDataGdsResource {
    // 
    std::vector<LolLootLootItemGdsResource> LootItems;
    // 
    std::vector<LolLootLootRecipeGdsResource> LootRecipes;
  };

  inline void to_json(nlohmann::json& j, const LolLootLootDataGdsResource& v) {
    j["LootItems"] = v.LootItems;
    j["LootRecipes"] = v.LootRecipes;
  }

  inline void from_json(const nlohmann::json& j, LolLootLootDataGdsResource& v) {
    v.LootItems = j.at("LootItems").get<std::vector<LolLootLootItemGdsResource>>;
    v.LootRecipes = j.at("LootRecipes").get<std::vector<LolLootLootRecipeGdsResource>>;
  }

}
#endif // SWAGGER_TYPES_LolLootLootDataGdsResource_HPP
