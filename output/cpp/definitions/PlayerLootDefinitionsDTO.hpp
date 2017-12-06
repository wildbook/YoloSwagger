#pragma once
#include <json.hpp>
#include <optional>
#include "LootItemListClientDTO.hpp"
#include "PlayerLootDTO.hpp"
#include "LootLcdsRecipeListClientDTO.hpp"
#include "QueryResultDTO.hpp"
namespace leagueapi {
  struct PlayerLootDefinitionsDTO_t {
    QueryResultDTO_t queryResult;
    std::vector<PlayerLootDTO_t> playerLoot;
    LootItemListClientDTO_t lootItemList;
    LootLcdsRecipeListClientDTO_t recipeList;
  };

  inline void to_json(nlohmann::json& j, const PlayerLootDefinitionsDTO_t& v) {
    j["queryResult"] = v.queryResult;
    j["playerLoot"] = v.playerLoot;
    j["lootItemList"] = v.lootItemList;
    j["recipeList"] = v.recipeList;
  }

  inline void from_json(const nlohmann::json& j, PlayerLootDefinitionsDTO_t& v) {
    v.queryResult = j.at("queryResult").get<QueryResultDTO_t>();
    v.playerLoot = j.at("playerLoot").get<std::vector<PlayerLootDTO_t>>();
    v.lootItemList = j.at("lootItemList").get<LootItemListClientDTO_t>();
    v.recipeList = j.at("recipeList").get<LootLcdsRecipeListClientDTO_t>();
  }
}
