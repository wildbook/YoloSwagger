#pragma once
#include <json.hpp>
#include <optional>
#include "QueryResultDTO.hpp"
#include "LootLcdsRecipeListClientDTO.hpp"
#include "LootItemListClientDTO.hpp"
#include "PlayerLootDTO.hpp"
namespace leagueapi {
  struct PlayerLootDefinitionsDTO_t {
    LootLcdsRecipeListClientDTO_t recipeList;
    LootItemListClientDTO_t lootItemList;
    QueryResultDTO_t queryResult;
    std::vector<PlayerLootDTO_t> playerLoot;
  };

  inline void to_json(nlohmann::json& j, const PlayerLootDefinitionsDTO_t& v) {
    j["recipeList"] = v.recipeList;
    j["lootItemList"] = v.lootItemList;
    j["queryResult"] = v.queryResult;
    j["playerLoot"] = v.playerLoot;
  }

  inline void from_json(const nlohmann::json& j, PlayerLootDefinitionsDTO_t& v) {
    v.recipeList = j.at("recipeList").get<LootLcdsRecipeListClientDTO_t>();
    v.lootItemList = j.at("lootItemList").get<LootItemListClientDTO_t>();
    v.queryResult = j.at("queryResult").get<QueryResultDTO_t>();
    v.playerLoot = j.at("playerLoot").get<std::vector<PlayerLootDTO_t>>();
  }
  inline std::string to_string(const PlayerLootDefinitionsDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
