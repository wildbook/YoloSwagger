#pragma once
#include <json.hpp>
#include <optional>
#include "LolLootLootRecipeGdsResource.hpp"
#include "LolLootLootItemGdsResource.hpp"
namespace leagueapi {
  struct LolLootLootDataGdsResource_t {
    std::vector<LolLootLootItemGdsResource_t> LootItems;
    std::vector<LolLootLootRecipeGdsResource_t> LootRecipes;
  };

  inline void to_json(nlohmann::json& j, const LolLootLootDataGdsResource_t& v) {
    j["LootItems"] = v.LootItems;
    j["LootRecipes"] = v.LootRecipes;
  }

  inline void from_json(const nlohmann::json& j, LolLootLootDataGdsResource_t& v) {
    v.LootItems = j.at("LootItems").get<std::vector<LolLootLootItemGdsResource_t>>();
    v.LootRecipes = j.at("LootRecipes").get<std::vector<LolLootLootRecipeGdsResource_t>>();
  }
}
