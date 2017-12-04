#ifndef SWAGGER_TYPES_PlayerLootDefinitionsDTO_HPP
#define SWAGGER_TYPES_PlayerLootDefinitionsDTO_HPP
#include <json.hpp>
#include "QueryResultDTO.hpp"
#include "LootLcdsRecipeListClientDTO.hpp"
#include "LootItemListClientDTO.hpp"
#include "PlayerLootDTO.hpp"
namespace leagueapi {
  // 
  struct PlayerLootDefinitionsDTO {
    // 
    LootLcdsRecipeListClientDTO recipeList;
    // 
    LootItemListClientDTO lootItemList;
    // 
    QueryResultDTO queryResult;
    // 
    std::vector<PlayerLootDTO> playerLoot;
  };

  inline void to_json(nlohmann::json& j, const PlayerLootDefinitionsDTO& v) {
    j["recipeList"] = v.recipeList;
    j["lootItemList"] = v.lootItemList;
    j["queryResult"] = v.queryResult;
    j["playerLoot"] = v.playerLoot;
  }

  inline void from_json(const nlohmann::json& j, PlayerLootDefinitionsDTO& v) {
    v.recipeList = j.at("recipeList").get<LootLcdsRecipeListClientDTO>;
    v.lootItemList = j.at("lootItemList").get<LootItemListClientDTO>;
    v.queryResult = j.at("queryResult").get<QueryResultDTO>;
    v.playerLoot = j.at("playerLoot").get<std::vector<PlayerLootDTO>>;
  }

}
#endif // SWAGGER_TYPES_PlayerLootDefinitionsDTO_HPP
