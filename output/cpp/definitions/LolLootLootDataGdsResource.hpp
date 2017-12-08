#pragma once
#include <json.hpp>
#include <optional>
#include "LolLootLootItemGdsResource.hpp"
#include "LolLootLootRecipeGdsResource.hpp"
namespace leagueapi {
  struct LolLootLootDataGdsResource_t {
    std::vector<LolLootLootRecipeGdsResource_t> LootRecipes;
    std::vector<LolLootLootItemGdsResource_t> LootItems;
  };

  inline void to_json(nlohmann::json& j, const LolLootLootDataGdsResource_t& v) {
    j["LootRecipes"] = v.LootRecipes;
    j["LootItems"] = v.LootItems;
  }

  inline void from_json(const nlohmann::json& j, LolLootLootDataGdsResource_t& v) {
    v.LootRecipes = j.at("LootRecipes").get<std::vector<LolLootLootRecipeGdsResource_t>>();
    v.LootItems = j.at("LootItems").get<std::vector<LolLootLootItemGdsResource_t>>();
  }
  inline std::string to_string(const LolLootLootDataGdsResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
