#pragma once
#include <json.hpp>
#include <optional>
#include "PlayerLootDTO.hpp"
#include "LootLcdsRecipeListClientDTO.hpp"
#include "QueryResultDTO.hpp"
#include "LootItemListClientDTO.hpp"
namespace leagueapi {
  struct PlayerLootDefinitionsDTO_t {
    LootItemListClientDTO_t lootItemList;
    std::vector<PlayerLootDTO_t> playerLoot;
    QueryResultDTO_t queryResult;
    LootLcdsRecipeListClientDTO_t recipeList;
  };

  inline void to_json(nlohmann::json& j, const PlayerLootDefinitionsDTO_t& v) {
    j["lootItemList"] = v.lootItemList;
    j["playerLoot"] = v.playerLoot;
    j["queryResult"] = v.queryResult;
    j["recipeList"] = v.recipeList;
  }

  inline void from_json(const nlohmann::json& j, PlayerLootDefinitionsDTO_t& v) {
    v.lootItemList = j.at("lootItemList").get<LootItemListClientDTO_t>();
    v.playerLoot = j.at("playerLoot").get<std::vector<PlayerLootDTO_t>>();
    v.queryResult = j.at("queryResult").get<QueryResultDTO_t>();
    v.recipeList = j.at("recipeList").get<LootLcdsRecipeListClientDTO_t>();
  }
}
