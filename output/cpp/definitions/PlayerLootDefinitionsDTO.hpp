#pragma once
#include <json.hpp>
#include <optional>
#include "LootLcdsRecipeListClientDTO.hpp"
#include "PlayerLootDTO.hpp"
#include "LootItemListClientDTO.hpp"
#include "QueryResultDTO.hpp"
namespace leagueapi {
  struct PlayerLootDefinitionsDTO_t {
    std::vector<PlayerLootDTO_t> playerLoot;
    QueryResultDTO_t queryResult;
    LootLcdsRecipeListClientDTO_t recipeList;
    LootItemListClientDTO_t lootItemList;
  };

  inline void to_json(nlohmann::json& j, const PlayerLootDefinitionsDTO_t& v) {
    j["playerLoot"] = v.playerLoot;
    j["queryResult"] = v.queryResult;
    j["recipeList"] = v.recipeList;
    j["lootItemList"] = v.lootItemList;
  }

  inline void from_json(const nlohmann::json& j, PlayerLootDefinitionsDTO_t& v) {
    v.playerLoot = j.at("playerLoot").get<std::vector<PlayerLootDTO_t>>();
    v.queryResult = j.at("queryResult").get<QueryResultDTO_t>();
    v.recipeList = j.at("recipeList").get<LootLcdsRecipeListClientDTO_t>();
    v.lootItemList = j.at("lootItemList").get<LootItemListClientDTO_t>();
  }
  inline std::string to_string(const PlayerLootDefinitionsDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
